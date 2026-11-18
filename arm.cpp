#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout << "enter a 3-digit number :"<< endl ;
    cin >> n ;
    int n2 = n;
    int sum =0;
    while (n>0){
        int last = n%10 ;
        sum = sum + ( last * last * last);
        n=n/10;
        
    }
    if (n2 == sum){
        cout << " the given number " << n2 << " is an armstrong number" << endl;
    
    }else{
        cout << " the given number " << n2 << " is not an armstrong number" << endl;
    }
    return 0;
}