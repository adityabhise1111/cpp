#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(string str,int i=0, int j=-1){
    if(j==-1) {
        j=str.size() -1;
    }
    if(str[i]!=str[j]) return false;
    if(i>=j) return true;
    return (is_palindrome(str,i+1,j-1));
    
}

int main(){
    string name;
    cin>> name;
    cout<<is_palindrome(name)<<endl;

}