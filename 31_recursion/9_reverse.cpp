#include <iostream>
#include <string>
using namespace std;

string reverse(int i, int j,string &name){
    if(i>j)return name;
    swap(name[i],name[j]);
    return reverse(i+1,j-1,name);
}
int main(){
    string name ="aditya";
   
    cout <<reverse(0,5,name);
    
    return 0;
}
 