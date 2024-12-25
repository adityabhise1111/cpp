#include <iostream>

using namespace std;
string binstr(int n){
    if(n==0){
        return "0";
    }
    if(n==1){
        return "1";
    }
    return binstr(n/2)+to_string(n%2);
}
string compress(string s){
    string ans ="";
    for(int i=0; i<s.size(); i++){
        int count =1;
        while(i + 1 < s.size() && s[i]==s[i+1]){
            count++;
            i++;
        }
        ans += to_string(count) + s[i];
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin >>n;
    string ans = binstr(n);
    string compressed_str = compress(ans);
    cout<<compressed_str<<endl;

    return 0;
}