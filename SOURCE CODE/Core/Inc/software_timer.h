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

void setTimer1(int duration);
void timerRun();
#endif /* INC_SOFTWARE_TIMER_H_ */
