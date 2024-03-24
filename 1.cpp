#include <iostream>
using namespace std;

class Add{
    public:
        int num1, num2;

        void getNum(){
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        int sum(int n1, int n2){
            return n1+n2;
        }

        void result(){
            cout << "Sum: " << sum(num1, num2);
        }
};

int main()
{
    Add num;
    num.getNum();
    num.result();

    return 0;
}
