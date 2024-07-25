int sum_two_arrays(int array[], int secondarray[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
        count += (array[i] + secondarray[i]);
    return count;
}