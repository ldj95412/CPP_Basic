#include "io.h"

void String()
{
    char a = 'a';
    char hello[5] = { 'H','E','L','L','O' };
    char world[6] = "world"; // '\0' 이라는 문자가 마지막에 포함됨

    char b[] = "Hello World";

    int Size = sizeof(b);

    for (int i = 0; i < (Size - 1); i++)
    {
        cout << b[i] << endl;
    }
}
