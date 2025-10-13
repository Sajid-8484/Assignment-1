#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter number of 'a' : ";
    cin>> a;
    cout <<"Enter number of 'b' : ";
    cin>> b;
    a=b-a;
    b=b-a;
    cout<<"Replace Value of 'a' into 'b': "<<b<<endl;
    a=a+b;
    cout<<"Replace Value of 'b' into 'a': "<<a;
    return 0;
}
