class Solution {
public:
    string robotWithString(string s) {
        int n = s.size();
        int i = 0 ;
        vector<vector<int>> freq(26);
        string p="";
       stack<char> t;

        for(int j = 0 ; j<n;j++){
            char ch = s[j];
            freq[ch-'a'].push_back(j);
        }

         for(int j = 0 ; j<26;j++){
           if(freq[j].size() >0){
            
                for( int idx : freq[j]){

                    
                    while(!t.empty() && t.top() <= char(j+'a')){
                       
                p.push_back(t.top());
                t.pop();
                 }
                    while(i<n && i<=idx){
                        t.push(s[i]);
                        
                        i=i+1;
                    }
                  
                    
                }
           }
        }
     while(!t.empty()){
         cout<<t.top();
        p.push_back(t.top());
        t.pop();
     }
        

        return p;

        
    }
};