class Solution {
public:
    bool checkRepeted(string s , int k){
        string temp = s.substr(0,k);
     
        for(int i =0 ; i < s.size() ; i=i+k){
            if(s.substr(i,k) != temp){
                return false;
            }
        }
  
        return true;
    }

    void generate(int i , int n , string s,string curr ,string &res,int k){
        if(i == n){
            if(curr.size()% k ==0 && checkRepeted(curr,curr.size()/k)){
                string temp = curr.substr(0,curr.size()/k);
                if(temp.size() >= res.size() && temp > res){
                
                    res = temp;
                }                
            }
            return;
        }
        curr.push_back(s[i]);
        generate(i+1,n,s,curr,res,k);
        curr.pop_back();
        generate(i+1,n,s,curr,res,k);
        
    }
    string longestSubsequenceRepeatedK(string s, int k) {
        string res = "";
        int n = s.size();
        generate(0,n,s,"",res,k);
        return res;
    }
};