#include<iostream>
using namespace std;

 int main ()
 {

    int x, y, z, num;
    cout<<"Enter a number: ";
        cin>>num; // 10 
        x=0;
        y=1;
        z=0;
                while (z<num)
            {
                x = y;
                y = z;
                z = x + y;
                cout<< z;
            
            }
    

    return 0;
 }