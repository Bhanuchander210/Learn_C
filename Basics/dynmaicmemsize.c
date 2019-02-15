int main()
{
    int *RandomArray;
    int n;
    srand(time(NULL));

    size_t size = rand() % 11;
    if(size == 0)
    {
        fprintf(stderr, "Size 0, no point in allocating memory\n");
        return 1;
    }

    RandomArray = malloc(size * sizeof *RandomArray)
    if(RandomArray == NULL)
    {
        fprintf(stderr, "no memory left\n");
        return 1;
    }
    printf("%zu  %zu\n", sizeof(RandomArray), size);

    // don't forget to free the memory
    free(RandomArray);

    return 0;
}