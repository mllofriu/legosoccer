/*
 * strategycontroller.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#include "strategycontroller.h"

void StrategyController::rcvMsg(Message* msg) {
	setActiveStrategy(msg);
	performStrategy(msg);
}

void StrategyController::setActiveStrategy(Message* msg) {
	// Set the strategy taking the info in message into account
}

void StrategyController::performStrategy(Message* msg) {
}
