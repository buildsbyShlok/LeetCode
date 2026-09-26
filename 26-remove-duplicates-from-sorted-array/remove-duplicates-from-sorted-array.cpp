class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int j = 1 ;
        for(int i=1 ;i<nums.size();i++){
            if(nums[i] != nums[i-1]){
                nums[j] = nums [i];
                j++;
            }
        } return j ;
        for(int i = 0 ; i<j ; i++){
            return nums[i] ;
        }

        
    }
};