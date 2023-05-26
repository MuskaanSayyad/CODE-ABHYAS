#include<stdio.h>
void main()
   {
       int n;
       printf("Enter the number of element in the array:");
       scanf("%d",&n);
       int a[n];
       printf("Enter the elements in the array;
       for(int i=0;i<n;i++)
          scanf("%d",&a[i]);
       int l=a[0];
       for(i=0;i<n;i++)
         {
           if(a[i]>l)
             l=a[i];
         }
     printf("The largest element in the array is %d",l);
  }
                
             
       
