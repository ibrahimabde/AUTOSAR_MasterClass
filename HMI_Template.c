/**
 *
 * \file HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3/23/2023 03:12 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HMI.h"


/**
 *
 * Runnable HMI_MainFunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_HMI_MainFunction_100ms
 *
 */

void HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateButtonType HightBtnState;
	boolean InclineBtnState;
	boolean SlideBtnState;
	uint8 Hight;
	boolean Incline;
	boolean Slide;
	
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_Hight(&Hight);
	status = Rte_Read_rpSeatCtrlData_Incline(&Incline);
	status = Rte_Read_rpSeatCtrlData_Slide(&Slide);
	
	if (hight == 0 || TIMEOUT || NOT_UPDATED)
	{
		HightBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(hight == 1)
	{
		HightBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(hight ==2)
	{
		HightBtnState = MULTI_STATE_BTN_PLUS;
	}

		if (Incline == 0 || TIMEOUT || NOT_UPDATED)
	{
		InclineBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(Incline == 1)
	{
		InclineBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(Incline ==2)
	{
		InclineBtnState = MULTI_STATE_BTN_PLUS;
	}

		if (Slide == 0 || TIMEOUT || NOT_UPDATED)
	{
		SlideBtnState = MULTI_STATE_BTN_INIT;
	}
	else if(Slide == 1)
	{
		SlideBtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(Slide ==2)
	{
		SlideBtnState = MULTI_STATE_BTN_PLUS;
	}

	/* Data Send Points */
	status = Rte_Write_ppSeatCrlBtns_HightBtnState(HightBtnState);
	status = Rte_Write_ppSeatCrlBtns_InclineBtnState(InclineBtnState);
	status = Rte_Write_ppSeatCrlBtns_SlideBtnState(SlideBtnState);
}

