#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
    bool cycleDetect(int node, int parent, vector<vector<int>> &adj, vector<bool>&visited){
        visited[node] = 1;
        // Check the neighbours of the current node
        for (int j = 0; j < adj[node].size(); j++)
        {
            if(parent == adj[node][j])
            continue;

            if(visited[adj[node][j]] == 1)
            return 1;

            if(cycleDetect(adj[node][j], parent, adj, visited))
            return 1;
        }
        //after checking all the neghbour return 0 so that it checks the other V's
        return 0;
        
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<bool> visited(V, 0);
        return cycleDetect(0, -1, edges, visited);
        
    }
};
