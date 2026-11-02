class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int target = nums[n / 2];
        long long total_operations = 0;
        
        for(int i = 0; i < n; i++) {
            total_operations += abs((long long)nums[i] - target);
        }
        
        return total_operations;
    }
};