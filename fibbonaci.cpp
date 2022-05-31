/*Compile and run fibbonaci.cpp. The program will run successfully. This program is meant to print the first n+2 terms of the Fibonacci sequence, 
where n is specified in line 6 of the program. However, the output of the code as given clearly does not match this requirement.
A single logical bug in the code is causing this error. Use gdb to step through the program as it runs, locate and fix the bug.*/

#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;