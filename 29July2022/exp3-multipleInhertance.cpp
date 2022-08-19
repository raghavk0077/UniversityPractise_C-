#include "iostream"
using namespace std;

class base_Class1{
    public:
        int rollNo;
        void input3(){
            cin>>rollNo;
        }

        void display3(){
            cout<<rollNo;
        }
};
class base_Class2{
    public:
        int marks;
        void input(){
            cin>>marks;
        }

        void display(){
            cout<<marks;
        }
};

class derived_Class: public base_Class1, public base_Class2{
    public:
        string name;

        void input1() {
            cin>>name;
        }

        void display1(){
            cout<<name;
        }
};

int main() {
    derived_Class d1;
    d1.input();
    d1.display();
}

