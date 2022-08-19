#include "iostream"
using namespace std;

class car {             
   // private:
        int model;                //by default if we do not mention any access specifier then it is private by default

    public:
        float cost;
    
    protected:
        string color;

    public:
        void input(){
            cin>>model>>color;
        }   

        void display();
        
};

void car :: display(){
            cout<<endl<<model<<endl<<color<<endl<<cost;
        }

int main() {
    car c1;
    //c1.model = 2022;        //it will give an error because it is private
    c1.input();
    c1.cost = 53.55;
    //c1.color = "black";     //it will give an error becauseit is protected
    c1.display();

    return 0;
}