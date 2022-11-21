#include <iostream>
using namespace std;

int main () {
    int i, N=0, primo=1, secondo=1, terzo;
    cin>>N;
    if (N>=2){

    for(i=0;i<N;i++){
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;
        cout<<terzo<<endl;
    }}
    else{
        cout<<"errore"<<endl;
    }

    return 0;
}
