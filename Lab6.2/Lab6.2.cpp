#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

void SWAPI(int f[], const int size);
void COUTI(int f[], const int size);
void SWAPR(int z[], const int size,int i);
void COUTR(int z[], const int size,int i);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand((unsigned)time(NULL));

    int size;
    cout << "Введіть розмір масиву a[]:"; cin >> size;
    int* a = new int[size];

    cout << "a[] = ";
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % size;
        cout << a[i] << " ";
    }
    cout <<endl<< "Спосіб 1(ітераційний):" << endl;
    cout << "Замінений масив після дії" << endl;
    SWAPI(a, size);
    COUTI(a, size);
    cout <<endl<< "Спосіб 2(рекурсивний):" << endl;
    cout << "Замінений масив після дії" << endl;
    SWAPR(a, size,0);
    COUTR(a, size,0);
    delete[]a;
    return 0;
}
void SWAPI(int a[], const int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(a[i], a[i + 1]);
        }
    }
}
void COUTI(int f[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << f[i] << " ";
    }
}
void SWAPR(int z[], const int size,int i)
{
    if (i < size) {
        if (i + 1 < size)
        {
            swap(z[i], z[i + 1]);
            SWAPR(z, size, i + 2);
        }
    }
}
void COUTR(int z[], const int size, int i)
{
    if (i < size) {
        cout << z[i] << " ";
        COUTR(z, size, i + 1);  
    }
}