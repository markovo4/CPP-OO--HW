#include <iostream>
using namespace std;


class Table
{
public:
	string brand;
	string price;
	int weight_in_kg;
	string material;

	void place_table() {
		cout << brand << " table is placed" << endl;
	}

	void clean_table() {
		cout << brand << " table is cleaned" << endl;
	}
};

