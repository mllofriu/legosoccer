/*
 * cmdcommunicator.c
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#include <iostream>

#include "cmdcommunicator.h"
#include "strmessage.h"

CmdCommunicator::CmdCommunicator() {
}

void CmdCommunicator::sendMsg(StrMessage* msg) {
	std::cout << "Sending message " << msg->toString() << std::endl;
}

StrMessage * CmdCommunicator::getNewMsg() {
	std::string msg;
	std::cout << "Enter message: ";
	std::cin >> msg;
	return new StrMessage(msg);
}


