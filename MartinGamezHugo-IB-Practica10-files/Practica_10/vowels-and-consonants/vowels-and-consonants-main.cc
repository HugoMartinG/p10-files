#include<iostream>
#include<vector>
#include<fstream>

using namespace std;
int CountingVowels(string cadena);
int CountingConsonants(string cadena);
void lectura();
int main(){
    string palabra;
    LecturaYComparacion();
    return 0;
}
void LecturaYComparacion(){
    ifstream archivo;//declaramos un fichero
    string texto;
    archivo.open("texto.txt");//Abrimos archivo en modo lectura
    if (archivo.fail()){
        cout << "Error"<<endl;
    }
    while (!archivo.eof()){//MIentras no sea el final del archivo
        getline (archivo, texto);
    }

}
int CountingConsonants(string cadena){
    int counter = 0;
    int i;
    for (i = 0; i < cadena.length(); i++){
        switch (cadena[i]){
            case 'a': case 'A':
            break;
            case 'e': case 'E':
            break;
            case 'i': case 'I':
            break;
            case 'o': case 'O':
            break;
            case 'u': case 'U':
            break;
            default :
            counter++;
            break;
        }
    }
    return counter;
}

int CountingVowels(string cadena){
    int counter = 0;
    int i;
    for (i = 0; i < cadena.length(); i++){
        switch (cadena[i]){
            case 'a': case 'A':
                counter++;
                break;
            case 'e': case 'E':
                counter++;
                break;
            case 'i': case 'I':
                counter++;
                break;
            case 'o': case 'O':
                counter++;
                break;
            case 'u': case 'U':
                counter++;
                break;
            default:
                counter = 0;
        }
    }
    return counter;
}