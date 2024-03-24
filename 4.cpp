using namespace std;

class character{
    public:
        void displayChar(char x = '*', int n = 80){
            for(int i=0; i<n; i++){
                cout << x;
            }
            cout << endl;
        }
};

int main(){
    character c;
    c.displayChar('%', 5);
    c.displayChar('&');
    c.displayChar();

    return 0;
}
