/*
 * FSM_AUTOMATIC.c
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */

#include <fsm_simple_button.h>

void fsm_simple_buttons_run(){
	switch (status){
	case INIT:
		status = STA_NORMAL;
		counter = 9;
		display7SEG(counter);
		setTimer1(1000);
		setTimer2(1000);
		break;
	case STA_NORMAL:
		//--------Add new code state machine step3-----------
		if (timer2_flag == 1){
			if (counter > 0) counter--;
			display7SEG(counter);
			setTimer2(1000);
		}
		//---------------------------------------------------
		if (isButtonflag(but1) == 1){
			status = STA_RESET;
			counter = 0;
			display7SEG(counter);
			setTimer1(10000); // add new change state machine step3
		}
		if (isButtonflag(but2) == 1){
			status = STA_INC;
			counter ++;
			if (counter > 9 ) counter = 0;
			display7SEG(counter);
			setTimer1(10000); // add new change state machine step3
		}
		if (isButtonflag(but3) == 1){
			status = STA_DEC;
			counter --;
			if (counter < 0 ) counter = 9;
			display7SEG(counter);
			setTimer1(10000); // add new change state machine step3
		}

		break;
	case STA_RESET:
		//--------Add new code state machine step3-----------
		if (timer1_flag == 1){
			status = STA_NORMAL;
			setTimer1(1000);
		}
		//----------------------------------
		if (isButtonflag(but1) == 1){
			status = STA_RESET;
			counter = 0;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}
		if (isButtonflag(but2) == 1){
			status = STA_INC;
			counter++;
			if (counter > 9 ) counter = 0;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}
		if (isButtonflag(but3) == 1){
			status = STA_DEC;
			counter--;
			if (counter < 0 ) counter = 9;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}

		break;
	case STA_INC:

		//--------Add new code state machine step3-----------
		if (timer1_flag == 1){
			status = STA_NORMAL;
			setTimer1(1000);
		}
		//--------------------------------------------------
		if (isButtonflag(but1) == 1){
			status = STA_RESET;
			counter = 0;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}
		if (isButtonflag(but2) == 1){
			status = STA_INC;
			counter++;
			if (counter > 9 ) counter = 0;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}
		if (isButtonflag(but3) == 1){
			status = STA_DEC;
			counter--;
			if (counter < 0 ) counter = 9;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}
		break;
	case STA_DEC:
		//--------Add new code state machine step3-----------
		if (timer1_flag == 1){
			status = STA_NORMAL;
			setTimer1(1000);
		}
		//-----------------------------------------------------
		if (isButtonflag(but1) == 1){
			status = STA_RESET;
			counter = 0;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}
		if (isButtonflag(but2) == 1){
			status = STA_INC;
			counter++;
			if (counter > 9 ) counter = 0;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}
		if (isButtonflag(but3) == 1){
			status = STA_DEC;
			counter--;
			if (counter < 0 ) counter = 9;
			display7SEG(counter);
			setTimer1(10000);// add new change state machine step3
		}
		break;
	default:
		break;
	}

}


