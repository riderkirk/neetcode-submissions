class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n,1);
        int lacc = 1;
        int racc = 1;
        for (int i = 1; i < n; ++i) {
            lacc *= nums[i - 1];
            racc *= nums[n - i];
            output[i] *= lacc;
            output[n - 1 - i] *= racc;
        }
        return output;
    }
};
