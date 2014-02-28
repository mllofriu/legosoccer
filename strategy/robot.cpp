/*
 * robot.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */
#include "robot.h"

void Robot::perform(Message* msg) {
	this->activeBehaviour->perform(msg);
}

void Robot::setActiveBehavior(Behaviour* b) {
}
