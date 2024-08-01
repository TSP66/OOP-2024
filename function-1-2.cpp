int is_identity(int array[10][10]){
    for (int x = 0; x < 10; x++){
        for (int y = 0; y < 10; y++){
            if (array[x][y] != (int) (x == y)){
                return 0;
            }
        }
    }
    return 1;
}