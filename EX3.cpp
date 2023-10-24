#include <iostream>
using namespace std;
int main(){
    int T[10],i,max,min;
    for(i=0;i<10;i++){
        cout<<"T["<<i<<"]=?"<<endl;
        cin>>T[i];
    }
    max=T[0];
    for(i=0;i<10;i++){
        if(max<T[i]){
            max=T[i];
        }
    }
    cout<<"le plus grand nombre est :"<<max<<endl;
    min=T[0];
    for(i=0;i<10;i++){
        if(min>T[i]){
            min=T[i];
        }
    }
    cout<<"le plus petit nombre est :"<<min<<endl;

    return 0;
}
/* formalisme poiteur*/
int *p;
p=T[0];
    for(i=0;i<10;i++){
        if(T[i]<T[0]){
            p=T[i];
            max=p;
        }
    }
    cout<<"le plus grand nombre est :"<<max<<endl;
    min=T[0];
    for(i=0;i<10;i++){
        if(T[i]>T[0]){
            p=T[i];
            min=p;
        }
    }
    cout<<"le plus petit nombre est :"<<min<<endl;

