#include "iostream"
#include "time.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;


    clock_t start, end;
  
    /* Recording the starting clock tick.*/
    start = clock();


    int c = (rows*(rows + 1))/2;

    // for(int i = rows; i > 0; i--){
    //     for(int j = i; j > 0; j--){
    //         c++;
    //     }
    // }

    for(int i = rows; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
    }
  
  
    // Recording the end clock tick.
    end = clock();
  
    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}