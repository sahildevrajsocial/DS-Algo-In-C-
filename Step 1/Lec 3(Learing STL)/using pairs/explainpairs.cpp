#include <bits/stdc++.h>  

using namespace std;

int main() {
    pair<int, int> p = make_pair(1, 3);
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {2, 3}}; 
    cout<<q.first<<" "<< q.second.second<<" "<<q.second.first;

    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout << arr[1].second;
}
