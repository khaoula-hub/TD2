#include <iostream>
using namespace std;
int main(){
    int T[n],i,n;
    cout<<"quelle est la taille du tableau"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"T["<<i<<"]=?"<<endl;
        cin>>T[n];
    }
    int *tab;
    int *p;
    tab=new int[n];
    p=T[0];
    for(i=0;i<n;i++){
        tab[i]=T[i]*T[i];
    }
    return 0;
}