class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int L = 0,R = nums.size() - 1;
        while(L < R){
            if(nums[L] % 2 == 0){
                L++;
            }
            else if(nums[R] % 2 != 0){
                R--;
            }
            else{
                int temp = nums[L];
                nums[L] = nums[R];
                nums[R] = temp;
            }
        }
        return nums;
    }
    
};