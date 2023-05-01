/**
 *author:Abu Jafar Shiddik
 *created:20-04-2023(14:29:28)
**/
#include <bits/stdc++.h>
using namespace std;

int explore_room(vector<vector<char>>& map, int i, int j) {
    int size = 1;
    map[i][j] = '#'; 
    if (i > 0 && map[i-1][j] == '.') { 
        size += explore_room(map, i-1, j);
    }
    if (i < map.size()-1 && map[i+1][j] == '.') { 
        size += explore_room(map, i+1, j);
    }
    if (j > 0 && map[i][j-1] == '.') { 
        size += explore_room(map, i, j-1);
    }
    if (j < map[0].size()-1 && map[i][j+1] == '.') { 
        size += explore_room(map, i, j+1);
    }
    return size;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> map(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }
    int num_rooms = 0;
    int max_size = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == '.') {
                num_rooms++;
                int size = explore_room(map, i, j);
                max_size = max(max_size, size);
            }
        }
    }
    cout <<"Rooms - " <<num_rooms <<endl;
    cout <<"Length of the longest room - " <<max_size <<endl;
    
    return 0;
}
