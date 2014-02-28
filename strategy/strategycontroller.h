/*
 * strategycontroller.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#ifndef STRATEGYCONTROLLER_H_
#define STRATEGYCONTROLLER_H_

#include "../communication/message.h"
#include "../communication/receiver.h"
#include "strategy.h"

/**
 * This class assigns the active strategy in response to both refery messages and new vision information.
 */
class StrategyController : public Receiver {
	void rcvMsg(Message * msg);
private:
	/**
	 * Sets the active strategy to play
	 */
	void setActiveStrategy(Message * msg);
	/**
	 * Perform the behaviours for each robot
	 */
	void performStrategy(Message * msg);

	Strategy * activeStrategy;
};



#endif /* STRATEGYCONTROLLER_H_ */
