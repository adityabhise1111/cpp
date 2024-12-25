#include <iostream>
using namespace std;
inline int getmax(int a, int b){
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
    //actually the inline function is a macro, 
    //it replaces the function call with the function body
    //just like a macro
    //advantages of inline function:
    //1. saves the overhead of function call
    //2. saves the overhead of return statement
    //3. saves the overhead of stack management
    //4. saves the overhead of passing the arguments
    //5. saves the overhead of creating a new stack frame
    //6. saves the overhead of creating a new scope 

    return 0;

    

}