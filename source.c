#include<stdlib.h>
#include<stdio.h> 


int searchInsert(int* nums, int numsSize, int target)
{
    /* global section variable*/

    int low = 0;
    int high = numsSize - 1;
    int mid = 0;

    while (low <= high) /* a condition to exit the loop and don't enter infinite loop */
    {
        mid = low + ((high - low) / 2);

        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;

        }
    }
    return low;

}

