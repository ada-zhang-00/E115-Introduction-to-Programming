//  main.cpp
//  lab5 arrays and matrices
//
//  Created by Ada Zhang on 10/18/20.
//

#include <iostream>

using namespace std;

void sum(int array[], int length){
  int sum = 0;
  for(int i = 0; i < length; i++){
    sum += array[i];
  }
  cout << "The sum of the array is: " << sum << endl;
  //cout << "1\n";     //test to see if sum() is called correctly
  return;
}
void min(int array [], int length) {
  int min = array[0];
  for (int i = 0; i < length; i++){
    if(array[i] < min){
      min = array[i];
    }
  }
  cout << "The min of the array is: " << min << endl;
  //cout << "2\n";     //test to see if min() is called correctly
  return;
}
void max(int array[], int length) {
  int max = array[0];
  for (int i = 0; i < length; i++){
    if(array[i] > max){
      max = array[i];
    }
  }
  cout << "The max of the array is: " << max << endl;
  //cout << "3\n";     //test to see if max() is called correctly
  return;
}

int main() {
  //[Part 1] Write a program that accepts exactly ten (10) integer numbers from the user and stores them in an array. 
  //In a separate for-loop, the program then goes through the elements in the array to print back: 
  //(i) The sum of the 10 numbers, (ii) the minimum value from the 10 numbers, and (iii) the maximum value from the 10 numbers.
  
  int array [10] = {};
  int user;
  int length = 0;

  for (int i=0; i<10; i++){
    length += 1;
    cout << "Enter a number: \n";
    cin >> user;
    array[i] = user;
    //cout << array[i] << endl;     //This was to check if the
                                    //elements were added to the array
  }
    //cout << length << endl;       //double checking the length
  sum(array, length);
  min(array, length);
  max(array, length);

  //[Part 2] Write a program that creates two 2x2 matrices, A and B, and then adds them together to create a third matrix, C. 
  //Create these matrices using 2x2 integer arrays and prompt the user to input values to populate the A and B matrices. 
  //Then, compute and print back the summation matrix, C. Do print the matrix using a format similar to what we did during lecture.
  
  int a[2][2], b[2][2], c[2][2];
  cout << "Please enter the 4 numbers in matrix A: \n";
  for (int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      cin >> a[i][j];
    }
  }
  cout << "Please enter the 4 numbers in matrix B: \n";
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
      cin >> b[i][j];
    }
  }
  cout << "This is the added matrix: \n";

  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
      c[i][j] = a[i][j] + b[i][j];
      cout << c[i][j] << '\t';
    }
    cout << '\n';
  }

  return 0;
}

