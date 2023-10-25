#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    int result=factorial(5);
    cout<<"result is"<<result<<endl;
    return 0;

}
