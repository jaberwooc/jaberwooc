#include <iostream>

using namespace std;

int h = 13;
int b = 40;
float vc ;
float vn ;
float d1 , d2;

float funcion()
{
    
    d1 = (h/ vn) + (b/vc) ;
    d2 = (b/ vn) + (h/vc) ;

   
   return 0;
}

int main()
{
  
    cout << "¿Cual es tu velocidad de caminata? " ;
    cin >> vc ;
    cout << "¿Cual es tu velocidad de nado? " ;
    cin >> vn;

    funcion();
    
     if( d1 < d2 )
    {
        cout << "El mejor tiempo promedio es : " << d1 << "s" << "\nDistancia nadada : " << h <<" m" << "\nDistancia corrida : " << b << " m" << endl ;


    }
    else
    
    {
          cout << "El mejor tiempo promedio es : " << d2 << "s"  << "\nDistancia nadada : " << b << " m"  << "\nDistancia corrida : " << h << " m" << endl ;
    }

  


}