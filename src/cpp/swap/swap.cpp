void swap(int* array, size_t i, size_t k)
{
    int tmp = *(array+i);
    array[i] = array[k];
    array[k] = tmp;
}
