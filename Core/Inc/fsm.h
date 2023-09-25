/*
 * fsm.h
 *
 *  Created on: Sep 25, 2023
 *      Author: trand
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#define INIT 0
#define RED 1
#define GREEN 2
#define YELLOW 3

extern int status;
extern int counter;

void trafficLightsFSM();

#endif /* INC_FSM_H_ */
