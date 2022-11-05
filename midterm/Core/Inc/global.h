/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */
#include "main.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#define INIT 			0

#define STA_NORMAL 		1
#define STA_RESET 		2
#define STA_INC 		3
#define STA_DEC 		4

extern  int status;

extern int but1;
extern int but2;
extern int but3;

extern int counter;


#endif /* INC_GLOBAL_H_ */
