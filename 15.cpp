#include <iostream>
using namespace std;

void test(int x, int y) {
    int z = y-x;
    try {
        if (z > 0)
            throw z;
        else
            throw 'z';
    } catch (int z) {
        cout << "Difference is positive" << endl;
    } catch (char z) {
        cout << "Difference is negative" << endl;
    }
}

int main() {
    cout << "Testing multiple catches:\n";
    test(5, 10);
    test(5, 5);
    test(5, 6);
    return 0;
} 
