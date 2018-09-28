#include "main.ih"

void quicksort(string elements[], size_t left, size_t right)
{
    size_t leftSlider = left;
    size_t rightSlider = right;
    const string pivot = elements[left]; //Set pivot point

    while (leftSlider <= rightSlider)
    {
        //Search for an element from the left that should be on the right
        while (compareNoCase(elements[leftSlider], pivot) < 0) 
            ++leftSlider;

        //Search for an element from the right that should be on the left
        while (compareNoCase(elements[rightSlider], pivot) > 0)
            rightSlider--;

        //Swap the elements if they are on the wrong side of the pivot
        if (leftSlider <= rightSlider)
        {
            elements[leftSlider].swap(elements[rightSlider]);
            ++leftSlider;
            --rightSlider;
        }
    }

    separate(elements, left, leftSlider, right, rightSlider);
}