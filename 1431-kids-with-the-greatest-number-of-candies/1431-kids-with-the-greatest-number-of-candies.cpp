class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcan = 0;
        for(int c : candies){
            maxcan = max(maxcan,c);
        }
        vector<bool> result;

        for(int a : candies){
            result.push_back(a+extraCandies >= maxcan);
        }
        return result;
    }
};