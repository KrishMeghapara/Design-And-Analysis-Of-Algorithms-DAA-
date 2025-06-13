#include <stdio.h>




int FactorialUsingLoop(int fac1){
    int Ans = 1;
    for(int i = 1 ; i <= fac1 ;i++){
         Ans = Ans * i;
    }
    return Ans;
}

int Ans =1 ;
int FactorialRec(int fac2){
    if( fac2 != 0 ){

        Ans = fac2*Ans;
        fac2=fac2-1;
        FactorialRec(fac2);
    }
    if (Ans == 1){
        return 0;

    }
    else{
        return Ans;
    }
}


int SumOfNumberUsingLoop(int Sum1){
    int Sum = 0;
    for(int i = 1 ; i <= Sum1 ;i++){
        int temp = Sum1%10;
        Sum1 = Sum1/10;
        Sum = Sum + temp;

        if(Sum1 == 0){
            break;
        }

   }
   return Sum;
}


int Sum = 0;
int SumOfNumberUsingrec(int Sum1){
   
    int temp = Sum1%10;
    Sum = Sum + temp;
        Sum1 = Sum1/10;
 
    if(Sum1 != 0){
        SumOfNumberUsingrec(Sum1);
    }

   return Sum;
}

int CountLenOfNumberUsingLoop(int num1){
    int Len = 0;
    for(int i = 1 ; i <= num1 ;i++){
        num1 = num1/10;
        Len = Len + 1;

        if(num1 == 0){
            break;
        }

   }
   return Len;
}

int Len = 0;
int CountLenOfNumberUsingRec(int num1){

        num1 = num1/10;
        Len = Len + 1;
        if(num1 != 0){
            CountLenOfNumberUsingRec(num1);
        }
   return Len;
}


int PowerOfNUsingLoop(int Pow1,int N){
    int Ans1 = 1;
    for(int i = 1 ; i <= N ;i++){
         Ans1 = Ans1 * Pow1;
    }
    return Ans1;
}

int Ans1 = 1;
int temp = 0;
int PowerOfNUsingRec(int Pow1,int N1){

    Ans1 = Ans1 * Pow1;
    temp++;
    if(temp!=N1){
        PowerOfNUsingRec(Pow1,N1);
    }
    return Ans1;
}

int main(){

    printf("Result From Loop: %d\n", FactorialUsingLoop(5));
    printf("Result From rec: %d\n", FactorialRec(5));
    printf("Result : %d\n", SumOfNumberUsingLoop(321));
    printf("Result : %d\n", SumOfNumberUsingrec(321));
    printf("Result : %d\n", CountLenOfNumberUsingLoop(321));
    printf("Result : %d\n", CountLenOfNumberUsingRec(321));
    printf("Result : %d\n", PowerOfNUsingLoop(2,5));
    printf("Result : %d\n", PowerOfNUsingRec(2,5));
    
    return 0;
}