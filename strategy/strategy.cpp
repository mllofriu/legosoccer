/*
 * strategy.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ludo
 */

#include "strategy.h"

Strategy::Strategy(std::vector<Robot*> robots) {
	this->robots = robots;
}

void Strategy::perform(Message* msg) {
	this->assignBehavioursToRobots(msg);
	for (std::vector<Robot*>::iterator it = robots.begin(); it != robots.end();
			it++) {
		(*it)->perform(msg);
	}
}

std::vector<Robot*> Strategy::getRobots() {
	return robots;
}
