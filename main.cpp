// THE TRIANGLE TYPE PROBLEM

//  Given three integers (a, b and c) representing the lengths of the sides of a triangle,
//  return what type of triangle it is. The three types are equilateral, isosceles, and scalene.
//  An equilateral triangle has all three sides the same length,
//  An isosceles triangle has two sides the same length,
//  A scalene triangle has three sides of different lengths.

//  Here are some examples:
// • for input of 5, 7, 7 →isosceles
// • for input of 6, 6, 6 →equilateral
// • for input of 5, 7, 8 →scalene
// • for input of 12, 18, 12 →isosceles

#include <iostream>
using namespace std;
#include <string>

string triangle(int a, int b, int c)
{
    string result;
    if (a == b && b == c && a == c)
        cout << " equilateral" << endl;
    else if (a == c || b == c || a == c)
        cout << "isosceles" << endl;
    else if (a != b && b != c && a != c)
        cout << "scalene" << endl;
    return result;
}

int main()
{
    cout << "Testing triangle(5, 7, 7): " << triangle(5, 7, 7) << endl;
    cout << "Testing triangle(7, 7, 7): " << triangle(7, 7, 7) << endl;
    cout << "Testing triangle(5, 7, 8): " << triangle(5, 7, 8) << endl;
    cout << "Testing triangle(12, 17, 12): " << triangle(12, 17, 12) << endl;
    return 0;
}