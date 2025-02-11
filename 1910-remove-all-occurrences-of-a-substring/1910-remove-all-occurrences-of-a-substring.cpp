class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res="";
        int partlen = part.size();
        for( char ch :s){
            if(res.size() >=partlen && res.substr(res.size()-partlen) == part){
                res.erase(res.size()-partlen);
            }
            res.push_back(ch);
        }
        if(res.size() >=partlen && res.substr(res.size()-partlen) == part){
                res.erase(res.size()-partlen);
            }
        return res;
    }
};