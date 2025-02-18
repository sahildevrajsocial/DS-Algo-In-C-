#include<iostream>
using namespace std;

void printPattern(int n) {

    int space = 2*(n-1);
    int spaces = 0;

    for(int i = 0; i<n; i++) {
        //stars

        for(int j = 1; j<=n-i; j++) {
            cout << "*";
        }

        //spaces

        for(int j = 0; j<spaces; j++) {
            cout << " ";
        }

        //stars

        for(int j = 1; j<=n-i; j++) {
            cout << "*";
        }
        spaces += 2;
        cout << endl;
    }

    for(int i = 1; i <= n; i++) {

        //stars

        for (int j=1; j<=i; j++) {

            cout<<"*";

        }

        //space

        for(int j = 1; j<=space; j++) {

            cout << " ";

        }

        //stars

        for (int j=i; j>=1; j--) {

            cout<<"*";

        }

        cout << endl;
        space-=2;

    }

}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    printPattern(n);

    return 0;
}