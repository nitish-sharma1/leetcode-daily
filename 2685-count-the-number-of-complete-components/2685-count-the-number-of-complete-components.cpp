class Solution {
public:
void dfs(int s , vector<vector<int>>& adj ,vector<int> &vis ,int &vertex , int &edgecount ){
    vis[s] =1;
    vertex++;
    for(auto v : adj[s]){
        edgecount++;
        if(!vis[v]){
        dfs(v,adj,vis,vertex,edgecount);
        }
    } 

}
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto edge  : edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n,0);
        int res =  0 ;
        int e = 0 ;
        int ver = 0 ;
        for( int i = 0 ; i < n ; i++){
            if(!vis[i]){
                dfs(i,adj,vis,ver,e);
                if(e == ver * (ver -1)){
                    res++;
                }
                e=0;
                ver=0;
                
            }
        }
        return res;
    }
};