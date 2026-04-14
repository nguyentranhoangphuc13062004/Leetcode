class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
      int  tonglythuyet = n*(n+1)/2;
       int  tongtrongday = 0;

        for( int so :nums){
            tongtrongday +=so;
        }

        return tonglythuyet - tongtrongday;
    }
};