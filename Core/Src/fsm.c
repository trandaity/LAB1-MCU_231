/*
 * fsm.c
 *
 *  Created on: Sep 25, 2023
 *      Author: trand
 */

#include "main.h"
#include "display7SEG.h"
#include "fsm.h"

int status = INIT;
int counter = 0;

void trafficLightsFSM() {
	display7SEG(counter--);
	switch (status) {
	case INIT: {
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 0);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, YELLOW_1_Pin, 0);

		status = RED;
		counter = 5;
	}
	case RED: {
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 0);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, YELLOW_1_Pin, 1);

		if (counter <= 0) {
			status = GREEN;
			counter = 3;
		}

		break;
	}
	case GREEN: {
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 0);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 1);

		if (counter <= 0) {
			status = YELLOW;
			counter = 2;
		}

		break;
	}
	case YELLOW: {
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 0);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 1);

		if (counter <= 0) {
			status = RED;
			counter = 5;
		}

		break;
	}
	default:
		break;
	}
}
