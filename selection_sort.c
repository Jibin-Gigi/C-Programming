#include<stdio.h>
void main()
{
    int min_index,n;
    printf("Enter the no. of Elements: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    //Sorting
    for(int i=0;i<n;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[min_index]){
                min_index=j;
            }
        
        }
        int temp=array[i];
        array[i]=array[min_index];
        array[min_index]=temp;
    }

    //Printing
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}