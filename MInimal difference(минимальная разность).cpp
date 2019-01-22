#include <iostream>
#include <complex>
//поиск минимальной разности
int main()
{
   using namespace std;
   //cout<<"инициализация...\n";
   int const SIZE=4;
   int a[SIZE],min=2147483647;
   //cout<<"успешно.\n";
   //cout<<"ввод...\n";
   cout<<"Enter array\n";
   for (int i=0;i<SIZE;i++)
   cin>>a[i];
   //cout<<"успешно.\n";
   //цикл
   for (int i=0 ; i<(SIZE-1); i++)
   { 
      for(int j=1; j<SIZE ; j++)
         {
            if (i!=j)
               {
                  if ((abs(a[i]-a[j]))<min) 
                  min=(abs(a[i]-a[j]));
               }
         }
   }
   cout<<"Minimal difference is "<<min;
   cout<<"\n";
   return 0;
}
