#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number :" << endl;
    cin >> n ;
    int n2 = n;
    int reversed = 0;
    while (n>0){
        int last = n % 10;
        reversed = (reversed * 10) + last ;
        n=n/10;
        cout << reversed << endl;
    }
    if (n2 == reversed){
        cout << "the given number " << n2 << " is a palindrome"<< endl;
    }else{
        cout << "the given number " << n2 << " is not a palindrome";
    }
    return 0;
}