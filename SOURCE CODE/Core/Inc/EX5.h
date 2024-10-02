/*
 * EX4.h
 *
 *  Created on: Sep 30, 2024
 *      Author: kanza
 */

#ifndef INC_EX5_H_
#define INC_EX5_H_
#include "main.h"

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

extern int hour;
extern int minute;
extern int second;

void update7SEG(int index);
void updateClockBuffer();

#endif /* INC_EX5_H_ */
