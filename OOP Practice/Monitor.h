#include <iostream>
using namespace std;

class Monitor
{
public:
	string brand;
	string price;
	string resolution;
	int diagonal;

	void play_movie() {
		cout << brand << " monitor is playing a movie" << endl;
	}

	void display_game() {
		cout << brand << " monitor displaying the game" << endl;
	}
};

