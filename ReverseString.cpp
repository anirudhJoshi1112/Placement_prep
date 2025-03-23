#include <iostream>
using namespace std;
string reverse(string s){
    
    int n=s.length();
    int l=0;
    int h=n-1;
    string res;
    while(l<h){
        swap(s[l],s[h]);
        l++;
        h--;
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<reverse(s);
    return 0;
}
