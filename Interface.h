//base class set as interface - most cout/cin functionality will live in main, howwever this class will serve
// as the base class for other classes with on/off methods
#include <iostream> 
#pragma once
using namespace std;

class interface {
public:
	interface(); //default constructor - I don't think I need to pass a variable here yet! Not sure. 
	
	string turnOn(string setOn);
	string turnOff(string setOff);
};