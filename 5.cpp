//WAP to swap two integers using pass by reference.
#include <iostream>
using namespace std;

class okay{
    public:
        inline void swapNum(float &m, float &n){
            float temp = m;
            m = n;
            n = temp;
        }
};

int main(){
    okay s;
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    s.swapNum(a,b);
    cout << "Swapped values: " << a << " "<< b;

    return 0;
}
