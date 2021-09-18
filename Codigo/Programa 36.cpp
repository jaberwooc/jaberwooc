#include <iostream> //librerias
#include <cmath> 
/* Problema 36
   El objetivo del programa es determinar cual sera el salario del trabajador si trabaja 3 semanas de lunes a sabado 
   y el valor de entrada serian 3*6 dias igual a 18 dias que trabajara
   @Autor Jaberwooc
   @Fecha 17 de septiembre de 2021
    */


using  std::pow;
using namespace std;

int x, y ;
int t ;
float funcion()
{
    
    for (int i= 0; i < x ; i++ )
    {
        y = pow(2 , i);

        t += y;
    } 
   

    return 0;
}

int main()
{

    cout << "¿Cuantos dias trabajara? " << endl;
    cin >> x;
    cout << "¿Cual es el primer pago ? " << endl;
    cin >> y;
    funcion();
    cout << "El sueldo a pagar es de : " << t << endl;
}