class Solution {
public:
int find(int node , vector<int> &parent){
    if(node == parent[node]){
        return node;
    }
    return parent[node] = find(parent[node],parent);
}

void Union(int i , int j , vector<int> &parent , vector<int> &rank){
    int parent_i = find(i,parent);
    int parent_j = find(j,parent);
    if(parent_i == parent_j){
        return ;
    }
    else if(rank[parent_i] > rank[parent_j])
    {
        parent[parent_j] = parent_i;
        rank[parent_i]++;
    }
    else{
        parent[parent_i] = parent_j;
        rank[parent_j]++;
    }
       
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n+1,0);
        for(int i=0 ; i<=n; i++){
            parent[i] = i;
        }
        vector<int> rank(n+1,0);
        vector<int> res;
        for(auto edg : edges){
            int u = edg[0];
            int v = edg[1];
            int parent_u = find(u,parent);
            int parent_v = find(v,parent);
             if(parent_u == parent_v){
        return edg;
    }
    else{
        Union(u,v,parent,rank);
    }
            
        }
        return res;
    }
};