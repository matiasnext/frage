#include <iostream>

using namespace std;

int main ()
{
    string vec[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio", "Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    int mes;
    cout << "Ingrese numero de mes que desea mostrar: ";
    cin >> mes;
    cout << mes << "Corresponde al mes " << vec[mes-1] << endl;
return 0;
}
