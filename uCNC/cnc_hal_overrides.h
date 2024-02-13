#ifndef CNC_HAL_OVERRIDES_H
#define CNC_HAL_OVERRIDES_H
#ifdef __cplusplus
extern "C"
{
#endif

#include "cnc_hal_reset.h"
#define DISABLE_ALL_CONTROLS
#define LIMIT_X_PULLUP_ENABLE
#define LIMIT_Y_PULLUP_ENABLE
#define LIMIT_X2_PULLUP_ENABLE
#define LIMIT_Y2_PULLUP_ENABLE
#define DISABLE_PROBE
#define TOOL1 pen_servo
#define PEN_SERVO_PWM PWM0
#define PEN_SERVO_PWM_DIR DOUT0
#define SOFT_SPI_CLK DOUT30
#define SOFT_SPI_SDO DOUT29
#define SOFT_SPI_SDI DIN29
#define IC74HC595_COUNT 0
#define ENCODERS 0

#define LOAD_MODULES_OVERRIDE() ({LOAD_MODULE(m17_m18);})

#ifdef __cplusplus
}
#endif
#endif
