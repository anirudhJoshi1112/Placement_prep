class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int> temp;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                temp.push_back(arr[i]);
            }
        }
        int nonZeroCount=temp.size();
        for(int i=0;i<nonZeroCount;i++){
            arr[i]=temp[i];
        }
        for(int i=nonZeroCount;i<arr.size();i++){
            arr[i]=0;
        }
    }
};
