#include<iostream>
using namespace std;
int main(){
    int t[10];
    for(int i=0; i<10;i++){
        cout<<"["<<i<<"]=?"<<endl;
        cin>>t[i];
        int *p, a=0;
        do{
            for(i=0;i<10;i++){
                if(t[i]<t[i+1]){
                    *p=t[i];
                    t[i]=t[i+1];
                    t[i+1]=*p;
                    a++;
                }
            }
        }while(a);
        cout<<"le nombre de permutation est:"<<a<<endl;
        for(i=0;i<10;i++){
            cout<<t[i];
        }
    }
    return 0;
}