//  main.cpp
//  lab4
//
//  Created by Ada Zhang on 10/10/20.
//

#include <iostream>
using namespace std;

int main() {
    //[Program-1] Write a program that accepts exactly ten (10) integer numbers from the user. 
    //When the user is done inputting these numbers, the program prints back: 
    //(i) the sum of the 10 numbers, (ii) the minimum value from the 10 numbers, 
    //and (iii) the maximum value from the 10 numbers.
    
    int input;
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    cout << "Give me 10 integers. \n";
    for (int i = 0; i < 10; i++) {
        cin >> input;
        sum = sum + input;
        if (input < min) {
            min = input;
        }
        if (input > max) {
            max = input;
        }
    }
    cout << "sum: " << sum << endl;
    cout << "Your minimum value is " << min << endl;
    cout << "Your maximum value is " << max << endl;
    
    //[Program-2] Write a program that accepts an indefinite set of numbers until the user enters “-1”. 
    //In other words, the program keeps accepting new values until the user provides a “-1” 
    //(your program accepts all values, and discards the “-1”). When done, the program prints back to the user: 
    //(i) the sum of all numbers entered (except -1), (ii) the minimum value seen across all numbers (except -1), 
    //and (iii) the maximum value across all numbers (except -1).
    
    int entered;
    int uSum = 0;
    int uMin = INT_MAX;
    int uMax = INT_MIN;

    cout << "Enter a number. Enter -1 to stop. \n";
    cin >> entered;
    while(entered != -1) {
        uSum = uSum + entered;
        if (entered < uMin) {
            uMin = entered;
        }
        if (entered > uMax) {
            uMax = entered;
        }
        cin >> entered;
    }
    cout << "sum: " << uSum << endl;
    cout << "Your minimum value is " << uMin << endl;
    cout << "Your maximum value is " << uMax << endl;
    
    return 0;
}
