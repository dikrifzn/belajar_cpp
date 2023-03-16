#include <iostream>
using namespace std;

int main(){
   int size, i, j;

   cout << "Masukkan jumlah huruf :";
   cin >> size;

   char chars[size];
   cout << "Masukkan " << size << " huruf:";

   for (i = 0; i < size; i++){
       cin >> chars[i];
   }

   char temp;
   for (i = 0; i < size; i++){
       for (j = 0; j < size - 1; j++){
           if (chars[j + 1] < chars[j])
           {
               temp = chars[j]; 
               chars[j] = chars[j + 1];
               chars[j + 1] = temp;
           }
       }
   }

   for (int i = 0; i < size; i++){
       cout << chars[i] << " ";
   }

   return 0;
}
