//
//  main.cpp
//  Sorter
//
//  Created by Alexey Samorukov on 16/02/15.
//  Copyright (c) 2015 Alexey Samorukov. All rights reserved.
//

#include <iostream>
#include "quicksort.h"

/**
 @param n - этот операнд хранит в себе кол-во элеметнов массива, введённое пользователем.
 @param a[] - массив, хранящий сортируемые числа.

*/

int main(int argc, const char * argv[]) {
    
    printf("Введите размер массива: ");
    int n;
    scanf("%d", &n);
    int *a = new int[n];
    
    printf("Введите массив из %d чисел:", n);
    
    for (int i(0); i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    qSort(a, 0, n-1);

    printf("Отсортированный массив: ");
    
    for (int i(0); i < n; i++)
    {
        printf("%d ",a[i]);
    }

    
}


/**
 
 @mainpage 
 "Sorter" was developed by Alex Samorukov as a part of studying Technologies and Methods of Programming at BMSTU.\n
 This website contains documentation and source code for the project.
 */


