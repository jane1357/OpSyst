#include <iostream>
#include <Windows.h>
#include <sysinfoapi.h>
#include <stdio.h>
using namespace std;
int main()
{
    MEMORYSTATUSEX ram;

    GlobalMemoryStatusEx(&ram); // Заполняем структуру SYSTEM_INFO информацией о системе.

    cout<<(" RAM: %u\n", ram.ullTotalPhys/1024/1024/1024)<<" gb";

}
