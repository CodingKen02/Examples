#include <iostream>
using namespace std;
int main() {
    int myFirstVar;
    int yetAnotherVar;
    int thirdVar;

    cout << "Enter a number: ";
    cin >> myFirstVar;

    yetAnotherVar = myFirstVar;
    thirdVar      = yetAnotherVar + 1;

    cout << "Final value is " << thirdVar << endl;

    return 0;
}
