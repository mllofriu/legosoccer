/*
 * cmdreceiver.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#ifndef CMDRECEIVER_H_
#define CMDRECEIVER_H_

#include "message.h"
#include "receiver.h"

class CmdReceiver : public Receiver {
public:
	void rcvMsg(Message * msg);
};



#endif /* CMDRECEIVER_H_ */
