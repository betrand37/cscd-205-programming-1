#include <iostream>

using namespace std;

int main()
{


    int a;
    cout<<"Enter a number hoss\n";
    cin>>a;



    for (int i=2; i<a; i++){

        if(a%i==0)
        {

        cout<<"Number you have entered is a prime number";
        }
        else{

        cout<<"Number you have entered is not a prime number";
        }
    return 0;
}
