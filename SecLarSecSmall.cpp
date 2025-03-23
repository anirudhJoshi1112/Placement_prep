#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int>& arr){
    int largest=arr[0];
    int secondLar;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            secondLar=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLar && arr[i]<largest){
            secondLar=arr[i];
        }
    }
    return secondLar;
}

int secondMinimun(vector<int>& arr){
    int minimum=arr[0];
    int secondMin;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<minimum){
            secondMin=minimum;
            minimum=arr[i];
        }
        else if(arr[i]<secondMin && arr[i]>minimum){
            secondMin=arr[i];
        }
    }
    return secondMin;
}
int main(){
    vector<int> arr={2,4,1,6,8,3,9};
    cout<<secondLargest(arr)<<endl;
    cout<<secondMinimun(arr)<<endl;
    
    return 0;
}
