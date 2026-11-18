#include <iostream>
using namespace std;
int main()

{
    int num = 0;
    cout << "enter a number :" << endl ;
    cin >> num ;
    if (num % 2 == 0){
        cout << "the given number is even" ;
    }else {
        cout << "the given number is odd" ;
    }
    return 0 ;
}