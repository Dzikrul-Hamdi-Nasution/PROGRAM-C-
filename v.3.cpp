#include<iostream>
using namespace std;

int main()

{

    int brs1=4, kol1=4;
    float A[brs1][kol1];
    float CA00, CA01, CA02, CA03;
    float DetA;
    int i,j;
    char off;
  
    //masukkan A (Matriks kofisien)
    cout << "Matriks A (matriks koefisien) :" << '\n';
    for (i=0; i<brs1; i++){
        for (j=0; j<kol1; j++){
            cout<<"Masukkan baris" << i+1 << "kolom" << j+1 << ":";
            cin>>A[i][j];
        }
}    
    //hitung kofaktor elemen matriks
    {for (i=0; i<brs1; i++)
        {for (j=0; j<kol1; j++)
               CA00 = (A[1][1]*A[2][2]*A[3][3])+(A[1][2]*A[2][3]*A[3][1])+(A[1][3]*A[2][1]*A[3][2])-
                       (A[3][1]*A[2][2]*A[1][3])-(A[3][2]*A[2][3]*A[1][1])-(A[3][3]*A[2][1]*A[1][2]);
               CA01 = (A[1][0]*A[2][2]*A[3][3])+(A[1][2]*A[2][3]*A[3][0])+(A[1][3]*A[2][0]*A[3][2]) -
                       (A[3][0]*A[2][2]*A[1][3])-(A[3][2]*A[2][3]*A[1][0])-(A[3][3]*A[2][0]*A[1][2]);
               CA02 = (A[1][0]*A[2][1]*A[3][3])+(A[1][1]*A[2][3]*A[3][0])+(A[1][3]*A[2][0]*A[3][1]) -
                       (A[2][1]*A[1][3])-(A[3][1]*A[2][3]*A[1][0])-(A[3][3]*A[2][0]*A[1][1]);
               CA03 = (A[1][0]*A[2][1]*A[3][2])+(A[1][1]*A[2][2]*A[3][0])+(A[1][2]*A[2][0]*A[3][1]) -
                       (A[3][0]*A[2][1]*A[1][2])-(A[3][1]*A[2][2]*A[1][0])-(A[3][2]*A[2][0]*A[1][1]);


    //determinan matriks A        

cout<< '\n';
   cout<< '\n';
  
      
    DetA = (CA00*A[0][0]*1)+(CA01*A[0][1]*-1)+(CA02*A[0][2]*1)+(CA03*A[0][3]*-1);
  



    //Hasil
    cout<< '\n';
    cout<< '\n';
    cout<<"Determinan Matriks A = ";
    cout<<DetA<< "" << '\n';
  
    cout<< '\n';
   cout<< '\n';
   cout<<"== PROGRAM SELESAI =="<<endl<<endl;
   cin>>off;
 }}}  
