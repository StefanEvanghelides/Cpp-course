#include "main.ih"

void quicksort(string elements[], size_t left, size_t right)
{
    size_t i = left;
    size_t j = right;
    const string pivot = elements[left]; //Set pivot point

    while (i <= j)
    {
        //Search for an element from the left that should be on the right
        while (elements[i].compare(pivot) < 0) 
            i++;

        //Search for an element from the right that should be on the left
        while (elements[j].compare(pivot) > 0)
            j--;

        //Swap the elements if they are on the wrong side of the pivot
        if (i <= j)
        {
            elements[i].swap(elements[j]);
            i++;
            j--;
        }
    }

    //Sort the left side if needed
    if (left < j)
        quicksort(elements, left, j);

    //Sort the right side if needed
    if (i < right)
        quicksort(elements, i, right);
}