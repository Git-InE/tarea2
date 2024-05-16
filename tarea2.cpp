using namespace std;
#include <iostream>
#include <string>

class super_string {
    private:
        struct nodo {
            nodo *left = nullptr, *right = nullptr;
            int index;
            char c;
            nodo(int index, char c) {}
            };
        int height = 0; // Altura del árbol
        int length = 0; // Largo del super-string
        nodo* root = nullptr; // Raíz del super-string
        void super_string::limpiarRecursivo(nodo*& nodoActual); //nuevo
    public:
        super_string() {}
        void juntar(super_string &s);
        void agregar(char c); // Insertar un caracter en la última posición
            // En la izquierda esta el super_string a y en la derecha el super_string b
        void separar(int i, super_string &a, super_string &b);
        void reverso(); // No debe cambiar la altura del árbol
        int recortar(); // Retorna this->height después de recortar
        string stringizar(); // Debe ser O(n)
        void limpiar(); // Se deben borrar todos los nodos del super-string
};


void super_string::juntar(super_string &s) {

}
void super_string::agregar(char c){

}

void super_string::separar(int i, super_string &a, super_string &b){

}

void super_string::reverso(){

}

int super_string::recortar(){

}

string super_string::stringizar(){

}
/// provisional
void super_string::limpiar() {
    limpiarRecursivo(root);
    root = nullptr;
    height = 0;
    length = 0;
}

void super_string::limpiarRecursivo(nodo*& nodoActual){
    if (nodoActual != nullptr) {
        limpiarRecursivo(nodoActual->left);
        limpiarRecursivo(nodoActual->right);
        delete nodoActual;
        nodoActual = nullptr;
    }
return;
}