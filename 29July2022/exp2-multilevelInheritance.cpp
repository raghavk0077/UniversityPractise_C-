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
        char sex;
        void input(){
            cin>>email>>rollNo>>name;   //>>age;
        }

        void display(){
            cout<<email<<endl<<rollNo<<endl<<name<<endl; //<<age<<endl;
        }
};

class derived_class2: public derived_Class{
    public:
        float marks;

    void input2(){
        cin>>sex>>marks>>name;
    }

    void display2(){
        cout<<sex<<endl<<marks<<endl<<name<<endl;
    }
};

int main() {

    derived_class2 d2;
    d2.input2();
    d2.display2();

    return 0;
}

