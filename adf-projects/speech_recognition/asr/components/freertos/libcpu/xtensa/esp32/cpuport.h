#ifndef CPUPORT_H__
#define CPUPORT_H__

#include <rtconfig.h>

#include <xtensa/hal.h>
#include <xtensa/config/core.h>
#include <xtensa/config/system.h>	/* required for XSHAL_CLIB */
#include <xtensa/xtruntime.h>
#include "esp_private/crosscore_int.h"
#include "esp_timer.h"              /* required for FreeRTOS run time stats */


#include <esp_heap_caps.h>

#include "sdkconfig.h"

#ifdef CONFIG_LEGACY_INCLUDE_COMMON_HEADERS
#include "soc/soc_memory_layout.h"
#endif



#include "esp_attr.h"



#include "xtensa_rtos.h"
#include "freertos/portmacro.h"
#include "FreeRTOS.h"
#include "task.h"


void rt_hw_console_output(const char *str);
char rt_hw_console_getchar(void);

#endif
