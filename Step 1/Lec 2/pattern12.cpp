#include<iostream>
using namespace std;

void printPattern(int n) {

    int space=2*(n-1);

    for(int i = 1; i <= n; i++) {

        //stars

        for (int j=1; j<=i; j++) {

            cout<<j;

        }

        //space

        for(int j = 1; j<=space; j++) {

            cout << " ";

        }

        //stars

        for (int j=i; j>=1; j--) {

            cout<<j;

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