#include <iostream>


using namespace std;



int main(){

int numero;

cout<<"ingrese un numero: ";
cin>> numero;

for(int i=1;i <= numero; i++){

    cout << numero << " x " << i << " = "<< numero * i<<endl ;

}


return 0;
}
