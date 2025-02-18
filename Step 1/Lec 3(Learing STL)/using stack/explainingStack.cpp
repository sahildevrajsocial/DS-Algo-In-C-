#include<bits/stdc++.h>
using namespace std;

int main() {

    stack<int>st;

    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout<<st.top()<<" "; // print 5

    st.pop(); // st looks like {3,3,2,1}

    cout<<st.top()<<" "; // 3
    cout<<st.size()<<" "; // 4
    cout<<st.empty()<<" "; // false

}