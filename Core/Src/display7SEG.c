/*
 * display7SEG.c
 *
 *  Created on: Sep 25, 2023
 *      Author: trand
 */

#include "main.h"
#include "display7SEG.h"

void turnOff7SEG() {
	HAL_GPIO_WritePin(segA_GPIO_Port, segA_Pin, 1);
	HAL_GPIO_WritePin(segB_GPIO_Port, segB_Pin, 1);
	HAL_GPIO_WritePin(segC_GPIO_Port, segC_Pin, 1);
	HAL_GPIO_WritePin(segD_GPIO_Port, segD_Pin, 1);
	HAL_GPIO_WritePin(segE_GPIO_Port, segE_Pin, 1);
	HAL_GPIO_WritePin(segF_GPIO_Port, segF_Pin, 1);
	HAL_GPIO_WritePin(segG_GPIO_Port, segG_Pin, 1);
}

void display7SEG(int num) {

}
