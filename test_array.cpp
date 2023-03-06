#include <iostream>
using namespace std;

int main() {
    const int DAYS_IN_WEEK = 7; // constant for number of days in a week
    double temps[DAYS_IN_WEEK]; // array to store temperatures
    
    // loop through each day of the week and prompt user for temperature input
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        cout << "Enter the average temperature for day " << i+1 << ": ";
        cin >> temps[i];
    }
    
    // print out the average temperature for each day of the week
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        cout << "The average temperature for day " << i+1 << " was " << temps[i] << endl;
    }
    
    return 0;
}
