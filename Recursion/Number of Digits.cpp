// Number of Digits

// Given the number 'n', find out and return the number of digits present in a number .

int count(int n){
    //write your code here
    if(n==0){
        return 0;
    }
    return 1+count(n/10);
}
