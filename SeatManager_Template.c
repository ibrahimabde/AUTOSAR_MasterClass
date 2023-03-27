/**
 *
 * \file SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3/23/2023 03:12 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SeatManager.h"


/**
 *
 * Runnable SeatManager_SetHight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HightBtnState
 *
 */

void SeatManager_SetHight (void)
{
	Std_ReturnType status;
	MultiStateButtonType HightBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_HightBtnState(&HightBtnState);
	
	if (HightBtnState == MULTI_BTN_STATE_MINUS)
	{
		Rte_Call_rpHightMotor_Move(MOTOR_STEP_MINUS);
	}
	else if(HightBtnState == MULTI_BTN_STATE_PLUS)
	{
		Rte_Call_rpHightMotor_Move(MOTOR_STEP_PLUS);
	}
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_InclineBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	boolean InclineBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);

	if (InclineBtnState == MULTI_BTN_STATE_MINUS)
	{
		Rte_Call_rpInclineMotor_Move(MOTOR_STEP_MINUS);
	}
	else if(InclineBtnState == MULTI_BTN_STATE_PLUS)
	{
		Rte_Call_rpInclineMotor_Move(MOTOR_STEP_PLUS);
	}	
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	boolean SlideBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);

	if (SlideBtnState == MULTI_BTN_STATE_MINUS)
	{
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
	}
	else if(SlideBtnState == MULTI_BTN_STATE_PLUS)
	{
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
	}		
}

