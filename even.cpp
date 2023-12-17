#include<iostream>
using namespace std;
void even(int n){
    if(n==2){
        cout<<"2"<<endl;
        return;
    }
    cout<<n<<endl;
    even(n-2);
}
int main(){
    int n=10;
    even(n);
}
