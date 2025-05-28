class Solution {
public:
int dfs(int i , vector<vector<int>> &adj , int target,int parent){
    if(target < 0 ){
        return 0;
    }
    int count = 1;
    for(int v : adj[i]){
        if(v != parent){
            count += dfs(v,adj,target-1,i);
        } 

    }
    return count;
}
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        int n = edges1.size()+1;
        int m = edges2.size()+1;
        int maxdis = -1;
        vector<int> res(n,0);
    
        vector<vector<int>> adj1(n);
        vector<vector<int>> adj2(m);
        for(auto edg : edges1){
            int u = edg[0];
            int v = edg[1];
            adj1[u].push_back(v);
             adj1[v].push_back(u);
        }
        for(auto edg : edges2){
            adj2[edg[0]].push_back(edg[1]);
            adj2[edg[1]].push_back(edg[0]);
        }
        for(int i = 0 ; i < n ; i++){
            int dis = dfs(i,adj1,k,-1);
            res[i] = dis;
        }
        for(int i = 0 ; i < m ; i++){
            int dis = dfs(i,adj2,k-1,-1);
            maxdis = max(maxdis,dis);
        }
        for (int i = 0 ; i < n ;i++){
            res[i] +=maxdis;
        }
        return res;
    }
};