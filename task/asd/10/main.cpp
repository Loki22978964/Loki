//#include <iostream>
//#include <string> // ��� std::string
//
//struct S {
//    int data; 
//};
//
//struct S1 {
//    char a[2];    
//    char c;       
//    const char* s;      
//    S* p;         
//    short i;      
//} z = { "a", 'b', "&qwerty", new S{42} }; 
//
//
//int main() {
//    std::cout << sizeof(S1);
//    return 0;
//}
//


#include <iostream>

class Point {
public:
	int x;
	int z;
private:
	int p;
};

int main() {
	Point a;
	a.x = 9;
	a.z = 8;
	Point p = 7;

	cout << a.x << " " << a.z << " " << Point p;
}
