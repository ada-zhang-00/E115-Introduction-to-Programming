//  main.cpp
//  lab2
//
//  Created by Ada Zhang on 9/26/20.
//
//Write a C++ program that makes use of integer, floating point, and string variables. 
//Specifically, your program does the following: (i) prompts the user to enter two integer values, 
//and is able to perform basic math (+, -, *, /) on them, (ii) prompts the user to enter two floating point values, 
//and is able to perform basic math on them, and (iii) prompts the user to enter two ‘string’ values (e.g., name and address) 
//and is able to concatenate these two strings and print back the result.

//Shooting for higher gustos? Try the challenge:
//Check+: Write a program that is able to perform advanced math operations, 
//such as powers, sine, cosine, etc., To do this, you will have to include math libraries and use the built in functions

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char operation;
    int int1, int2;
    float float1, float2;
        
    //int
    cout << "Enter an interger:\n";
    cin>>int1;
    cout << "Enter another integer:\n";
    cin>>int2;
    cout << "Enter an operation (+,-,*,/):\n";
    cin>>operation;
    
    if (operation == '+'){
        cout << int1+int2;
    }
    else if (operation == '-'){
        cout << int1-int2;
    }
    else if (operation == '*'){
        cout << int1*int2;
    }
    else if (operation == '/'){
        cout << int1/int2;
    }
    else {
        cout << "Error/n";
    }
    
    cout << " \n";


    //float
    cout << "Enter an float:\n";
    cin>>float1;
    cout << "Enter another float:\n";
    cin>>float2;
    cout << "Enter an operation (+,-,*,/):\n";
    cin>>operation;
    
    if (operation == '+'){
        cout << float1+float2;
    }
    else if (operation == '-'){
        cout << float1-float2;
    }
    else if (operation == '*'){
        cout << float1*float2;
    }
    else if (operation == '/'){
        cout << float1/float2;
    }
    else {
        cout << "Error/n";
    }
    
    cout << " \n";

    //string
    string str1, str2;
    string strCon = str1 + str2;
    cout << "Enter an string:\n";
    cin>>str1;
    cout << "Enter another string:\n";
    cin>>str2;
    cout << "Here are the two strings:\n";
    cout << strCon;

    cout << " \n";
    
    // extra credit
    int x;
    double cosine;
    double sine;
    cout << "Enter an integer:\n";
    cin>>x;
    cosine = cos(x);
    cout << "cos(x) = " << cosine << endl;
    sine = sin(x);
    cout << "cos(x) = " << sine << endl;
    
    double num1, num2;
    cout << "Enter an number:\n";
    cin>>num1;
    cout << "Enter another number:\n";
    cin>>num2;
    double power = pow(num1, num2);
    cout << "power = " << power << endl;

    

    return 0;
}
