class Solution {
public:
    void dfs(char ch ,unordered_map<char,vector<char>> & adj , vector<int> &vis,char &smallest ){
        vis[ch-'a'] =1;
        if(ch < smallest){
            smallest = ch;
        }
        for( auto v : adj[ch]){
            if(!vis[v-'a']){
                dfs(v,adj,vis,smallest);
            }
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        unordered_map<char,vector<char>> mp;
        string res = "";
        int n = s1.size();
        if(n==0){
            return baseStr;
        }
        for(int i=0;i<n;i++){
            char ch1 = s1[i];
            char ch2 = s2[i];
            mp[ch1].push_back(ch2);
            mp[ch2].push_back(ch1);
        }
        for( char ch : baseStr){
            vector<int> vis(26,0);
            char smallest = ch ;
            dfs(ch,mp,vis,smallest);
            res.push_back(smallest);
            
        }
        return res;
    }
};