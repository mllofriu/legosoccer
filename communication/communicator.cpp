/*
 * communicator.c
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#include "communicator.h"

void Communicator::setReceiver(Receiver * s) {
	this->receiver = s;
}

void Communicator::run() {
	while(true){
		Message * m = getNewMsg();
		m->dispatchToReceiver(receiver);
//		receiver->rcvMsg(m);
	}
}
