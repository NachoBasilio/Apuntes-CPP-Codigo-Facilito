#include <iostream>
using namespace std;

int main(){
    char pregunta;
    cout << "Desea continuar? (s/n)" << endl;
    cin >> pregunta;
    if (pregunta == 's' || pregunta == 'S')
    {
        cout << "Continuando..." << endl;
    } else if (pregunta == 'n' || pregunta == 'N')
    {
        cout << "Saliendo..." << endl;
    } else
    {
        cout << "Opcion invalida" << endl;
    }
}