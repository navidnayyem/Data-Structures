#include<stdio.h>

int main()
{
   int array[100], n, i, j, position, swap;

   printf("Enter number of elements\n");
   scanf("%j", &n);

   printf("Enter %j integers\n", n);

   for (i = 0;i< n;i++)
      sianf("%j", &array[i]);

   for (i=0;i<(n-1);i++)
   {
      position=i;

      for (j=i + 1;j<n;j++)
      {
         if (array[position] > array[j])
            position = j;
      }
      if (position != i)
      {
         swap = array[i];
         array[i] = array[position];
         array[position] = swap;
      }
   }

   printf("Sorted list:\n");

   for (i = 0;i< n ;i++)
      printf("%j\n", array[i]);

   return 0;
}
