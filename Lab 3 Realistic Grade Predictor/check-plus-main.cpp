//  main.cpp
//  lab3 check plus
//
//  Created by Ada Zhang on 10/4/20.
//
//Check+: Create a realistic grade predictor for any course. 
//Your program assumes nothing about the number of homeworks/midterm/finals. 
//Instead, it asks for these things up-front, including the weights for each component. 
//In summary, this program should universally work for any course as it learns and adapts what 
//it does based on what/how it learns about the course from the user.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int hw_num;
    float hw_total;
    float hw_avg;
    float hw_sum = 0;
    float hw_weight;
    int midterm_num;
    float midterm_total;
    float midterm_avg;
    float midterm_sum = 0;
    float midterm_weight;
    float final_grade;
    float final_total;
    float final_weight;
    float courseGrade;
    
    cout << "How many homework assignments have you had? \n";
    cin >> hw_num;
    for (int i = 1; i <= hw_num; i++) {
        cout << "Assignment score? \n";
        cin >> hw_total;
        while (hw_total > 100) {
            cout << "Error. Inputs must be less than or equal to 100. \n";
            cin >> hw_total;
            }
        
        hw_sum = hw_sum + hw_total;
    }
    
    hw_avg = hw_sum / hw_num;

    cout << "Your homework average is " << hw_avg << endl;

    cout << "What decimal value of your final grade is homework? \n";
    cin >> hw_weight;
    while (hw_weight > 1) {
        cout << "Error. Inputs must be less than or equal to 1. \n";
        cin >> hw_weight;
    }
        
    cout << "How many midterms did you have? \n";
    cin >> midterm_num;
    for (int i = 1; i <= midterm_num; i++) {
        cout << "Midterm score? \n";
        cin >> midterm_total;
        while (midterm_total > 100) {
            cout << "Error. Inputs must be less than or equal to 100. \n";
            cin >> midterm_total;
        }

        midterm_sum = midterm_sum + midterm_total;
    }
    midterm_avg = midterm_sum / midterm_num;
    cout << "Your midterm average is " << midterm_avg << endl;
    cout << "What is the weighted decimal value of your midterms? \n";
    cin >> midterm_weight;
    while (midterm_weight > 1) {
        cout << "Error. Inputs must be less than or equal to 1. \n";
        cin >> midterm_weight;
    }
    
    cout << "What did you score on your final exam? \n";\
    cin >> final_grade;
    while (final_grade > 100) {
        cout << "Error. Inputs must be less than or equal to 100. \n";
        cin >> final_grade;
    }

    final_total = final_grade;
    cout << "What is the weighted decimal value of your final exam on your total grade? \n";
    cin >> final_weight;
    while (final_weight > 1) {
        cout << "Error. Inputs must be less than or equal to 1. \n";
        cout << "What is the weighted decimal value of your final exam on your total grade? \n";
        cin >> final_weight;
    }
    courseGrade = (hw_weight*hw_avg) + (midterm_weight*midterm_avg) + (final_weight*final_total);

    if (hw_weight + midterm_weight + final_weight == 1) {
        cout << "Your final grade for the course is " << courseGrade << endl;
    }
    else {
        while (hw_weight + midterm_weight + final_weight != 1) {
            cout << "The sum of your weighted values should equal 1. \n";
            cin >> final_weight;
        }
    }
    if (courseGrade >= 91) {
        cout << "Congrats! You've recieved an A! \n";
    }
    else if (courseGrade >= 81) {
        cout << "Not too bad! You've recieved a B. \n";
    }
    else if (courseGrade >= 71) {
        cout << "Getting low. This is a C. \n";
    }
    else {
        cout << "Unfortunately you get a D. \n";
    }
    return 0;
}
