#include<bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2,}
    pq.push(10); //{10,8,5,2}

    cout<<pq.top()<<endl; //prints 10

    pq.pop(); //{8,5,2}

    cout<<pq.top()<<endl; //prints 8

    //minimum heap

    priority_queue<int,vector<int>, greater<int>> priorityq;

    priorityq.push(5); //{5}
    priorityq.push(2); //{2,5}
    priorityq.push(8); //{2,5,8}
    priorityq.push(10); //{2,5,8,10}

    cout<<priorityq.top()<<endl; //prints 2

}