#include <iostream>

using namespace std;

class hero {
public:
int height;
void setheight(int h){
    this->height = h;
}
int getheight(){
    return this->height;
}
  
};

int main() {
    
    hero vishal;
    vishal.setheight(5);
    cout<<vishal.getheight()<<endl;
    hero suman;
    suman=vishal;
    cout<<"sumans"<<suman.getheight()<<endl;
    return 0;
}