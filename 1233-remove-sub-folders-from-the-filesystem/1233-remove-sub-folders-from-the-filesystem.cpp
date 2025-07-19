class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> s;
        vector<string> res;
        for(string str:folder){
            s.insert(str);
        }
        for(string str: folder){
            int i = str.size() -1;
            bool isSub = false;
            while( i != 0){
                if( str[i] == '/'){
                    string key  = str.substr(0,i);
                    if(s.count(key) == 1){
                        isSub = true;
                        break;
                    }
                }
                i--;
            }
            if(!isSub){
                res.push_back(str);
            }

        }
        
        return res;
    }
};