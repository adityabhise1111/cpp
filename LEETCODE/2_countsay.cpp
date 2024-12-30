#include <iostream>
using namespace std;
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
    int ans="1";
    while(n){
        compress(ans);
        n--;
    }
    cout<<ans<<endl;  
    return 0;
}