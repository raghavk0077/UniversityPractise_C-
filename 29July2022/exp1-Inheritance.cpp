#include "iostream"
using namespace std;

class base_Class{
    private:
        int age;

    protected:
        int rollNo;

    public:
        string name;
};

class derived_Class: public base_Class{
    private:
        string email;

    public:
        void input(){
            cin>>email>>rollNo>>name;   //>>age;
        }

        void display(){
            cout<<email<<endl<<rollNo<<endl<<name<<endl; //<<age<<endl;
        }
};

int main() {

    derived_Class d1;
    // d1.rollNo = 1058;
    d1.input();

    // cout<<d1.rollNo;
    d1.display();

    return 0;
}