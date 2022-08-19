#include "iostream"
using namespace std;

class car {             
    private:
        int model;

    protected:
        string color;

    public:
        float cost;
    

    friend class Honda;
};

class Honda{
    public:
        void input(car &c){
            cin>>c.model>>c.color;
            //cout<<"model : "<<c.model<<endl;
            //cout<<"color : "<<c.color<<endl;
        }

        void display(car &c){
            cout<<"model : "<<c.model<<endl;
            cout<<"color : "<<c.color<<endl;
        }
};

int main() {
    car c1;
    Honda h1;
    h1.input(c1);
    h1.display(c1);

    return 0;
}