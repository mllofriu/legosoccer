/*
 * behaviour.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#ifndef BEHAVIOUR_H_
#define BEHAVIOUR_H_

#include "../communication/message.h"

/**
 * This class encapsulates complex behaviours like 'Cover Goal', 'Cover Attaquer', 'Pass the Ball'
 */
class Behaviour {
public:
	virtual void perform(Message * msg) = 0;
};

#endif /* BEHAVIOUR_H_ */
