#include <iostream>
#include <string>
using namespace std;
#ifndef Robot_head_H
#define Robot_head_H

class Robot_head{
public:
	Robot_head(string,string,int,int,string);

	void set_price(int);
	void set_serial_num(string);
private:
	string serial_num;
	int price;
	string name;
	int weight;
	string describe;

};


#endif