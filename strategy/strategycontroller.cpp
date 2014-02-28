/*
 * strategycontroller.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#include <iostream>

#include "strategycontroller.h"


void StrategyController::rcvMsg(Message* msg) {
	std::cout << "Received a generic message" << std::endl;
	setActiveStrategy(msg);
	performStrategy(msg);
}

void StrategyController::rcvMsg(StrMessage * msg){
	std::cout << "Strategy controller received a message: " << msg->toString() << std::endl;
}

void StrategyController::setActiveStrategy(Message* msg) {
	// Set the strategy taking the info in message into account
}

void StrategyController::performStrategy(Message* msg) {
}

void StrategyController::performStrategy(StrMessage* msg) {

}
