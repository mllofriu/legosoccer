/*
 * robot.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#include "../communication/message.h"
#include "../behaviour/behaviour.h"

/**
 * This class contains necessary data to reference the actual robot in the issued commands.
 * Could also be used as a datatype to keep information at the strategy level, i.e. current role,
 * position, etc.
 */
class Robot {
public:
	/**
	 * Perform the active behaviour
	 */
	void perform(Message * msg);

	/**
	 * Sets the active behaviour
	 */
	void setActiveBehavior(Behaviour * b);
private:
	Behaviour * activeBehaviour;
};

#endif /* ROBOT_H_ */
