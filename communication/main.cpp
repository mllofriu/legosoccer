/*
 * main.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#include "cmdcommunicator.h"
#include "../strategy/strategycontroller.h"

int main (int argc, char ** argv) {
	Communicator * comm = new CmdCommunicator();
	comm->setReceiver(new StrategyController());

	comm->run();

	return 0;
}
