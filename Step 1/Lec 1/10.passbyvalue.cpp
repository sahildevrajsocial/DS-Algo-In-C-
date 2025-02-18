#include<iostream>
using namespace std;

void doSomething(int num) {

    num += 5;
    cout<< num << endl;

    num += 5;
    cout << num << endl;

}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << num << endl;

    doSomething(num);
    cout << num;    

    return 0 ;
}