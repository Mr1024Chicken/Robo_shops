#include <iostream>
#include <string>
#include <vector>

#include "Robot_arms.h"
#include "Robot_body.h"
#include "Robot_head.h"
#include "Robot_motor.h"
#include "Robot_battery.h"

using namespace std;

#ifndef Robo_H
#define Robo_H
class Robo{
public:
	void add_arm(Robot_arms rob);
	void add_body(Robot_body bod);

	void print_arms( vector <Robot_arms>& info);
	void print_body(vector <Robot_body>& info);

	vector <Robot_arms> get_arms(){return arm_vec;}
	vector <Robot_body> get_body(){return body_vec;}
	

private:
	vector <Robot_arms> arm_vec;
	vector <Robot_body> body_vec;

};

#endif