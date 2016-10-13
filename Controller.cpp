#include "Controller.h"


Robo Controller::add_arms( Robo info){
	string name;
	string serial;
	int price;
	int weight;
	string describe;
	/*try{
		if(type<1 || type > 5) throw Controller_exception();
	}
	catch(Controller_exception){
		cerr << "Such function doesn't Exist try again!"<<endl;
	}*/


	int consume;
	cout <<"Name : "  ;
	
	getline(cin,name);
	//cin >>name;
	cout <<"Serial Number: " ;
	//cin.ignore();
	getline(cin,serial);
	//cin >>serial;
	cout <<"Price: ";
	cin >> price;
	cout <<"Weight: ";
	cin >>weight;
	cout <<"Energy Consumtion: ";
	cin >>consume;
	cout <<"Brief Desription: ";
	cin.ignore();
	getline(cin,describe);
	//cin >> describe;
	info.add_arm(Robot_arms(name,serial,price,weight,consume,describe));
	return info;
		
}