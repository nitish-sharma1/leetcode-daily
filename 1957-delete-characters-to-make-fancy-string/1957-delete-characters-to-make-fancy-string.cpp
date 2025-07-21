class Solution {
public:
    string makeFancyString(string s) {
        int i = 0 , j=0;
        int n = s.size();
        string res="";
        while(j<n){
            while(j<n && s[i]==s[j]){
                j++;
            }
            int len = j-i;
            if(len >=2){
                res.push_back(s[i]);
                
            }
            res.push_back(s[i]);
            i=j;
            
        }
        return res;
    }
};