class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> s;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < n ;i++){
            if(nums[i] == target){
                s.push_back(i);
            }
        }
        return s;

    }
};