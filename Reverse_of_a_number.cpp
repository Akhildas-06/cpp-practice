#include<iostream>
using namespace std ;
int main ()
{
    int n;
     cout << "enter a number :"<< endl ;
     cin >> n ;
     int reversed = 0;
     while(n>0){
        int lastdigit = n % 10;
        reversed = (reversed * 10) + lastdigit;
        n = n/10;
    
     }
     cout << " the reverse of given number is :" << reversed ;
     return 0;

}