#include <iostream>
#include "Animal.h"
#include "Thermos.h"
#include "Table.h"
#include "Monitor.h"
#include "Repository.h"
using namespace std;

//class SmartPhone{
//public:
//	//State
//	string brand;
//	string model;
//	double price;
//	double screen_size;
//	string color;
//	string OS;
//	string CPU;
//	string description;
//	bool sale_top;
//	double rating;
//	string* feedbacks;
//	unsigned int feedbacks_count;
//	unsigned int resolution_width;
//	unsigned int resolution_height;
//	string camera_description;
//
//
//	//Behaviour
//	void StartCall(string contact_number) {
//		cout << "Start calling to " << contact_number << "\n";
//		cout << "call started";
//	}
//
//	void EndCall() {
//		cout << "Finishing the call ";
//	}
//
//	void MakeSound() {
//		cout << "PEEP";
//	}
//
//	void SendMessage() {}
//
//	void PowerOn(){}
//
//	void PowerOff(){}
//
//};

int main()
{
	Animal pet;
	pet.animal_type = "Cat";
	pet.pet_name = "White";
	pet.pet_age = 20;

	pet.run();
	pet.sleep();
	pet.how_old();

	cout << endl << endl;

	Thermos bottle;
	bottle.brand = "CAT";
	bottle.volume_in_ml = 1000;
	bottle.lasting_hours = 20;
	bottle.price = 20;

	bottle.fill_with_hot_water();
	bottle.fill_with_cold_water();
	bottle.empty_thermos();

	cout << endl << endl;

	Table desk;
	desk.brand = "WOODY";
	desk.material = "Wood";
	desk.price = "$200";
	desk.weight_in_kg = 20;

	desk.clean_table();
	desk.place_table();

	cout << endl << endl;

	Monitor display;
	display.brand = "Samsung";
	display.diagonal = 27;
	display.price = "$100";
	display.resolution = " Full HD";

	display.display_game();
	display.play_movie();

	cout << endl << endl;

	Repository rep;
	rep.name = "CPP OOP";
	rep.number_of_commits = 10;
	rep.type = "public";

	rep.pull();
	rep.push();

}

