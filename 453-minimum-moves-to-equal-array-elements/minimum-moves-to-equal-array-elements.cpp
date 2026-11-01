class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minVal = *min_element(nums.begin(), nums.end());

        long long sum = 0;

        for (int num : nums) {
            sum += num;
        }

        return (int)(sum - (long long)minVal * nums.size());
    }
};