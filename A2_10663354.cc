#include <iostream>
using namespace std;

int main()
  {
     int number, i;
     bool primeNumber =true;
     int c=1;


     cout<< "Enter the integer to be checked:";
     
     cin >> number;

   for (i=2; i<number-c; i++)


    {

     if(number%i==0)
      {
         primeNumber =false;
          break;
      }
  }

 if(primeNumber)

  cout <<"This number is a prime number";


 else


   (number%i!=0);

   cout <<"This is not a prime number";

return 0;

 }
