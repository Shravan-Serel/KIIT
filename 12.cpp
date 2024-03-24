#include <iostream>
using namespace std;

class A{
    int a, b;
    public:
        A(){}
        A(int x, int y){
            a =  x;
            b = y;
        }
        void showA(){
            cout << "a = " << a << ", b = " << b << endl;
        }
        int get1(){
            return(a);
        }
        int get2(){
            return(b);
        }
};

class B{
    int m, n;
    public:
        B(){}
        B(int x, int y){
            m = x;
            n = y;
        }
        void showB(){
            cout << "m = " << m << ", n = " << n << endl;
        }
        void operator =(A z){
            m = z.get1();
            n = z.get2();
        }
};

int main(){
    A t(1,2);
    B k(3,4);
    k.showB();
    k=t;
    t.showA();
    k.showB();
    return 0;
}
