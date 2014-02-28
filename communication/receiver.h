/*
 * receiver.h
 *
 *  Created on: Feb 27, 2014
 *      Author: ludo
 */

#ifndef RECEIVER_H_
#define RECEIVER_H_

#include "message.h"

class Receiver {
public:
	virtual void rcvMsg(Message * msg) = 0;
};

#endif /* RECEIVER_H_ */
