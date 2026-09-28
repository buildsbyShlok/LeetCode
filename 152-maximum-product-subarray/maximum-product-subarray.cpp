class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int answer = nums[0];

        for(int i = 1; i < nums.size(); i++){

            int currMax = max({nums[i],nums[i] * maxProduct,nums[i] * minProduct});
            int currMin = min({nums[i],nums[i] * maxProduct,nums[i] * minProduct});
            maxProduct = currMax;
            minProduct = currMin;
            answer = max(answer, maxProduct);
        }
        return answer;
    }
};