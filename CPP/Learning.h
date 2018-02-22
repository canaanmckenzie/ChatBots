//Canaan McKenzie 2018 - This is it.

#ifndef _LEARNING_H
#define _LEARNING_H

#include <iostream>
#include <fstream>
#include "voice.h"

using namespace std;

class Learning {
public:
	void respond(string phrase); //get or teach response
	void say(string phrase); //audibly communicate

	Voice voice; //learning voice to respond
};

#endif
