#include "Robo.h"

void Robo::add_arm(Robot_arms rob){
	arm_vec.push_back(rob);
}

void Robo::add_body(Robot_body bod){
	body_vec.push_back(bod);
}



void Robo::print_arms(vector <Robot_arms>& info){
	int temp = info.size();
	cout <<endl<<endl<<"------List of available ARMS------"<<endl;
	for(int i =0; i < temp; i++){
	
		cout<< info.size()<<endl;
		cout<<info[i].get_name()<<"  "<< info[i].get_serial()<<"  "<< info[i].get_price()<< endl
			<<info[i].get_weight()<<"  "<<info[i].get_consume()<<"  "<< info[i].get_describe()<<endl<<endl;

		
	}
}

void Robo::print_body(vector <Robot_body>& info){

	int temp = info.size();
	cout <<endl<<endl<<"------List of available TORSO------"<<endl;
	for(int i =0; i < temp; i++){
	
		cout<< info.size()<<endl;
		cout<<info[i].get_name()<<"  "<< info[i].get_serial()<<"  "<< info[i].get_price()<< endl
			<<info[i].get_weight()<<"  "<<info[i].get_batt()<<"  "<< info[i].get_describe()<<endl<<endl;

}

}