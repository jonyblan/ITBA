#include <stdio.h>


int arrayUnionOrganized(int arr1[], int arr2[], int arr3[], int d1, int d2){
    int n1=0, n2=0, count=0;
    while(n1<d1 && n2<d2){
        if(arr1[n1]<arr2[n2]){
            n1++;
            continue;
        }
        else if(arr2[n2]<arr1[n1]){
            n2++;
            continue;
        }
        else{ 
            arr3[count] = arr1[n1];
            n1++;
            n2++;
            count++;
        }
    }
}

//           .      
// {1, 2, 4, 6, 7} 
// {2, 3, 5, 6, 8}
//           .   


int main(){
    int l1=5, l2=5;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int arr3[5];
    int i=arrayUnionOrganized(arr1, arr2, arr3, l1, l2);
    int j;
    for(j=0; j<i; j++){
        printf("%d - ",arr3[j]);
    }
    printf("\n");
    return 0;
}