#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, input;

    cin >> n;

    vector<int> numbers = {};

    for(int i = 0; i < n; i++){
        cin >> input;
        numbers.push_back(input);

    }

    for(int i = n-1; i >= 0; i--){
        cout << numbers[i] << " ";
    }

    return 0;
}
