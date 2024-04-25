#include<stdio.h>

void Bubble_sort(int arr[], int NumOfElement)//传入数组与元素数，输出将数组排成升序
{
    for(int i = 0; i < NumOfElement - 1; i++)
    {
        int sort = 1;
        for(int j = 0; j < NumOfElement - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int store = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = store;
                sort = 0;
            }
        }
        if(sort == 1)
            break;
    }
}
