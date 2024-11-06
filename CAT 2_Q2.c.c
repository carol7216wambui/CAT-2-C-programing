/*
      Name:Carol Wambui Ngacha
      Reg no. CT102/G/23184/24
      BBIT   
*/
1.An array data structure is an ordered collection of finite element of same data type stored in contiguous memory location which allows efficient access to its elements using an index.

2.

#include <stdio.h>

int main () {

    int i;

    int j;

    int scores [2][2]={{65,92},{84,72},{35,70},{59,67}};

            for (i=0;i<2;i++){

            for (j=0;j<2;j++){

                          printf("scores[%d][%d]=%d\n",i,j,  scores [i][j]);

              }

              }

   return 0;

}
