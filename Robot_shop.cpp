#include <iostream>
#include <string>


#include "Controller.h"

using namespace std;


void create_body();


void main(){

	Robo ob;
	Controller contr;
	ob=contr.add_arms(ob);
	
	

	//create_arm();
	//create_arm();
	//create_body();
	//create_body();

	


	ob.print_arms(ob.get_arms());
	ob.print_body(ob.get_body());
		cout <<endl<<"done";
}


