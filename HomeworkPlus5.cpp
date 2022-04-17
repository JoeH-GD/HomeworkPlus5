// HomeworkPlus5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
unsigned int const size = 6;
unsigned int const size2 = 8;

void PrintArray(double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void PrintArrayInt(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
}

void ChangeNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1) arr[i] = 0;
        else arr[i] = 1;
    }
}

void ArrayConstruct(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        
        arr[i] = i*3+1;
    }
}

//void MoveNumbers(int arr[], int size, int n)
//{
//    for (int i = 0; i < size; i++) 
//
//    {
//        
//        if (n > 0 && i + n < size)
//        {
//            int buff = arr[i + n];
//            arr[i + n] = arr[i];
//            arr[i + n + 1] = buff;
//        }
//
//        else if (i+n >= size-1)
//        {
//            break;
//        }
//
//        else if (n < 0)
//        {
//            arr[(size - 1) + n] = arr[size - 1];
//        }
//
//    }
//    
//}

//Если я правильно понял и нужно именно вернуть булево значение
bool BalanceCheck(int arr[],int size, int sum)
{
    int leftsum = 0;
    bool isBalanced = false;

    for (int i = 0; i < size; i++)
    {
        leftsum += arr[i];
        if (leftsum == (sum - leftsum))
        {
            isBalanced = true;
            break;

        }
       
    }

    return isBalanced;
}

int main()
{

    double arr[size] = { 0.5, 7, 2.5, 11, 13.3, 20.7 };
    PrintArray(arr, size);

    int arr1[size] = { 1,1,0,1,0,0 };
    PrintArrayInt(arr1, size);
    ChangeNumbers(arr1, size);
    PrintArrayInt(arr1, size);

    //чет мне кажется я тут схитрил слегка ))
    int arr2[size2];
    ArrayConstruct(arr2, size2);
    PrintArrayInt(arr2, size2);

    int arr3[size] = { 10,2,2,2,2,2 };
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr3[i];
   
    }
    std::cout << BalanceCheck(arr3, size, sum);
}

