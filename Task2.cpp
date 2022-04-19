// Homework 19.04.22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "UKR");
    int first;
    int second;
    int third;
    cout << "По очереди введите три вещественных числа:\n";
    cin >> first;
    cin >> second;
    cin >> third;
    cout << "Среднее арифметическое введённых чисел: " << (first + second + third) / 3;
}
