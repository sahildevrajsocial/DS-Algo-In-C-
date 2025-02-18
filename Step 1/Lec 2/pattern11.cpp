#include<iostream>
using namespace std;

void printPattern(int n) {

    int start = 1;
    for(int i = 1; i <= n; i++){

        if(i % 2 == 0) {
            start = 0;
        }
        else {
            start = 1;
        }

        for(int j = 1; j <= i; j++){
            cout << start;
            start = 1 - start;
        }

        cout << endl;

    }
}


int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    printPattern(n);

    return 0;
}