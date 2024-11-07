#include <iostream>
#include <map>



using namespace std;



const int side = 10;

class Item{
public:


protected:
    string name;
    string type;
    map<string, int> properties;

};



class Entity{
protected:

    int Hp;
    char Icon;
    int Damage;
    int Defence;

public:

char getIcon(){
    return Icon;
}

};


class Plane{

public:




protected:

char plane[side][side];



};








int main() {

    Plane plane;
    
    for ( int i = 0; i < side; i++){
            for (j = 0; j < )
        
    }
    
    
    return 0;

}
