#pragma once

#include_next <board.h>

// Define STM32 clock
#undef STM32_HSECLK
#define STM32_HSECLK 16000000
