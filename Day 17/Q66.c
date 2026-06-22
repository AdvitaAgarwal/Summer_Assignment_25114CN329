#include <stdio.h>
#include <stdlib.h>

int exists(int *arr, int n, int x){
    for(int i=0;i<n;i++) if(arr[i]==x) return 1;
    return 0;
}

int main(){
    int n,m;
    if(scanf("%d %d", &n, &m)!=2) return 0;
    int *a = malloc(n * sizeof(int));
    int *b = malloc(m * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int j=0;j<m;j++) scanf("%d", &b[j]);

    int *u = malloc((n+m) * sizeof(int));
    int k=0;
    for(int i=0;i<n;i++){
        if(!exists(u,k,a[i])) u[k++]=a[i];
    }
    for(int j=0;j<m;j++){
        if(!exists(u,k,b[j])) u[k++]=b[j];
    }

    for(int i=0;i<k;i++){
        if(i) printf(" ");
        printf("%d", u[i]);
    }
    printf("\n");

    free(a); free(b); free(u);
    return 0;
}
