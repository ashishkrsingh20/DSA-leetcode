class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {0};
        for(int d : digits){
            freq[d]++;
        }
        int ans = 0;
        for(int n = 100;n <= 999;n++){
            if(n % 2 != 0)
                continue;
            int x = n;
            int a = x/100;
            int b = (x/10)%10;
            int c = x%10;

            int used[10] = {0};

            used[a]++;
            used[b]++;
            used[c]++;

            bool possible = true;

            for(int i = 0;i <10;i++){
                if(used[i] > freq[i]){
                    possible = false;
                        break;
                }
            }
            if(possible)
                ans++;

        }
        return ans;
    }
};