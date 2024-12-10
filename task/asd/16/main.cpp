#include <iostream>

using std::cout;
using std::endl;

struct A {
   char *p; /* 4 або 8 байт */
   char c; /* 1 байт */
   char pad [3]; /* 3 байти */
   int x;
};

#pragma pack(push, 1)
struct B {
   char c; /* 1 байт */
   char *p; /* 4 або 8 байт */
   char pad [3]; /* 3 байти */
   int x;
};
#pragma pack(pop)

int main() {
   A a;
   B b;

   cout << "Addresses:\n*p: " << &a.p << " c: " <<  (void *)&a.c << " pad: " << &a.pad << " x: " << &a.x << endl
        << "Size of the structure: " << sizeof(a) << endl;

   cout << "Addresses:\n*p: " << &b.p << " c: " <<  (void *)&b.c << " pad: " << &b.pad << " x: " << &b.x << endl
        << "Size of the structure: " << sizeof(b) << endl;

   return 0;
}







