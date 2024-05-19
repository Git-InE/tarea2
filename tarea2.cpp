#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "super_string.c++"
using namespace std;

int main(){
    ifstream archivo;
    string linea;
    super_string ss;
	archivo.open("prueba.txt");
    if (!archivo.is_open()){
        cerr << "Error al abrir el archivo." << endl;
        return 1;
	}
    ss.agregar('h');
    ss.agregar('o');
    ss.agregar('l');
    ss.agregar('a');
    while (getline(archivo, linea)){
        istringstream iss(linea);
        string operacion;
        iss >> operacion;
        if (operacion == "INSERTAR"){
            int i;
            string s;
            iss >> i >> s;
        }
        if (operacion == "MOSTRAR"){
            ss.stringizar();
            
        }
        }
    archivo.close();
}