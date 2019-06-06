/*
g++ -o ../bin/fastipow fastipow.cpp
../bin/fastipow
*/
#include <iostream>

using namespace std;

double ipow(double x, int n);

int main()
{
    cout << "\nThe simple example of the repeated squaring method by" << endl;
    cout << "          Name: "
         << "Change the text to your name" << endl;
    cout << "    Student ID: "
         << "Change the text to your student ID" << endl;

    double x = 2.0;
    int n = 8;
    cout << "\n ipow(x, n): " << x << "^" << n << "=" << ipow(x, n) << endl;
};

