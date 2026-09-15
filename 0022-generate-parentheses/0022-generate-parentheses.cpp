class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string current = "";
        backtrack(ans,current,0,0,n);
        return ans;
    }
    private:
        void backtrack(vector<string>& ans,string& current,int openCount,int closeCount,int n){
            if(current.length() == 2*n){
                ans.push_back(current);
                return;
            }
            if(openCount < n){
                current.push_back('(');
                backtrack(ans,current,openCount+1,closeCount,n);
                current.pop_back();
            }
            if(closeCount < openCount){
                current.push_back(')');
                backtrack(ans,current,openCount,closeCount+1,n);
                current.pop_back();
            }
        }
};