#include "sort.h"

/**
* selection_sort - sort ints in asce order with selection sort
* @array: the list of ints
* @size: size of int
*/
void selection_sort(int *array, size_t size)
{
size_t cIndex = 0;
size_t mIndex = 0;
size_t listlen = size;

if (listlen > 1)
{
while (array && cIndex < listlen)
{
int tmp1 = array[cIndex];
int tmp2 = 0;

mIndex = cIndex + 1;

while (mIndex < listlen)
{
if (array[mIndex] < tmp1)
{
tmp2 = array[mIndex];
array[mIndex] = tmp1;
tmp1 = tmp2;
}
mIndex++;
}

array[cIndex] = tmp1;
cIndex++;
}
}
}
