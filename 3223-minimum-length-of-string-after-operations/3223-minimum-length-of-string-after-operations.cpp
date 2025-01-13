class Solution {
public:
    int minimumLength(string s) {
        // sbase pehele left right vector bano
        int n = s.size();
        
        unordered_map<char,int> mp; // char , count
        for( int i = 0 ; i < n ; i++){
              mp[s[i]]++;
              //this will populate map
        }
       int count=0;
       for(auto it : mp){
        if(it.second % 2 ==0){
            count+= 2;
        }
        else{
            count+=1;
        }
       }
        return count;
    }
};