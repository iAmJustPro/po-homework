#include<stdio.h>
#include<conio.h>

int main() {
   int size = 3;
   int matrix[3][3]; // = {{4,9,2},{3,5,7},{8,1,6}};
   int row, column = 0;
   int sum, sum1, sum2;
   int flag = 0;
            printf("\n Vuvedi Chisla: ");
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++)
         scanf("%d", &matrix[row][column]);}
   printf("Kvadrata e: \n");
   for (row = 0; row < size; row++) {
      printf("\n");
      for (column = 0; column < size; column++) {
         printf("\t%d", matrix[row][column]);}
   }
   sum = 0;
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++) {
         if (row == column)
            sum = sum + matrix[row][column];}
      }
     for (row = 0; row < size; row++) {
      sum1 = 0;
      for (column = 0; column < size; column++) {
         sum1 = sum1 + matrix[row][column];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;}
    }
      for (row = 0; row < size; row++) {
      sum2 = 0;
      for (column = 0; column < size; column++) {
         sum2 = sum2 + matrix[column][row];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;}
   }
     if (flag == 1)
      printf("\nMagichen Kvadrat e");
   else
      printf("\nNe e Magichen kvadrat");

   return 0;
}
