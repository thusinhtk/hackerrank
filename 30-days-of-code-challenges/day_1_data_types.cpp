#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	    
    // Declare second integer, double, and String variables.
    int i2;

    double d2;

    string s2;

    string temp;
    // Read and save an integer, double, and String to your variables.
    getline(cin,temp);
    i2 = stoi(temp);

    getline(cin,temp);
    d2 = stod(temp);

    getline(cin,s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<< i + i2 << endl;
    
    // Print the sum of the double variables on a new line.
    cout.precision(1);
    cout<< fixed  << d + d2 << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<< s+ s2 << endl;
    
	return 0;
}