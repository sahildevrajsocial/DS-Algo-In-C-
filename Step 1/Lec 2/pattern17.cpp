#include<iostream>
using namespace std;

void printPattern(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n-i-1; j++) {

            cout << " ";
            
        }

        char ch = 'A';

        for(int j = 0; j< 2*i+1; j++){

            cout << ch;
            if(j < (2*i+1)/2) {
                ch++;
            }
            else {
                ch--;
            }

        }

        
        for(int j = 0; j < n-i-1; j++) {

            cout << " ";
            
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