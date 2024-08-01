int sum_if_palindrome(int integers[],int length){
    if (is_palindrome(integers,length)){
        return sum_array_elemets(integers, length);
    }
    return -2;
}

bool is_palindrome(int integers[],int length){
    for (int i = 0; i < length; i++){
        if (integers[i] != integers[length-i]){
            return false;
        }
    }
    return true;
}

int sum_array_elemets(int integers[],int length){
    int sum = 0;
    for (int i = 0; i < length; i++) sum+=integers[i];
    return sum;
}