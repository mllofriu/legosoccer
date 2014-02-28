/*
 * communicator.h
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#ifndef COMMUNICATOR_H_
#define COMMUNICATOR_H_

#include <vector>

#include "receiver.h"
#include "message.h"

class Communicator {
public:
	/**
	 * Method to subscribe a listener for new messages
	 */
	void addReceiver(Receiver * r);

	/**
	 * Clean the list of listeners.
	 */
	void clearReceivers();

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
	void run();

private:
	/**
	 * List of subscribers
	 */
	std::vector<Receiver *> subscribers;
};

#endif /* COMMUNICATOR_H_ */
