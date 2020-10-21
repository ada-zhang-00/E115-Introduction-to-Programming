//  main.cpp
//  lab3-realistic grade predictor
//
//  Created by Ada Zhang on 10/3/20.
//
//Create a grade predictor program for a hypothetical course that comprises the following elements: 
//(i) six homework scores, (ii) two midterm scores, and (iii) one final. 
//The following weightage is used to arrive at the final cumulative score: 
//40% from homeworks, 40% from midterms and 20% from the final. 
//A final letter grade is arrived at based on the following score range: 
//(i) ‘A’ for scores 91--100, (ii) ‘B’ for 81--90, (iii) ‘C’ for 71--80 and D otherwise.

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    //6 homework scores
    float hw1;
    cout << "Homework 1 grade?\n";
    cin>> hw1;
    
    float hw2;
    cout << "Homework 2 grade?\n";
    cin>> hw2;
    
    float hw3;
    cout << "Homework 3 grade?\n";
    cin>> hw3;
    
    float hw4;
    cout << "Homework 4 grade?\n";
    cin>> hw4;
    
    float hw5;
    cout << "Homework 5 grade?\n";
    cin>> hw5;
    
    float hw6;
    cout << "Homework 6 grade?\n";
    cin>> hw6;
    
    float hw_sum = hw1+hw2+hw3+hw4+hw5+hw6;
    float hw_avg = hw_sum/6;
    float hw_weight = hw_avg *0.4;
    //cout << "Your homework weight is:" << hw_avg <<endl;
    cout << "Your homework avg is:" << hw_avg <<endl;
    
    cout << " \n";
    
    //2 midterm
    float midterm1;
    cout << "Midterm 1 grade?\n";
    cin>> midterm1;
    
    float midterm2;
    cout << "Miderem 2 grade?\n";
    cin>> midterm2;
    
    float midterm_sum = midterm1+midterm2;
    float midterm_avg = midterm_sum/2;
    float midterm_weight = midterm_avg *0.4;
    //cout << "Your midterm weight is:" << midterm_weight <<endl;
    cout << "Your midterm average is:" << midterm_avg <<endl;
    
    cout << " \n";
    
    //final
    float final1;
    cout << "Final 1 grade?\n";
    cin>> final1;
    
    float final_weight = final1 *0.2;
    //cout << "Your final weight is:" << final_weight <<endl;
    cout << "Your averaqge for the final is:" << final1 <<endl;
    
    cout << " \n";
    
    //course grade
    float course_grade = hw_weight+midterm_weight+final_weight;
    if (course_grade >= 91){
        cout << "Congrats! You've recieved an A! \n";
    }
    else if (course_grade >= 81){
        cout << "Not too bad! You've recieved a B. \n";
        
    }
    else if (course_grade >= 71){
        cout << "Getting low. This is a C. \n";
        
    }
    else{
        cout << "Unfortunately you get a D. \n";
        
    }
        
    cout << " \n";

    return 0;
    
}
