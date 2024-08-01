#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, k;
    vector<vector<int>> arrays = {};
    vector<vector<int>> queries = {};
    int temp;

    cin >> n >> q;

    for(int i = 0; i < n; i++){
        arrays.push_back({});
    }


    for(int i = 0; i < n; i++){
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> temp;
            arrays[i].push_back(temp);
        }

    }

    for(int i = 0; i < q; i++){
        queries.push_back({});
    }

    for(int i = 0; i < q; i++){
        cin >> temp;
        queries[i].push_back(temp);
        cin >> temp;
        queries[i].push_back(temp);
    }

    for(int i = 0; i < q; i++){
        cout << arrays[queries[i][0]][queries[i][1]] << endl;
    }


    return 0;
}