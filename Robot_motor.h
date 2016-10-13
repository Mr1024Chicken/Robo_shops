#include <iostream>
#include <string>
using namespace std;

#ifndef Robot_motor_H
#define Robot_motor_H

class Robot_motor{

public:
	Robot_motor(string,string,int,int,int,int,string);



private:
	string name;
	string serial;
	int price;
	int weight;
	int speed;
	int consume;
	string describe;


};


#endif
