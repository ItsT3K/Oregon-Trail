/*
 * oregon.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Michael
 */


#ifndef OREGON_TRAIL_OREGON_H_
#define OREGON_TRAIL_OREGON_H_
#include <iostream>
#include <stdio.h>
#include <string>
#include <ctime>
#define P_STRING "\n\t========================================\n\t|How much do you want to spend on your |\n\t|%s?\n\t========================================"

	int purchase(char* item, int max, int min);
	int setDate();
	int beginTurn();
	int turnOptions();
	int fortStop();
	int hunting();
	int eating();
	int ridersAttack();
	int selectEvents();
	int mountains();
	int dying(int opt);
	int finalTurn();
	int shooting();
	int illness();
	


#endif /* OREGON_TRAIL_OREGON_H_ */
