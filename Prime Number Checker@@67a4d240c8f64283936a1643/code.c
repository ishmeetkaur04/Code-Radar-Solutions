int isPrime(int num){
    int fact=0;
    for(int i=2;i<num;i++){
        if (num%i==0){
            fact++;
        }
    }
    if(fact==0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}