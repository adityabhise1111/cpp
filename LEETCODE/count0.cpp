#include <iostream>
#include <string>

using namespace std;

int count_zero(string s,int start,int i){
        cout<<"someone caled us"<<endl;
        int count=0;
        for(int k=0;k<=i;k++){
            if(s[k]=='0'){
            count +=1;
            cout <<"found imposter at"<<i<<endl;

            }
        }
        return count;
    }

int main() {
    string example = "Hello, World!";
    cout << example << endl;
    string s="00";
    cout<<count_zero(s,0,0)<<endl;
    return 0;
}