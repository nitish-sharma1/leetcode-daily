class Solution {
public:
    struct comp{
        bool operator()(pair<char,int> &p1 , pair<char,int> &p2){
            if(p1.first == p2.first){
                return p1.second < p2.second;
            }
            return p1.first > p2.first;
        }
    };
    string clearStars(string s) {
        int n = s.size();
        string res="";
     
       priority_queue<pair<char,int>,vector<pair<char,int>>,comp> ppq;
      for( int  i = 0 ; i < n ; i++){
        if(s[i]=='*'){
            auto t = ppq.top();
   
            ppq.pop();
            s[t.second]='*';
        }
        else{
            ppq.push({s[i],i});
        }
      }
     for( int i =0;i<n;i++){

        if(s[i]=='*'){
            continue;
        }
        res.push_back(s[i]);
     }
      return res;
    
    }
};