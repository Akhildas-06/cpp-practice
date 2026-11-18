#include <iostream>
using namespace std;
void swapvalue(int &a,int &b){
    int temp = a;
    a = b;
    b = temp ;
}
int main(){
int x;
int y;
cout << "Enter 2 numbers :" << endl;
cin>>x>>y;
swapvalue(x,y);
cout<<"The values are swapped successfully"<<endl;
cout<<"x ="<< x <<" "<<"y ="<<y;
return 0;
}