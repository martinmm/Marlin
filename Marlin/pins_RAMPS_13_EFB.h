/**
 * Arduino Mega with RAMPS v1.3 pin assignments
 *
 *  RAMPS_13_EFB (Extruder, Fan, Bed)
 */

#define IS_RAMPS_EFB

#include "pins_RAMPS_13.h"

// Disable normal fan to be able to enable auto fan
#undef FAN_PIN
#define FAN_PIN -1

// Reverse encoder direction
#undef BTN_EN1
#define BTN_EN1 33

#undef BTN_EN2
#define BTN_EN2 31

