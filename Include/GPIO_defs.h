#ifndef GPIO_DEFS_H
#define GPIO_DEFS_H

#define MASK(x) (1UL << (x))
#include <cmsis_os2.h>
#include <MKL25Z4.h>

// Structs
typedef struct{
	uint8_t ChannelNum;
	uint16_t *ResultPtr;
	osThreadId_t TID;
	uint8_t FlagNum;
} adc_message_t;

// Freedom KL25Z LEDs
#define RED_LED_POS (18)		// on port B
#define GREEN_LED_POS (19)	// on port B
#define BLUE_LED_POS (1)		// on port D



#endif
// *******************************ARM University Program Copyright © ARM Ltd 2013*************************************   
