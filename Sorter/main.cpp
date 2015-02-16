//
//  main.cpp
//  Sorter
//
//  Created by Alexey Samorukov on 16/02/15.
//  Copyright (c) 2015 Alexey Samorukov. All rights reserved.
//

#include <iostream>


int main(int argc, const char * argv[]) {
    
    int n = 10;
    int *a = new int[n];
    
    printf("Введите массив из 10ти чисел:");
    
    for (int i(0); i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])std::swap(a[j], a[j + 1]);

    printf("Отсортированный массив:");
    
    for (int i(0); i < n; i++)
    {
        printf("%d ",a[i]);
    }

    
}
