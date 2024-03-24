#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    student s[100];
    int a;
    cout << "Enter number of students: ";
    cin >> a;
    for(int i=0; i<a; i++){
        cout << "Enter student " << i+1 << "'s name: ";
        cin >> s[i].name;
        cout << "Enter student " << i+1 << "'s roll: ";
        cin >> s[i].roll;
        cout << "Enter student" << i+1 << "'s marks: ";
        cin >> s[i].marks;
        cout << endl;
    }


    cout << "The students information: " << endl;
    for(int i=0; i<a; i++){
        cout << s[i].name << setw(7) << s[i].roll << setw(9) << s[i].marks << endl;
    }
    
}
