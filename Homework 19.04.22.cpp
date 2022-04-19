// Homework 19.04.22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int average();
    setlocale(0, "UKR");
    double first;
    double second;
    double third;
    cout << "По очереди введите три вещественных числа:\n";
    cin >> first;
    cin >> second;
    cin >> third;
    double aver = (first + second + third) / 3;
    cout << "\nСреднее арифметическое введённых чисел: " << aver;

    int converter();
    double hryvna;
    cout << "\n\nУкажите количество гривен: ";
    cin >> hryvna;
    double dollar = hryvna / 29.54;
    double euro = hryvna / 31.91;
    double bitcoin = hryvna / 1220130.32;
    cout << "\nДоллары: " << dollar << "\nЕвро: " << euro << "\nBitcoin: " << bitcoin;

    int kiloconverter();
    double kilometres;
    cout << "\n\nУкажите количество километров: ";
    cin >> kilometres;
    double miles = kilometres * 1.60934;
    double seamiles = kilometres * 1.852;
    cout << "\nМили: " << miles << "\nМорские мили: " << seamiles;
}

