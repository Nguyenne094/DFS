// C++ Programming Language
// DFS Algorithm
// DCCNTT 13.10.11

/*
 Input
 7 7
 3 0
 3 5
 3 1
 1 2
 2 4
 2 6
 5 7
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100]; //Khởi tạo mảng các cạnh
bool visited[100] = {false}; //Khởi tạo mảng các đỉnh chưa được thăm

void dfs(int uv){
    
    cout << uv << " ";
    visited[uv] = true; //Đánh dấu đỉnh đã được thăm
    for(int v : adj[uv]){
        if(!visited[v]) dfs(v);
    }
}

int main(){
    int m, n; cin >> m >> n;
    
    //Nhập danh sách kề
    for(int i = 0; i < m; ++i){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    //Xuất phát từ đỉnh 1
    dfs(1);
    
    return 0;
}
