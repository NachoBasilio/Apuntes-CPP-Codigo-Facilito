//crea yb codico con los principales operadores matemacitos en cpp

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el valor de a" << endl;
    cin >> a;
    cout << "Ingrese el valor de b" << endl;
    cin >> b;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;
    cout << "a + b = " << c << endl;
    cout << "a - b = " << d << endl;
    cout << "a * b = " << e << endl;
    cout << "a / b = " << f << endl;
    cout << "a % b = " << g << endl;
    return 0;
}