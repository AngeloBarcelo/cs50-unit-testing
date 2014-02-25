/**
 * test.c
 * Test utilities and tests around the Sort functionality in Helpers
 */
       
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

// maximum amount of hay
const int MAX = 65536;

string isTrue(bool tf);
string isFalse(bool tf);

int main(int argc, string argv[])
{
    //isSorted
    int sortedArray[3] = {1,2,3};
    printf("\n123 should already be sorted %s", isTrue(isSorted(sortedArray, 3)));

    int unsortedArray[3] = {1,8,3};
    printf("\n183 should not be sorted %s", isFalse(isSorted(unsortedArray, 3)));

    int bigArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("\n123456789 should be sorted%s", isTrue(isSorted(bigArray, 10)));
    
    int duplicateArray[4] = {1, 1, 1, 1};
    printf("\nduplicate numbers in an array should be considered sorted %s", isTrue(isSorted(duplicateArray, 4)));
    
    //sort
    int singleArray[1] = {1};
    sort(singleArray, 1);
    printf("\nSingle array is already sorted %s", isTrue(isSorted(singleArray,1)));
    
    int doubleArray[2] = {2, 1};
    sort(doubleArray, 2);
    printf("\nDouble array should be sorted %s", isTrue(isSorted(doubleArray, 1)));
    
    int tripleArray[3] = {3, 2, 1};
    sort(tripleArray, 3);
    printf("\nTriple array should be sorted %s", isTrue(isSorted(tripleArray, 3)));
    
    int hugeArray[10] = {3, 4, 1, 2, 6, 5, 9, 8, 7, 0};
    sort(hugeArray, 10);
    printf("\nHuge array should be sorted %s", isTrue(isSorted(hugeArray, 10)));
    
    int negativeArray[5] = {5, -2, 3, 3, 1000};
    sort(negativeArray, 5);
    printf("\n5, -2, 3, 3, 1000 should be -2, 3, 3, 5 1000 %s", isTrue(isSorted(negativeArray, 5)));
    
    printf("\n\n");
}


string isTrue(bool tf) 
{
    if (tf) return "Correct";
    else return "!!!!!!!!!!!!!WRONG!!!!!!!!!!!!!!!!!!";
}
string isFalse(bool tf)
{
    if (tf) return "!!!!!!!!!!WRONG!!!!!!!!!!!!!!!";
    else return "Correct";
}
