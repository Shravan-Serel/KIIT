#include<iostream>
using namespace std;

class arth{
    public:
        int area(int l,int b){
            return(l*b);
        }
        float area(float r){
            return(3.14*r*r);
        }
        float area(float bs,float ht){
            return((bs*ht)/2);
        }
};

int main(){
    arth a;
    int l,b;
    float r,bs,ht;
    cout << "Enter length and breadth of rectangle:";
    cin >> l >> b;
    cout << "Enter radius of circle:";
    cin >> r;
    cout << "Enter base and height of triangle:";
    cin >> bs >> ht;
    cout << "\nArea of rectangle is: " << a.area(l,b);
    cout << "\nArea of circle is: " << a.area(r);
    cout << "\nArea of triangle is: " << a.area(bs,ht);
}
