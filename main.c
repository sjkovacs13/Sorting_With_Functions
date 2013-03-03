//
//  main.c
//  Sorting with Functions
//
//  Created by Samuel Kovacs on 1/7/13.
//  Copyright (c) 2013 Samuel Kovacs. All rights reserved.
//

#include <stdio.h>

// This is the main function.
int main(void)
{
    // Here the two arrays are initialized, one that is entered and one that is ordered.
    int userArray[10];
    int sortArray[10];
    // Here the three functions are initialized.
    void getIt (int x[10]);
    void sortIt (int y[10]);
    void printIt (int z[10], int q[10]);
    
    // getIt function is called here and uses userArray.
    getIt(userArray);
    
    // This for loop copies the original array to the array that will be sorted.
    for (int i=0; i<10; i++)
    {
        sortArray[i]=userArray[i];
    }
    
    // sortIt function is called and the sortArray is inputed.
    sortIt(sortArray);
    // printIt function is called and both the original and the sorted array are inputed.
    printIt(userArray, sortArray);
    
    return 0;
}

// This is the getIt function. It asks the user to input 10 integers in an array.
void getIt (int x[10])
{

    for (int i=0; i<10; i++)
    {
        printf("Please enter number: ");
        scanf("%i", &x[i]);
    }
}

// This is the sortIt function. It takes an array and sorts it in descending order.
void sortIt (int y[10])
{
    int temp=0;
    for (int i=0; i<10; i++)
    {
        for (int i=0; i<9; i++)
        {
            if (y[i]<y[i+1])
            {
                temp=y[i+1];
                y[i+1]=y[i];
                y[i]=temp;
            }
        }
    }
}

// This is the printIt function. It prints two arrays and their terms in an easy to read manner.
void printIt(int z[10], int q[10])
{
    for (int i=0; i<10; i++)
    {
        printf("%i)", i+1);
        printf("%10i %10i\n", z[i], q[i]);
    }
}