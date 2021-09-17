#include <iostream> //librerias

/* Problema 35
   El objetivo del programa es determinar cual es el tiempo estimado que durara cada trabajador en construir una alberca

   @Autor Jaberwooc
   @Fecha 16 de septiembre de 2021
    */


using namespace std;


float t1, t2, t3, t;
int d;
 float funcion()

{
    float t = d / 2.25;
    t1 = 225 / t;
    t2 = 225 / (.5 * t);
    t3 = 225 / (.75 * t);
    return 0;
}

  int main()
{
      
    
    cout << "¿ Cuantos dias duran en termibar juntos ? " << endl;
    cin >> d;
    funcion();
    cout << "Roberto duraria " << t1 << " dias" << endl ;
    cout << "Guillermo duraria " << t2 << " dias" << endl;
    cout << "Samuel duraria " << t3 << " dias" << endl;

}