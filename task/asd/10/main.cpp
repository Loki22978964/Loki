#include <iostream>
#include <string> // ��� std::string

struct S {
    int data; // ������� ����������� ���� ���������
};

struct S1 {
    char a[2];    // ����� � 2 �������� ���� char
    char c;       // �������� ����� ���� char
    const char* s;      // �������� �� ��� char
    S* p;         // �������� �� ��������� ���� S
    short i;      // ����� ���� short
} z = { "a", 'b', "&qwerty", new S{42} }; // ������� �����������


int main() {
    cout << sizeof(S1);
    return 0;
}

