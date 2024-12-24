#include <iostream>
using namespace std;
int getmax(int a, int b){
    return (a>b?a:b);
}
int main (){
    //tertiary operator
    int a=10, b=20;
    // if(a>b)
    //     cout<<a;
    // else
    //     cout<<b;
    // cout<<endl;
    //we can write the above code in a single line using the ternary operator
    //cout<<(a>b?a:b)<<endl;

    a++, b--;
    cout<<getmax(a,b)<<endl; //inline function
    return 0;

    

}