/*
 * strategy.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#ifndef STRATEGY_H_
#define STRATEGY_H_

#include <vector>

#include "robot.h"
#include "../communication/message.h"

/**
 * This class is devoted to role assigning to each robot, which means setting their active behavior.
 * Their actions will depend on the contents of the received messages, which should always be vision
 * messages.
 * Examples of possible sublclasses would be 'Attack', 'Deffend', 'Penalty', 'Stop', 'Halt', 'SideKick'
 */
class Strategy {
public:
	/**
	 * Constructor that takes a vector of robots and saves it in the strategy
	 */
	Strategy(std::vector<Robot*> robots);

	/**
	 * Assigns behaviours to robots and makes them perform
	 */
	virtual void perform(Message * msg);

	/**
	 * Assigns new behaviours to robots if necessary
	 */
	virtual void assignBehavioursToRobots(Message * msg) = 0;

	/**
	 * Get the robots
	 */
	std::vector<Robot*> getRobots();

private:
	std::vector<Robot*> robots;
};



#endif /* STRATEGY_H_ */
