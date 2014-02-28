/*
 * strategycontroller.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#ifndef STRATEGYCONTROLLER_H_
#define STRATEGYCONTROLLER_H_

#include "../communication/message.h"
#include "../communication/strmessage.h"
#include "../communication/receiver.h"
#include "strategy.h"


/**
 * This class assigns the active strategy in response to both refery messages and new vision information.
 */
class StrategyController : public Receiver {
public:
	void rcvMsg(Message * msg);

	void rcvMsg(StrMessage * msg);

	virtual void performStrategy(Message * msg);

	virtual void performStrategy(StrMessage * msg);

private:
	/**
	 * Sets the active strategy to play
	 */
	void setActiveStrategy(Message * msg);
	/**
	 * Perform the behaviours for each robot
	 */


	Strategy * activeStrategy;
};



#endif /* STRATEGYCONTROLLER_H_ */
