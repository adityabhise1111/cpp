#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;

    }
    return (fibo(n-1)+fibo(n-2));

}



int main(){
    int n;
    cout<<"Enter the position of the Fibonacci number: ";
    cin>>n;
    cout<<"The Fibonacci number at position "<<n<<" is "<<fibo(n-1)<<endl;
}
