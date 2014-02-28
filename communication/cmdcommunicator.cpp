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

void CmdCommunicator::sendMsg(Message * msg) {
	if (typeid(msg) == typeid(StrMessage*)) {
		std::cout << ((StrMessage*) msg)->toString();
	}
}

Message * CmdCommunicator::getNewMsg() {
	std::string msg;
	std::cout << "Enter message: ";
	std::cin >> msg;
	return (Message *) (new StrMessage(msg));
}
