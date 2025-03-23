class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int largest=INT_MIN;
        int currentSum=0;
        for(int i=0;i<arr.size();i++){
            currentSum+=arr[i];
            
            if(currentSum>largest){
                largest=currentSum;
            }
            
            if(currentSum<0){
                currentSum=0;
            }
        }
        return largest;
        
    }
};
