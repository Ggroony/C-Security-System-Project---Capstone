//header file to create the thermostat class and the controls for the user. Inherits from interface. 
#include "Interface.h"
#include <iostream>
#pragma once

class Thermostat : public interface {
public: 
	Thermostat(); //default constructor
	Thermostat(int Temp); //constructor accepting the new temperature setting
	
	int defaultTemp;
	string HVAC = "Off"; //defualt setting for the HVAC, it can be either Off, AC, or Heat
	int eveningTemp;
	int morningTemp;
	
	int getTemp(); //returns the current temperature
	
	void setTemp(int newTemp); //Adjust temperature in the house accepts the int newTemp which is the new temp setting
	
	void toggleHVAC(string newHVAC); //changes the HVAC setting, should only accept Off, AC or Heat
	string getHVAC(); //returns current HVAC setting

	string getEveningTemp(); // returns current evening temp
	void setEveningTemp(int newEvTemp); //sets new evening temperature
	string getMorningTemp(); // returns current morning temp
	void setMorningTemp(int newMoTemp); //sets new morning temperature

};
