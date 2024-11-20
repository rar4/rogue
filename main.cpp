#include <iostream>
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
	int* Position;
public:

	Entity(int hp, char icon, int damage, int defense, int* position) : Hp{ hp }, Icon{ icon }, Damage{ damage }, Defence{ defense }, Position{ position }
	{

	}

	char getIcon() {
		return Icon;
	}

	int* getPosition() {
		return  Position;
	}

};


class Plane {

protected:

	char plane[side][side];

public:

	Plane() {
		for (int i = 0; i < side; i++) {
			for (int j = 0; j < side; j++) {
				if (i == 0 || i == side - 1) {
					plane[i][j] = '-';
				}
				else if (j == 0 || j == side - 1) {
					plane[i][j] = '|';
				}
				else {
					plane[i][j] = ' ';
				}

			}


		}
	}
	void refreshPlane() {
		

	}

	void printPlane()
	{

		for (int i = 0; i < side; i++) {
			for (int j = 0; j < side; j++) {
				cout << plane[i][j];
			}

			cout << endl;
		}

	}




};








int main() {

	Plane plane;
	int position[2] = { side / 2 };
	Entity hero(10, '#', 1, 0, position);

	plane.printPlane();


	return 0;

}
