/*
 * clock.c
 *
 *  Created on: Sep 25, 2023
 *      Author: trand
 */

#include "main.h"
#include "clock.h"

void clearAllClock() {
	HAL_GPIO_WritePin(pos0_GPIO_Port, pos0_Pin, 0);
	HAL_GPIO_WritePin(pos1_GPIO_Port, pos1_Pin, 0);
	HAL_GPIO_WritePin(pos2_GPIO_Port, pos2_Pin, 0);
	HAL_GPIO_WritePin(pos3_GPIO_Port, pos3_Pin, 0);
	HAL_GPIO_WritePin(pos4_GPIO_Port, pos4_Pin, 0);
	HAL_GPIO_WritePin(pos5_GPIO_Port, pos5_Pin, 0);
	HAL_GPIO_WritePin(pos6_GPIO_Port, pos6_Pin, 0);
	HAL_GPIO_WritePin(pos7_GPIO_Port, pos7_Pin, 0);
	HAL_GPIO_WritePin(pos8_GPIO_Port, pos8_Pin, 0);
	HAL_GPIO_WritePin(pos9_GPIO_Port, pos9_Pin, 0);
	HAL_GPIO_WritePin(pos10_GPIO_Port, pos10_Pin, 0);
	HAL_GPIO_WritePin(pos11_GPIO_Port, pos11_Pin, 0);
}

void testClock(int counter) {
	switch (counter) {
	case 0: {
		HAL_GPIO_TogglePin(pos0_GPIO_Port, pos0_Pin);
		break;
	}
	case 1: {
		HAL_GPIO_TogglePin(pos1_GPIO_Port, pos1_Pin);
		break;
	}
	case 2: {
		HAL_GPIO_TogglePin(pos2_GPIO_Port, pos2_Pin);
		break;
	}
	case 3: {
		HAL_GPIO_TogglePin(pos3_GPIO_Port, pos3_Pin);
		break;
	}
	case 4: {
		HAL_GPIO_TogglePin(pos4_GPIO_Port, pos4_Pin);
		break;
	}
	case 5: {
		HAL_GPIO_TogglePin(pos5_GPIO_Port, pos5_Pin);
		break;
	}
	case 6: {
		HAL_GPIO_TogglePin(pos6_GPIO_Port, pos6_Pin);
		break;
	}
	case 7: {
		HAL_GPIO_TogglePin(pos7_GPIO_Port, pos7_Pin);
		break;
	}
	case 8: {
		HAL_GPIO_TogglePin(pos8_GPIO_Port, pos8_Pin);
		break;
	}
	case 9: {
		HAL_GPIO_TogglePin(pos9_GPIO_Port, pos9_Pin);
		break;
	}
	case 10: {
		HAL_GPIO_TogglePin(pos10_GPIO_Port, pos10_Pin);
		break;
	}
	case 11: {
		HAL_GPIO_TogglePin(pos11_GPIO_Port, pos11_Pin);
		break;
	}
	default:
		break;
	}
}
