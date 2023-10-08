#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

void changeSymbol(char* str)
{
    char* strPtr;
    for (strPtr = str; *strPtr; strPtr++)
    {
        if ((*strPtr == '.'))
        {
            *strPtr = '!';
        }
    }
}

int check(char* str, char symbol)
{
    int count = 0;
    char* strPtr;
    for (strPtr = str; *strPtr; strPtr++)
    {
        if ((*strPtr == symbol))
        {
            count += 1;
        }
    }
    return count;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//Task1 Написать функцию, которая заменяет все символы точки «.» в строке на символы восклицательного знака «!»

    char array[] = "Привет как дела. У меня все хорошо. А у тебя как дела.";
    changeSymbol(array);
    cout << array << endl;
    
    char arr[] = "Привет как дела. У меня все хорошо. А у тебя как дела.";

    //Task2 Пользователь вводит символ. Нужно написать функцию, которая
    //посчитает и выведет число, сколько раз этот символ появился в строке.
    cout << check(arr, '.') << endl;



}
