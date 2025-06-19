#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 100000

void write_best_case(){

    FILE *fp = fopen("best_case_100000.txt","w");

    for(int i = 1 ; i <= N ; i++){
        fprintf(fp,"%d\n",i);
    }
    fclose(fp);

}

void write_Worst_case(){

    FILE *fp = fopen("Worst_case_100000.txt","w");

    for(int i = 1 ; i <= N ; i++){
        fprintf(fp,"%d\n",N-i+1);
    }
    fclose(fp);

}

void write_Avg_case(){

    int arr[N];
    for(int i = 1 ; i<=N;i++){
        arr[i-1] = i;
    }

    for(int i=N -1 ;i>0;i-- ){
        int j = rand() %(i+1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;
    }
    FILE *fp = fopen("Avg_case_100000.txt", "w");

    for(int i = 0 ; i < N ; i++){
        fprintf(fp,"%d\n",arr[i]);
    }
    fclose(fp);

}

int main(){
    write_best_case();
    write_Worst_case();
    write_Avg_case();
    return 0;
}