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

class StrMessage : Message {
public:
	StrMessage(std::string str);
	std::string toString();

private:
	std::string content;
};


#endif /* STRMESSAGE_H_ */
