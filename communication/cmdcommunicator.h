/*
 * cmdcommunicator.h
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#ifndef CMDCOMMUNICATOR_H_
#define CMDCOMMUNICATOR_H_

#include "communicator.h"

class CmdCommunicator: public Communicator {
public:
	CmdCommunicator();

	virtual void sendMsg(Message * msg);

	virtual Message * getNewMsg();

};

#endif /* CMDCOMMUNICATOR_H_ */
