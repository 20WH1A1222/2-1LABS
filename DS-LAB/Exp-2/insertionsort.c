#include <stdio.h>
void insertion_sort(int [], int);
int main(){
        int n, i;
        printf("Enter no.of elements:");
        scanf("%d", &n);
        int a[n];
        printf("Enter elements:");
        for(i=0; i<n; i++){
                scanf("%d", &a[i]);
        }
        insertion_sort(a, n);
        printf("Elements after sort:");
        for(i=0; i<n; i++){
                printf("%d", a[i]);
        }
}

void insertion_sort(int a[], int n){
        int i, j, index;
        for(i=0; i<n; i++){
                index=a[i];
                j=i;
                while((j>0)&& (a[j-1]>index)){
                        a[j]=a[j-1];
                        j=j-1;
                        }
                        a[j]=index;
                        }
        }


                                                                                                                                   


