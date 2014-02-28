/*
 * strmessage.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#ifndef STRMESSAGE_H_
#define STRMESSAGE_H_

#include <string>

#include "message.h"

class Message;

class StrMessage : public Message {
public:
	StrMessage(std::string str);
	std::string toString();

	virtual void dispatchToReceiver(Receiver * r);

private:
	std::string content;
};


#endif /* STRMESSAGE_H_ */
