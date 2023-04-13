//subclass to interface, controlls the house lights, will use the individual objects created to make lights for each room
#include "Interface.h"
#include <iostream>
using namespace std;

class Lights : public interface {
private:
	string room;
	int brightness = 2; //default brightness setting
public:
	Lights(); //default class constructor
	int* bright = &brightness;
	
	int getBrightness(); //retrieves current brightness settings
	void setBrightness(int newBright); //sets brightness


};
