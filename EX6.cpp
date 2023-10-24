#include<iostream>
using namespace std;
int incrementer(int a){
    a++;
}
void permuter_pointeur(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void permuter_reference(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
int main(){
    int x, y;
    cout<<"veuillez entrer les deux nombres"<<endl;
    cin>>x;
    cin>>y;
    x=incrementer(x);
    y=incrementer(y);
    permuter_pointeur(x,y);
    cout<<x<<y<endl;
    permuter_reference(x,y);
    cout<<x<<y<<endl;
    return 0;

}