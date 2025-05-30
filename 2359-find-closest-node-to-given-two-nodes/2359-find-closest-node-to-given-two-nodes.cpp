class Solution {
public:
    void dfs(int u  , vector<int>& edges,vector<int>& distance , vector<int>& vis){
        vis[u]=1;
        int v = edges[u];
        if(v!=-1 && !vis[v]){
            distance[v]= 1+distance[u];
            vis[v] =1;
            dfs(v,edges,distance,vis);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> dist1(n,INT_MAX);
        vector<int> dist2(n,INT_MAX);
        vector<int> vis1(n,0);
        vector<int> vis2(n,0);
        dist1[node1] = 0;
        dist2[node2]= 0;
        dfs(node1,edges,dist1,vis1);
        dfs(node2,edges,dist2,vis2);
        int minnode =-1;
        int mindist = INT_MAX;
        for(int i =0;i<n;i++){
           int maxdist= max(dist1[i],dist2[i]);
            if(maxdist < mindist){
                mindist = maxdist;
                minnode = i;
            }
        }
        return minnode;
    }
};