#include <iostream>
using namespace std;

class Distance{
    private:
        int value;
    public:
        void input(){
            cout << "Enter Distance: ";
            cin >> value;
        }
        Distance operator >(Distance test){
            Distance temp;
            if(value > test.value)
                temp.value = value;
            else
                temp.value = test.value;
            return temp;
        }
        Distance operator ==(Distance test){
            Distance temp;
            if(value == test.value)
                cout << "Equal" << endl;
            else
                cout << "Not equal" << endl;
        }
        void display(){
            cout << "Greater value: " << value << endl;
        }
};

int main(){
    Distance a,b, c;
    a.input();
    b.input();
    c = a==b;
    c = a>b;
    c.display();
    return 0;
}
