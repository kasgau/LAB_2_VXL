/*
 * EX4.h
 *
 *  Created on: Sep 30, 2024
 *      Author: kanza
 */

#ifndef INC_EX9_H_
#define INC_EX9_H_
#include "main.h"

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

extern int hour;
extern int minute;
extern int second;

extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
extern uint8_t matrix_buffer[8];

void updateLEDMatrix(int index);
void displayLEDMatrix(uint8_t index);
void resetAllLEDMatrix();
void shiftDown();

void update7SEG(int index);
void updateClockBuffer();

#endif /* INC_EX9_H_ */
