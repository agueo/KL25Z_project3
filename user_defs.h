#ifndef USER_DEFS_H
#define USER_DEFS_H

#include <MKL25Z4.H>
#include <cmsis_os2.h>

// Struct for the messages going into a message queue
typedef struct 
{
	int ChannelNum;
	void *ResultPtr;
	osThreadId_t TID;
	int FlagNum;
} adc_message_t;

#endif