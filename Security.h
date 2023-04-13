//header file for security - includes methods for controlling the security system, derived from the interface class
#include "Interface.h"
#pragma once
using namespace std;

class Security : public interface {
private:
	int motionSet = 3; //default motion settings, will have getters and setters below
public:
	Security(); //default constructor

	string setOn = "Off";

	string alarmOn(string set); // method to arm the alarm

	int getMotion();
	void setMotion(int newSetting); //sets new motion detection setting

	void motionTest(); //will be the method that creates a text file, writes some data, and records the health of the security system (required i/o example) 

};
