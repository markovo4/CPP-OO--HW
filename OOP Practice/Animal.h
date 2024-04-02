#include <iostream>
using namespace std;
class Animal
{
public:
	string animal_type;
	string pet_name;
	int pet_age;

	void run() {
		cout << "Running..." << endl;
	}

	void sleep() {
		cout << pet_name << " Sleeping..." << endl;
	}

	void how_old() {
		cout << pet_name << " is " << pet_age << " years old." << endl;
	}

};

