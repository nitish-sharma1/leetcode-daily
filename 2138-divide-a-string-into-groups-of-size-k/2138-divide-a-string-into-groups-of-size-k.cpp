class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        int r = n%k;
        vector<string> res;
        if(r){
            for(int i =0 ;i <k-r ; i++){
                s.push_back(fill);
            }
        }
        for(int i = 0 ; i < s.size() ; i=i+k){
            
            res.push_back(s.substr(i,k));

        }
        
        return res;
    }
};