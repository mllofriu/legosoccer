/*
 * cmdreceiver.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */
#include <iostream>

#include "cmdreceiver.h"
#include "strmessage.h"

void CmdReceiver::rcvMsg(Message* msg) {
	std::cout << "Received message: " << ((StrMessage*)msg)->toString() << '\n';
}
