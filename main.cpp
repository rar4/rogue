
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

public:

    char getIcon() {
        return Icon;
    }

};


class Plane {

public:

    void get_Plane() {

		for (int i = 0; i < side; i++) {
			for (int j = 0; j < side; j++) {
				cout << plane[i, j];
			}
        
            cout << "endl";
		}

    }


protected:

    char plane[side][side];



};








int main() {

    Plane plane;



    return 0;

}

