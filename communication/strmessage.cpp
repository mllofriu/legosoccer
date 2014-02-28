/*
 * strmessage.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */
#include "strmessage.h"

StrMessage::StrMessage(std::string str) {
	content = str;
}

std::string StrMessage::toString() {
	return content;
}

void StrMessage::dispatchToReceiver(Receiver* r) {
	r->rcvMsg(this);
}
