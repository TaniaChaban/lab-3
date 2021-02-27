#include <iostream>
 
using namespace std;
 
int main ()
{
    int i =0;
    int suma = 0;
    int number =0;
 
    cout << "Enter your number (0 - it`s exit): \n";
 
 
    do{
        cout <<"Number" <<i+1 << "=";
        cin>>number;
 
        if(number){
            i++;
        suma += number;
        }
    }while(number);
 
    cout <<"Amount of numbers:"<< i+1 <<endl;
    cout <<"All number together:" <<suma << endl;
    cout << "Arithmetic mean:"<< suma / (i+1) <<endl;
 
    return 0;
}

