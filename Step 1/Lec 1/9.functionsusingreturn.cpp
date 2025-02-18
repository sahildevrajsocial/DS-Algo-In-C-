#include<iostream>
using namespace std;

int Calc(int num1, int num2) {

    int num3 = num1 + num2;
    return num3;

}

int main() {

    int num1, num2;
    
    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    int result = Calc(num1, num2);
    cout << result;
    
    return 0;
}