class Hero {
private:
    string name;
    int health;
    int power;

public:
    string getname(){
        return name;
    }
    int gethealth(){
        return health;
    }
    int getpower(){
        return power;
    }
    void setname(string s){
        name=s;
    }
    void sethealth(int h){
        health=h;
    }
    void setpower(int p){
        power=p;
    }

};