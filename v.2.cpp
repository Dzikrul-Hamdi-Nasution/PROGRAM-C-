
   #include <iomanip>
   #include <stdio.h>
   
   
   using namespace std;  
   int main() {  
       int a[4][4], b, c;  
       float det, inv[4][4], kov[4][4], adj[4][4];  
       //system("color 1e");  
       printf( "Ivers Dari Matriks 3X3\n");  
       for (b = 1; b <= 3; b++) {  
         for (c = 1; c <= 3; c++) {  
             printf ( "Masukkan Angka dari Baris ke %d Kolom ke %d =", b ,c);  
             scanf("%d",&a[b][c]) ;  
         }  
     }  
     printf( "Matriks A = \n");  
     for (b = 1; b <= 3; b++) {  
         for (c = 1; c <= 3; c++) {  
             printf("%d \t", a[b][c] );  
         }  
         printf("\n ");
     } /*Mencari Determinan Dengan Sarrus*/  
     det = ((a[1][1] * a[2][2] * a[3][3]) + (a[1][2] * a[2][3] * a[3][1]) + (a[1][3] * a[2][1] * a[3][2])) - ((a[3][1] * a[2][2] * a[1][3]) + (a[3][2] * a[2][3] * a[1][1]) + (a[3][3] * a[2][1] * a[1][2]));  
     printf( "\n\nDeterminan Matriks Tersebut = %.1f  \n\n", det); /*Mencari kofaktor*/  
     kov[1][1] = (a[2][2] * a[3][3]) - (a[3][2] * a[2][3]);  
     kov[1][2] = ((a[2][1] * a[3][3]) - (a[3][1] * a[2][3])) * -1;  
     kov[1][3] = (a[2][1] * a[3][2]) - (a[3][1] * a[2][2]);  
     kov[2][1] = ((a[1][2] * a[3][3]) - (a[3][2] * a[1][3])) * -1;  
     kov[2][2] = (a[1][1] * a[3][3]) - (a[3][1] * a[1][3]);  
     kov[2][3] = ((a[1][1] * a[3][2]) - (a[3][1] * a[1][2])) * -1;  
     kov[3][1] = (a[1][2] * a[2][3]) - (a[2][2] * a[1][3]);  
     kov[3][2] = ((a[1][1] * a[2][3]) - (a[2][1] * a[1][3])) * -1;  
    kov[3][3] = (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]);  
     printf( "Kofaktor A = \n");  
    for (b = 1; b <= 3; b++) {  
         for (c = 1; c <= 3; c++) {  
             printf( "%.1f \t",kov[b][c]);  
         }  
         printf("\n");
     } /*Mencari Adjoin*/  
     printf( "\n\n\nAdjoin Dari Kofaktor A = \n");  
     for (b = 1; b <= 3; b++) {  
        for (c = 1; c <= 3; c++) {  
            adj[b][c] = kov[c][b];  
           printf( "%.1f \t",adj[b][c]);  
         }  
         printf("\n"); 
     } /*Mencari Invers*/  
    printf( "\n\n\nInvers Dari Matriks A = \n");  
     for (b = 1; b <= 3; b++) {  
        for (c = 1; c <= 3; c++) {  
             inv[b][c] = (1 / det) * adj[b][c];  
            printf( "%.2f \t",inv[b][c] );  
        }  
         printf("\n ");   
   }  
   printf("\n\n\n\n\n\n\n\n");
     system("pause");  
 }  

