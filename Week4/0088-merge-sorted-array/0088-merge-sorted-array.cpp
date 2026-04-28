class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int hang1 = m - 1;
        int hang2 = n - 1;
        int hangtrong = m + n -1;

        while ( hang1 >= 0 && hang2 >= 0){

            if ( nums1[hang1] >  nums2[hang2] ){
                  nums1[hangtrong] =  nums1[hang1] ; 
                  hang1 -- ;
            } else {

                nums1[hangtrong] = nums2[hang2];
                hang2--;
            
        }

        hangtrong--;
    }
    while ( hang2 >= 0){
        nums1[hangtrong] = nums2[hang2];
        hang2-- ;
        hangtrong -- ;
    }

    }
    
};