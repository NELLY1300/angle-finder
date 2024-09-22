#include <iostream>
using namespace std;

int main() {
    int angle1, angle2;

    cout << "Enter the first angle: ";
    cin >> angle1;
    cout << "Enter the second angle: ";
    cin >> angle2;


    int thirdAngle = 180 - (angle1 + angle2);

    cout << "The third angle is: " << thirdAngle << " degrees" << endl;

    return 0;
}
