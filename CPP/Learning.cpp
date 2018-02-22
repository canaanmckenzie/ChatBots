//Canaan McKenzie 

#include "Learning.h"
#include <iostream>
#include <fstream>

using namespace std;

void Learning::respond(string phrase){
	fstream memory;
	memory.open("memory/memory.txt",ios::in); //open memory file

	while(!memory.eof()){
		string identifier;
		getline(memory,identifier); //next phrase

		if(identifier == phrase) {
			string response;
			getline(memory,response); 
			voice.say(response);
			return;

		}

	}
	memory.close(); //no file remaining
	memory.open("memory/memory.txt", ios::out | ios::app); //open and append the file
	memory << phrase << endl; //record initial phrase in memory

	voice.say(phrase); //repeat the phrase if not understood
	string userResponse;

	cout << "You: ";
	getline(cin,userResponse);
	memory << userResponse << endl;
	memory.close();
}

void Learning::say(string phrase){
	this->voice.say(phrases);
}