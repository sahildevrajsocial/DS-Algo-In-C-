#include<bits/stdc++.h>
using namespace std;

int main() {

    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    auto it1 = st.find(3); //gives the position
    auto it2 = st.find(6); //gives the end

    st.erase(5); //erase 5

    int count = st.count(1); //gives the number of ocurrances
    
    // we can also use the memory location of the 
    // element and ask the compiler to erase the 
    // element from set

    auto it3 = st.find(3);
    st.erase(it3);

    // we can also use range of iterator and erase 
    // multiple elements from the set 

    auto it4 = st.find(2);
    auto it5 = st.find(4);
    st.erase(it4, it5);

}