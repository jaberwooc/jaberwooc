#incluir  <iostream >   //librerías

/* Problema 32
   El objetivo del programa es determinar cual es la velocidad de una corriente y se nos proporciona la distancia recorrida y el tiempo que tarda un bote
   @Autor Jaberwooc
   @Fecha 16 de septiembre de 2021
    */


  uso de std de espacio de nombres;


  int d1, d2 , t1, t2;
  flotador r1, r2;
  flotación total;
   flotador funcion()
   {
       r1 =  d1 / t1;
       r2 = d2 / t2;
 total = abdominales(r1 - ((r1 + r2)/ 2));
       total de devolución;
   }
    
   int main()
    {

 cout <<  "¿Cual es la primer distancia que recorrio ? " ;
    cin >> d1 ;
 cout <<  "¿Cual es el tiempo en que recorrio ? " ;
    cin >> t1;
 cout <<  "¿Cual es la distancia que recorrio contra corriente ? " ;
    cin >> d2;
 cout <<  "¿Cual es el tiempo en que recorrio ? " ;
    cin >> t2;
 cout << funcion() <<  " Millas/hora"  << endl;
   }
