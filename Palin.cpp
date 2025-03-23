#include<iostream>
using namespace std;

int main(){
    int n,rem,rev=0;
    cin>>n;
    int temp=n;
    while(n>0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    
    if(rev==temp){
        cout<<"the number is palindrome";
    }
    else{
        cout<<"the number is not a palindrome";
    }
    return 0;
}
