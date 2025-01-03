/*
Latihan Praktikum 8.1 D
Nama : Ahmad Sobirin
Kelas : S1 - D
NPM : 432007006220166
STMIK Tasikmalaya
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

typedef unsigned short int num_as;
num_as a, s, mindata_as, maxdata_as, nilai_as=0;
 
 int main () {
 	printf ("===========================================================\n");
 	printf ("               PRAKTIKUM 8.1 LATIHAN - FOR                 \n");
 	printf ("===========================================================\n");
 	printf (" Input Minimal Data : ");
 	scanf  ("%i", &mindata_as);
 	printf (" Input Maks Data    : ");
 	scanf  ("%i", &maxdata_as);
	printf (" ---------------------------\n");
 	printf (" | Angka  =  Hasil Kuadrat |\n");
 	printf (" ---------------------------\n");
 	
 	for (a=mindata_as; a>=mindata_as, a<=maxdata_as;  a++ ) {
 		printf (" |  %-5d =", a);
 		s=pow(a,2);
 		printf ("%7d \t   |", s);
 		printf ("\n");	
	 }
	printf ("\n");
	printf ("#.   Penjumlahan Kuadrat \n ");
	
	
	printf("    ");
	for (a=mindata_as; a<=maxdata_as; a++) {
		s=pow(a,2);
		printf ("%i", s);
	if (a==maxdata_as) 
	    printf ("=");
	else
	    printf ("+");
		
		nilai_as += pow(a,2);
	} 	
 	printf ("%d \n", nilai_as);
 	
 	
 	system ("pause > null");
 	return 0;
 }