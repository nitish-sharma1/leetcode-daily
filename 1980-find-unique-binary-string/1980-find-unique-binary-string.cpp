class Solution {
public:
vector<char> binary = {'0','1'};
    void solve(vector<string>& nums, int n , string &res,string&curr){
        if(res.size() == n ){
            return ;
        }
        if(curr.size() == n ){
            bool hasfound = false;
            for(auto num : nums){
                if (num == curr){
                    hasfound= true;
                }
            }
            if(!hasfound){
                res= curr;
            }
            return;
        }

        for(char ch : binary){
            curr.push_back(ch);
            solve(nums,n,res,curr);
            curr.pop_back();
        }

    }
    string findDifferentBinaryString(vector<string>& nums) {
        string res="";
        string curr="";
        int n = nums.size();
    
        solve(nums,n,res,curr);
        return res;
    }
};