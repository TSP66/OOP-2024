int num_count(int array[], int n, int number){
    int count = 0;
    for (int i = 0; i < n; i++)
        count += (array[i] == number);
    return count;
}