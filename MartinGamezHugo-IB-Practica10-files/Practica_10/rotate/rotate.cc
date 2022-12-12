#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void LecturaAndRotation();
int main(){
    cout << "Archivo-Rotate" << endl;
    LecturaAndRotation();
    
    return 0;
}
void LecturaAndRotation(){
    ifstream archivo;//declaramos un fichero
    string texto;
    archivo.open("texto.txt", ios::in);//Abrimos archivo en modo lectura
    if (archivo.fail()){
        cout << "Error";
    }
    while (!archivo.eof()){//Mientras no sea el final del archivo
        getline (archivo, texto);//El texto del archivo se copia en un string
    }
    for (int i = 0; i < texto.size(); i++){
        switch (texto[i]){
            case 'a': texto[i] = 'e';
            break;
            case 'e': texto[i] = 'i';
            break;
            case 'i': texto[i] = 'o';
            break;
            case 'o': texto[i] = 'u';
            break;
            case 'u': texto[i] = 'a';
            break;
            default :
            break;
        }
    }
    cout << texto << endl;
}
