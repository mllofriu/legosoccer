/*
 * main.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#include "cmdcommunicator.h"
#include "cmdreceiver.h"

int main (int argc, char ** argv) {
	CmdCommunicator * comm = new CmdCommunicator();
	comm->addReceiver(new CmdReceiver());

	comm->run();

	return 0;
}
