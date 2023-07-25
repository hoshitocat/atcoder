// https://atcoder.jp/contests/abc311/tasks/abc311_d
#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int n,m;
vector<string> grid;
set<pair<int,int>> seen;

int main() {
    vector<pair<int,int>> moves {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    cin>>n>>m;
    for (int i = 0; i < n ;i ++) {
        string s;
        cin>>s;
        grid.push_back(s);
    }

    queue<pair<int,int>> pq;
    pq.push({1,1});

    while(!pq.empty()) {
        pair<int,int> x = pq.front();
        pq.pop();

        if (seen.find(x) != seen.end()) continue;
        seen.insert(x);
        // cout << x.first << " " << x.second << endl;


        // left right up down
        for (int i = 0; i < 4; i++) {
            auto move = moves[i];
            auto start = x;
            while (grid[start.first][start.second] != '#') {
                grid[start.first][start.second] = '1';
                start.first += move.first;
                start.second += move.second;
            }
            start.first -=move.first;
            start.second -= move.second;
            pq.push(start);
        }
    }
    int result = 0;
    for (auto x : grid) {
        for (auto y : x) {
            if (y == '1') {
                result +=1;
            }
        }
    }
    cout <<result << endl;

    return 0;
}
