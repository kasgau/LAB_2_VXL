/*
 * software_timer.h
 *
 *  Created on: Sep 30, 2024
 *      Author: kanza
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

extern int timer1_flag;
extern int timer2_flag;

extern int timer1_counter;
extern int timer2_counter;

void setTimer1(int time);
void setTimer2(int time);

void timerRun();
#endif /* INC_SOFTWARE_TIMER_H_ */
