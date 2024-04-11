#include "tiny-macro-os.h"
#include "debug.h"
#include "lwipsetup.h"

void lwip_setup() {
    /* setup timer for tiny-macro-os and lwip sys_now */
    NVIC_SetPriority(SysTicK_IRQn,0xff);
    NVIC_EnableIRQ(SysTicK_IRQn);
    SysTick->CTLR= 0;
    SysTick->SR  = 0;
    SysTick->CNT = 0;
    SysTick->CMP = SystemCoreClock / OS_SEC_TICKS;
    SysTick->CTLR= 0xf;

    OS_INIT_TASKS();
    OS_TASK_EXIT_ANOTHER(os_lwip_timeouts);     /* The timeout task waits for the lwip master task to start / 超时任务等待lwip主任务启动 */
}

