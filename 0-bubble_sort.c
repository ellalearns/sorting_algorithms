#include "sort.h"

/**
 * bubble_sort - sorts an integer array with bubble sort in ascending order
 * @array: the integer array
 * @size: the size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
    int was_sort = 1;
    size_t len = size;

    if (len > 1)
    {
        while (array && was_sort > 0)
        {
            size_t ind = 1;
            int highest_int = 0;
            was_sort = 0;

            while (ind < len)
            {
                int temp = 0;

                if (array[ind - 1] > array[ind])
                {
                    temp = array[ind - 1];
                    array[ind - 1] = array[ind];
                    array[ind] = temp;

                    was_sort += 1;
                    print_array(array, size);
                }

                if (temp > highest_int)
                    highest_int = temp;

                ind += 1;
            }

            if (array[ind - 1] == highest_int)
                len -= 1;
        }
    }
}
