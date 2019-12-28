#include <iostream>
#include "lsl.h"
using namespace std;

int main()
{
    LSL<int> lista;
    lista.push_front(44);
    lista.push_front(22);
    lista.push_back(66);
    //lista.pop_front();
    //lista.pop_back();
    lista.insert(2, 55);
    lista.erase(2);
    lista.insert(2, 44);
    lista.remove(44);
    //lista.clear();
    cout << " Vacía : " << lista.empty() << endl
         << " Tamaño: " << lista.size()  << endl
         << " Frente: " << lista.front() << endl
         << " Final : " << lista.back()  << endl << endl 
         << " Datos : " << endl;


    for(size_t i(0); i < lista.size(); ++i)
    {
        cout << " " << lista[i] << endl;
    }
    return 0;
}
