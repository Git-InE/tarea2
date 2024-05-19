#include <iostream>
#include <string>
using namespace std;
class super_string {
    private:
        struct nodo {
            nodo *left = nullptr, *right = nullptr;
            int index;
            char c;
            nodo(int index, char c) {}
            nodo(){}
            };
        int height = 0; // Altura del árbol
        int length = 0; // Largo del super-string
        nodo* root = nullptr; // Raíz del super-string
    public:
        super_string() {}
        void limpiarRecursivo(nodo*& nodoActual); //nuevo
        void juntar(super_string &s);
        void agregar(char c); // Insertar un caracter en la última posición
            // En la izquierda esta el super_string a y en la derecha el super_string b
        void separar(int i, super_string &a, super_string &b);
        void reverso(); // No debe cambiar la altura del árbol
        int recortar(); // Retorna this->height después de recortar
        string stringizar(); // Debe ser O(n)
        void stringizar(nodo* nodoActual, string &str);
        void limpiar(); // Se deben borrar todos los nodos del super-string
};


void super_string::juntar(super_string &s) {
    nodo* temp = root;
    while (temp->right){
        temp = temp->right;
    }
    temp->right = s.root;

}
//terminado
void super_string::agregar(char c){
    nodo* nuevo = new nodo(length, c);
    if (root = nullptr) root = nuevo;
    
    else{
        nodo* temp = root;
        while (temp->right != nullptr) {temp = temp->right;}
        temp->right = nuevo;
    }
    length++;
}

void super_string::separar(int i, super_string &a, super_string &b){
}

void super_string::reverso(){

}

int super_string::recortar(){
    return 0;
}

string super_string::stringizar() {
    string str;
    stringizar(root, str);
    return str;
}
//inorden
void super_string::stringizar(nodo* n, string &str) {
    if(n){
        stringizar(n->left, str);
        str += n->c;
        stringizar(n->right, str);
    }
}

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
