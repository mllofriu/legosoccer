/*
 * message.h
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#ifndef MESSAGE_H_
#define MESSAGE_H_

#include "receiver.h"

class Message {

public:
	/**
	 * Method due to double dispatch techniques
	 */
	virtual void dispatchToReceiver(Receiver * r) = 0;
};



#endif /* MESSAGE_H_ */
