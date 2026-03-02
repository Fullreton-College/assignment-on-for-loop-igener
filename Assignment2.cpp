#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   int sales1;
   int sales2;
   int sales3; 
   int sales4;
   int sales5;

   cout << "Enter today's sales for store 1: ";
   cin >> sales1;
   cout << "Enter today's sales for store 2: ";
   cin >> sales2;
   cout << "Enter today's sales for store 3: ";
   cin >> sales3;
   cout << "Enter today's sales for store 4: ";
   cin >> sales4;
   cout << "Enter today's sales for store 5: ";
   cin >> sales5;

   cout << "SALES BAR CHART" << endl;
   cout << "Each * = $100" << endl;

   cout << "Store 1: ";
   for (sales1; sales1 >= 100; sales1 = sales1 - 100){
      cout << "*";
   }
   cout << endl;

   cout << "Store 2: ";
   for (sales2; sales2 >= 100; sales2 = sales2 - 100){
      cout << "*";
   }
   cout << endl;

      cout << "Store 3: ";
   for (sales3; sales3 >= 100; sales3 = sales3 - 100){
      cout << "*";
   }
   cout << endl;

      cout << "Store 4: ";
   for (sales4; sales4 >= 100; sales4 = sales4 - 100){
      cout << "*";
   }
   cout << endl;

      cout << "Store 5: ";
   for (sales5; sales5 >= 100; sales5 = sales5 - 100){
      cout << "*";
   }
   cout << endl;
   return 0;
}
