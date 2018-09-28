#include "main.ih"

void separate(
    string elements[],
    size_t left, size_t leftSlider,
    size_t right, size_t rightSlider
)
{
    //Sort the left side if needed
    if (left < rightSlider)
        quicksort(elements, left, rightSlider);

    //Sort the right side if needed
    if (leftSlider < right)
        quicksort(elements, leftSlider, right);
}