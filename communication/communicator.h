/*
 * communicator.h
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#ifndef COMMUNICATOR_H_
#define COMMUNICATOR_H_

#include <vector>

#include "../strategy/strategycontroller.h"
#include "message.h"
#include "receiver.h"

class Communicator {
public:
	/**
	 * Method to subscribe a listener for new messages
	 */
	void setReceiver(Receiver * sctrl);

	/**
	 * Method to send a message through the specified channel
	 */
	virtual void sendMsg(Message * msg) = 0;

	/**
	 * Wait for a new message to arrive and return it
	 */
	virtual Message * getNewMsg() = 0;

	/**
	 * Run cycle for the thread. Receives a msg and tells all subscribers
	 */
	virtual void run();
private:
	Receiver * receiver;
};

#endif /* COMMUNICATOR_H_ */
