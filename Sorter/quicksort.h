//
//  quicksort.h
//  Sorter
//
//  Created by Alexey Samorukov on 15/03/15.
//  Copyright (c) 2015 Alexey Samorukov. All rights reserved.
//

#include <iostream>
using namespace std;

/** Функция, содержащая алгоритм быстрой сортировки.
 @param x - опорный элемент (медиана массива).
 @param left - индекс минимального элеметна.
 @param right - индекс максимального элемента.
 */
void qSort(int a[], int left, int right)
{
    int x = a[left + (right - left) / 2];
    int i = left;
    int j = right;
    
 
    while(i <= j)
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    
  
    if (i<right) qSort(a,i, right);
    if (left<j)  qSort(a, left, j);
}

/** @file quicksort.h
 @brief Заголовочный файл, содержащий сортирующую функцию.
 
 Содержит функцию, выполняющую сортировку массива по алгоритму quicksort.
 
 
 */



