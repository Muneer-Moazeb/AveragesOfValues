/*

file name:Chapter2exercise3.cpp
GitHub URL: https://github.com/Muneer-Moazeb/AveragesOfValues/blob/main/chapter2exercise5.cpp 
programmer:Yaqoob Nagi
Date:January 2025
Requirements:

To get the average of a series of values, you add
 the values up then divide the sum by the number of 
 values. Write a program that stores the following values
  in five different variables: 28, 32, 37, 24, and 33. The 
  program should first calculate the sum of these five 
  variables and store the result in a separate variable named sum. 
  Then, the program should divide the sum variable by 5 to get the average. 
  Display the average on the screen. Be sure you post this project to GitHub 
  and submit the URL for the project.
*/
#include <iostream>
using namespace std;


int main()
{
    int a = 28, b = 32, c = 37, d = 24, e = 33;
    int sum = a + b + c + d + e;
    double avg = sum / 5.0;

    cout << " Average: " << avg << "/n";

    return 0;
}
