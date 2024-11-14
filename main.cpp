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
    int position[2];
public:

    char getIcon() {
        return Icon;
    }

    int[2] getPosition() {
        return  position;
    }

};


class Plane {

public:

    void printPlane () {

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
