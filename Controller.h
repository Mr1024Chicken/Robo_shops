#include <iostream>
#include <string>
#include <vector>

#include "Robo.h"
#include "Robot_arms.h"
#include "Robot_body.h"
#include "Robot_head.h"
#include "Robot_motor.h"
#include "Robot_battery.h"

#ifndef Controller_H
#define Controller_H

class Controller{
public:

	Robo add_arms(Robo);

};

class Controller_exception{};

#endif