class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        long long ans = 0;
        while(left < right){
            long long h = min(height[left],height[right]);
            long long b = right - left;
            long long A = h * b;
            ans = max(ans,A);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};