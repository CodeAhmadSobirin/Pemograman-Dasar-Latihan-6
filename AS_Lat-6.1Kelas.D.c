/*
Latihan Praktikum 6.1 D
Nama : Ahmad Sobirin
Kelas : S1 D
STMIK Tasikmalaya
*/
#include <stdio.h>
#include <stdlib.h>

short int nilai_as, nilai2_as, nilai3_as;
short int mins_as, max_as, nAkhir_as;
char grade_as;
char ket_as[30];

int main () {
	
	printf ("===================================================\n");
	printf ("=+          PRAKTIKUM 6.1 STATMENT - IF          +=\n");
	printf ("===================================================\n");
	printf (" Input Nilai 1 = "); scanf ("%d", &nilai_as);
	printf (" Input Nilai 2 = "); scanf ("%d", &nilai2_as);
	printf (" Input Nilai 3 = "); scanf ("%d", &nilai3_as);
	
	printf ("\n");
	system ("pause > null | echo  Tekan Enter. ... ...");
	
    
	if (nilai_as < nilai2_as && nilai_as < nilai3_as) {
		mins_as = nilai_as;
	}
	else if (nilai2_as < nilai_as && nilai2_as < nilai3_as) {
		mins_as = nilai2_as;
	}
	else if (nilai3_as < nilai_as && nilai3_as < nilai2_as) {
		mins_as = nilai3_as;
	}
	else {
		mins_as = 0;
	}
	printf (" Nilai Terkecil = %d ", mins_as);
	
		if (nilai_as > nilai2_as && nilai_as > nilai3_as) {
		max_as = nilai_as;
	}
	else if (nilai2_as > nilai_as && nilai2_as > nilai3_as) {
		max_as = nilai2_as;
	}
	else if (nilai3_as > nilai_as && nilai3_as > nilai2_as) {
		max_as = nilai3_as;
	}
	else {
		max_as = 0;
	}
	printf("\n Nilai Terbesar = %d ", max_as);
	
	 printf ("\n");
	nAkhir_as = (0.25 * nilai_as) + (0.35 * nilai2_as) + (0.40 * nilai3_as);
	printf ("\n Nilai Akhir    = %d ", nAkhir_as);
	
   
    if (nAkhir_as >=90){
    	grade_as = 'A';
    	
	} 
	else if (nAkhir_as >=80){
		grade_as = 'B';
		
	}
	else if (nAkhir_as >=70){
		grade_as = 'C';
	
	}
	else if (nAkhir_as >=60){
		grade_as = 'D';
		
	}
	else if (nAkhir_as <60){
		grade_as = 'E';
		
	}
	printf (" \n          Grade = %c", grade_as);

	if (nAkhir_as >=90){
        printf (" \n     Keterangan = \"LULUS MEMUASKAN \"");
    	
	} 
	else if (nAkhir_as >=80){
		printf (" \n     Keterangan = \"LULUS BAIK \"");
		
	}
	else if (nAkhir_as >=70){
		printf (" \n     Keterangan = \"LULUS \"");
	
	}
	else if (nAkhir_as >=60){
		printf (" \n     Keterangan = \"REMIDIAL \"");
		
	}
	else if (nAkhir_as <60){
		printf (" \n     Keterangan = \"TIGDAK LULUS \"");
		
    }
			
		
		
		
		
	
	system("pause > null");
	return 0;
}