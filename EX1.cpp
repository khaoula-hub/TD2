#include <iostream>
using namespace std;
void afficheAppel(){
    int i;
    cout<<"Appel numéro:"<<i<<endl;
    i++;
}
int main(){
    for(int i=0; i<10; i++){
        afficheAppel();
    }
    return 0;
}