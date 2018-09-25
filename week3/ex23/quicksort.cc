#include "main.ih"

void quicksort(string elements[], size_t left, size_t right)
{
    size_t i = left;
    size_t j = right;
    const string pivot = elements[(left + right) / 2];

    while (i <= j)
    {
        while (elements[i].compare(pivot) < 0)
            i++;

        while (elements[j].compare(pivot) > 0)
            j--;

        if (i <= j)
        {
            elements[i].swap(elements[j]);
            i++;
            j--;
        }
    }

    if (left < j)
        quicksort(elements, left, j);

    if (i < right)
        quicksort(elements, i, right);
}