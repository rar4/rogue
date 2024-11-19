 <iostream>
#include <map>



using namespace std;



const int side = 10;

class Item {
public:


protected:
	string name;
	string type;
	map<string, int> properties;

};



class Entity {
protected:

	int Hp;
	char Icon;
	int Damage;
	int Defence;
	int position[2];
public:

	char getIcon() {
		return Icon;
	}

	int* getPosition() {
		return  position;
	}

};


class Plane {

protected:

	char plane[side][side] = { "" };

public:

	Plane() {
		for (int i = 0; i < side; i++) {
			for (int j = 0; j < side; j++) {
				if (i == 0 || i == side){

			}

		}{




		void printPlane() {

			for (int i = 0; i < side; i++) {
				for (int j = 0; j < side; j++) {
					cout << plane[i, j];
				}

				cout << endl;
			}

		}






};








int main() {

	Plane plane;

	plane.printPlane();


	return 0;

}
