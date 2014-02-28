/*
 * cmdcommunicator.h
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#ifndef CMDCOMMUNICATOR_H_
#define CMDCOMMUNICATOR_H_

#include "communicator.h"
#include "strmessage.h"

class CmdCommunicator : public Communicator {
public:
	CmdCommunicator();

	void sendMsg(StrMessage * msg);

	virtual void sendMsg(Message * msg) { };

	StrMessage * getNewMsg();

};

#endif /* CMDCOMMUNICATOR_H_ */
