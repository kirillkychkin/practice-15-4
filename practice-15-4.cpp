// practice-15-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int N = 5;

// ��� ��������� IsOdd = 0 ������� ������ ����� �� 0 �� num
// ��� ��������� IsOdd = 1 ������� �������� ����� �� 0 �� num
void PrintEvenOdd(int IsOdd, int num)
{

    for (int i = IsOdd; i < num; i +=2)
    {
        std::cout << i << "\n";
    }
    std::cout << "=====" << "\n";
}

int main()
{
    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
        {
            std::cout << i << "\n";
        }
    }
    std::cout << "=====" << "\n";

    PrintEvenOdd(1, 30);
}

