#include <iostream>
using namespace std;

class Repository
{
public:
	string name;
	string type;
	int number_of_commits;

	void pull() {
		cout << "Pulling code from " << name << "repository" << endl;
	}

	void push() {
		cout << "Pushing code to " << name << "repository" << endl;
	}

};

