// программа для перевода километров в мили
//1 миля=1,609344 км т.е. кол-во км поделить на 1,6
#include <iostream>
using namespace std;
int main ()
{
    double km;
    const double kmVmil = 1.609344;
    cout << "Vvedite rasstoyanie v kilometrax: ";
    cin >> km;
    cout << "Rasstoyanie v milyax = " << km / kmVmil;

}
