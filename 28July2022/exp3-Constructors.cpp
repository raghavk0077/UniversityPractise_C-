#include "iostream"
using namespace std;

int c = 0;

class car {

             

    int model;                
    float cost;
    string *color;

    public:
        car() {                     //default constructor
            //model = 2022;
            color = new string;
            //cost = 34.74;
        }

        car(int m1, float p1){
            model = m1;
            cost = p1;
        }

        void display();

        // car(car &c1){               //Copy constructor
        //     model = c1.model;
        //     cost = c1.cost;
        // }
        

        ~car(){
            cout<<"No. of objects:"<<++c;
         
            
        }
        
};

void car :: display(){
    cout<<endl<<model<<endl<<color<<endl<<cost;
}

int main() {

    car c1;
    car c2; car c3;
    //c1.display();
    // cout<<endl<<endl;
    // car c2(1222,23.23);
    //c2.display();

    // c2 = c1;
    // cout<<"\nc1.display\n";
    // c1.display();
    // cout<<"\nc2.display\n";
    // c2.display();


    return 0;
}