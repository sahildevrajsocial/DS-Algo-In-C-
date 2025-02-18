#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3, 4);

    vector<int> v4(5, 100);

    vector<int> v1(5, 20);
    vector<int> v2(v1); 

    v2.insert(v2.begin(), 300);

    for(auto it : v2){
        cout<<it<<" ";
    }

}