class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans = -1;
        int row = 0;
        int col = m-1;
        while(row<n && col>=0){
            if(arr[row][col] == 1){
                col--;
                ans = row;
            }
            else{
                row++;
            }
        }
        return ans;
	}

};
