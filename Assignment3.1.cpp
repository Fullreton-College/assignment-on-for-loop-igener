// Chapter 5, Programming Challenge 17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

int first;
int second;

cout << "First integer: ";
cin >> first;

cout << "Second integer: ";
cin >> second;

if (second < first){
    cout << "Second integer can't be less than the first." << endl;
}

for(second; second >= first; first = first + 5){
    cout << first << " ";
}
cout << endl;

return 0;
}
