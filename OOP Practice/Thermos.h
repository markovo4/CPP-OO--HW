#include <iostream>
using namespace std;

class Thermos
{
public:
	string brand;
	int volume_in_ml;
	int lasting_hours;
	int price;

	void fill_with_hot_water() {
		cout << brand << " thermos has" << volume_in_ml << "ml of water and feels hot" << endl;
	}

	void fill_with_cold_water() {
		cout << brand << " thermos has" << volume_in_ml << "ml of water and feels cold" << endl;
	}

	void empty_thermos() {
		cout << brand << " thermos is epmty" << endl;
	}
};

