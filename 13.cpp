//class to primitive type conversion
#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(){}
        Complex(int k, int l){
            a=k;
            b=l;
        }
        void show(){
            cout << "a = " << a << ", b = " << b << endl;
        }
        operator int(){
            return b;
        }
};

int main(){
    Complex c(3,4);
    int x;
    x = c;
    cout << x << endl;
    c.show();
    return 0;
}
