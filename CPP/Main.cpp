//Canaan McKenzie - Getting Closer

#include <iostream>
#include "Learning.h"

using namespace std;

main(){
	Learning Johanne; //Create learning object

	for(;;){
		cout << "\n You: ";

		string phrase;
		getline(cin,phrase);

		cout << "JOHANNE: ";
		Johanne.respond(phrase);
	}
}