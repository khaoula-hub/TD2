#include <iostream>
using namespace std;
int multiple_2(int a){
    if(a%2==0){
    cout<< a <<"est multiple de 2"<<endl;
}}
int multiple_3(int a){
    if(a%3==0){
    cout<< a <<"est multiple de 3"<<endl;
}}
int main(){
    int x;
    cout<<"entrer un nombre"<<endl;
    cin>>x;
     multiple_2(x);
     multiple_3(x);
    return 0;
}