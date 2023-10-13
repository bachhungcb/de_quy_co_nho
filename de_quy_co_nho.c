#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int M[MAX][MAX];

int to_hop(int k, int n){
    if(k == 0 || k == n) M[k][n] = 1;
    else if(M[k][n] == 0){
        M[k][n] = to_hop(k, n-1) + to_hop(k-1, n-1);
    }
    return M[k][n];
}

int main(){
    memset(M, 0, sizeof(M));
    printf("%d", to_hop(3,5));
    return 0;
}