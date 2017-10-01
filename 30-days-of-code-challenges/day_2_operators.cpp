#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string temp;
    
    getline(cin,temp);
    double mealCost = stod(temp);    
    
    getline(cin,temp);
    int tipPercent = stoi(temp);
    
    getline(cin,temp);
    int taxPercent = stoi(temp);
    
    double tip = mealCost * tipPercent / 100;
   
    double tax= mealCost * taxPercent / 100;
    
    int totalCost = static_cast<int>(round(mealCost + tip + tax));
    
    cout<<"The total meal cost is "<< totalCost << " dollars." << endl;
    
    return 0;
}