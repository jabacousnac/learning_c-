#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int myint = 1;
    ++myint; // Increment myint by 1
    cout << myint << "\n" << endl;

    const double pi = M_PI; // Define pi

    // Compute the volume of a sphere
    double a = 1.0; // to compute the volume of sphere, we need to make sure a and all constants are floating pt numbers
    double vol = (4.0 / 3.0) * pi * std::pow(a, 3);
    cout << "Volume of sphere with radius 1: " << vol << endl;

    return 0;
}

