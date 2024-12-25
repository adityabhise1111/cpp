#include <iostream>
#include <string>
using namespace std;



int main() {
    int n;
    cout<<"Enter a number: ";
    cin >>n;
    string saynum[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string ans ="";
    while(n){
        ans = saynum[n%10] + " "+ ans;
        n/=10;

    }
    cout<<ans<<endl;
    return 0;
}