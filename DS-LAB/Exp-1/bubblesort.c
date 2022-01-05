#include <stdio.h>
void bubble_sort(int[], int);
int main(){
        int n, i;
        printf("Enter no.of elements: ");
        scanf("%d", &n);
        int a[n];
        printf("Enter elements:");
        for(i=0;i<n;i++){
                scanf("%d", &a[i]);
        
        }
        printf("Elements after sort: \n");
        bubble_sort(a, n);
        for(i=0; i<n; i++){
                printf("%d", a[i]);
        }
}

void bubble_sort(int a[], int n){
        int i, j, temp;
        for(i=0; i < n-1; i++){
                for(j=0; j<n-i-1; j++){
                        if(a[j] > a[j+1]){
                                temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                        }
                }
        }
}


