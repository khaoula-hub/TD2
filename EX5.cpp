#include<iostream>
using namespace std;
int main(){
    int a=2;
    int &ref_a=a;
    int *p_a;
    p_a=&a;
    cout<<a<<endl;
    cout<<ref_a<<endl;
    cout<<*p_a<<endl;
    cout<<&a<<endl;
    cout<<&ref_a<<endl;
    cout<<&*p_a<<endl;
    return 0;


}