#include <iostream>
#include <string>
#include "hero.cpp"
using namespace std;

class Hero {
private:
    string name;
    int health;
    int power;

// public:
//     string getname(){
//         return name;
//     }
//     int gethealth(){
//         return health;
//     }
//     int getpower(){
//         return power;
//     }
//     void setname(string s){
//         name=s;
//     }
//     void sethealth(int h){
//         health=h;
//     }
//     void setpower(int p){
//         power=p;
//     }

// };
int main() {
    // Hero ironman;
    // ironman.sethealth(100);
    // ironman.setname("Tony Stark");
    // ironman.setpower(98);

    // cout << ironman.gethealth() << endl;
    // cout << ironman.getname() << endl;
    // cout << ironman.getpower() << endl;

    // Hero* shaktiman = new Hero();
    // (*shaktiman).sethealth(120);//dynamic
    // shaktiman->setname("Shaktiman");//alternatively
    // shaktiman->setpower(110);

    // cout << shaktiman->gethealth() << endl;
    // cout << shaktiman->getname() << endl;
    // cout << shaktiman->getpower() << endl;

    // delete shaktiman;

    
Hero manish(100);
cout << manish.gethealth()<<endl;
cout << &manish <<endl;
Hero *kapil = new Hero(200); 
cout << kapil->gethealth()<<endl;
    return 0;
}