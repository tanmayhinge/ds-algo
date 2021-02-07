//just a file to test code
#include <iostream>
using namespace std;

int main() {
   int a = 7, b ;
   int *p; // Un-initialized Pointer
   p = &a; // Stores address of a in ptr
   b = *p; // Put Value at ptr in b
   
   cout << b;
}
