#include <iostream>
using namespace std;

template<class T>
class A{
    public:
        void add(T a, T b){
            cout << a+b << endl;
        }
};
int main(){
    A<int>obj1;
    obj1.add(2,3);
    A<float>obj2;
    obj2.add(2.5, 3.5);
    A<string>obj3;
    obj3.add("Hello" , " World");
    return 0;
}
