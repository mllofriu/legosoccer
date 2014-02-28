/*
 * communicator.c
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#include "communicator.h"

void Communicator::addReceiver(Receiver* r) {
	subscribers.push_back(r);
}

void Communicator::clearReceivers() {
	subscribers.clear();
}

void Communicator::run() {
	while (true) {
		Message * msg = getNewMsg();
		for (std::vector<Receiver*>::iterator iter = subscribers.begin();
				iter != subscribers.end(); iter++) {
			(*iter)->rcvMsg(msg);
		}
	}
}
