/*
 * main.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: ryan
 */

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void candy();

int main(){
	candy();
	return 0;
}

void candy(){
	float fundLeft = 1.0;
	float cost;
	int numCandies = 0;

	for(cost=0.1; cost <= fundLeft; cost += 0.1) {
		numCandies++;
		fundLeft = round(10 * (fundLeft - cost))/10;
	}

	printf("%d candies; %f left over\n", numCandies, fundLeft);
}
