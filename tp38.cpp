#include <iostream>

using namespace std;

bool esMultiploDe17(int num);

int main(){
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if(esMultiploDe17(num)) cout << num << " es múltiplo de 17" << endl;
    else cout << num << " no es múltiplo de 17" << endl;
    return 0;
}

bool esMultiploDe17(int num){
    if(num % 17 == 0) 
	return true;
    else
	 return false;
}

