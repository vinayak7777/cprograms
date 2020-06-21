#include <stdio.h> 
#define R 3 
#define C 6 
  
void spiralPrint(int m, int n, int a[R][C]) 
{ 
    int i, k = 0, l = 0; 
  
    /*  k - starting row index 
        m - ending row index 
        l - starting column index 
        n - ending column index 
        i - iterator 
    */
  printf("\n");
    while (k < m && l < n) { 
        /*Print the first row from the remaining rows */
        for (i = l; i < n; ++i) { 
            printf("%d ", a[k][i]); 
        } 
        k++; 
  printf("\n");
        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i) { 
            printf("%d ", a[i][n - 1]); 
        } 
        n--; 
  printf("\n");
        /* Print the last row from the remaining rows */
        if (k < m) { 
            for (i = n - 1; i >= l; --i) { 
                printf("%d ", a[m - 1][i]); 
            } 
            m--; 
        } 
        printf("\n");
        /* Print the first column from the remaining columns */
			if (l < n) { 
            for (i = m - 1; i >= k; --i) { 
                printf("%d ", a[i][l]); 
            } 
            l++; 
        } 
    } 
} 
  
int main() 
{ 
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
  
    spiralPrint(R, C, a); 
    return 0; 
} 
//y,QUADRATIC,pibuf,
//a data structure is aoms(organizastion,management,storage format to enable effaccess and modification
//an array is a fata structuer containing elements of simipar type
