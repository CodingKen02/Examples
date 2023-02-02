#include <iostream>
using std::cout;
using std::endl;

int main() {
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        sum += i;
    }
    cout << sum << endl;
    return 0;
}