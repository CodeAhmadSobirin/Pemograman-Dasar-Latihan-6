/*
Latihan Praktikum 6.1 D
Nama : Ahmad Sobirin
Kelas : S1 D
STMIK Tasikmalaya
*/
#include <stdio.h>
#include <stdlib.h>

int tarifPertama_as, tarifKedua_as, tarifKetiga_as, tarifKeempat_as, pemakaian_as, totalTagihan_as;
int  admin_as = 17500;

int main() {
	
	
	printf("   #=========================================================#\n");
	printf("   #           PO6.2 D : TUGAS MANDIRI - PDAM                #\n");
	printf("   #=========================================================#\n");
	printf("\n");
	
	printf("   Input Pemakaian (M3)  : ");
	scanf("%d", &pemakaian_as);
	
	printf("\n");
	if (pemakaian_as <= 10) {
	   tarifPertama_as = 6000 * pemakaian_as;
	   totalTagihan_as = tarifPertama_as + admin_as;
	}
	else if (pemakaian_as <= 20) {
		tarifPertama_as = 6000 * 10;
		tarifKedua_as = 5000 * (pemakaian_as - 10);
		totalTagihan_as = tarifPertama_as + tarifKedua_as + admin_as;
	}
	else if (pemakaian_as <=30) {
		tarifPertama_as = 6000 * 10;
		tarifKedua_as = 5000 * 10;
		tarifKetiga_as = 3000 * (pemakaian_as - 20);
		totalTagihan_as = tarifPertama_as + tarifKedua_as + tarifKetiga_as + admin_as;
	}
	else if (pemakaian_as >30) {
		tarifPertama_as = 6000 * 10;
		tarifKedua_as = 5000 * 10;
		tarifKetiga_as = 3000 * 10;
		tarifKeempat_as = 2000 * (pemakaian_as - 30);
		totalTagihan_as = tarifPertama_as + tarifKedua_as + tarifKetiga_as + tarifKeempat_as + admin_as;
	}
	
	
	
	printf("   *----------------------------------------------------------*\n");
	printf("   *--- Biaya 10 M3     (I)   : Rp.               %d.00 ---*\n", tarifPertama_as);
	printf("   *--- Biaya 10 M3    (II)   : Rp.               %d.00 ---*\n", tarifKedua_as);
	printf("   *--- Biaya 10 M3   (III)   : Rp.               %d.00 ---*\n", tarifKetiga_as);
	printf("   *--- Biaya Diatas 30 M3    : Rp.               %d.00 ---*\n", tarifKeempat_as);
	printf("   *----------------------------------------------------------*\n");
	printf("   *   Adm Fee/Bln           : Rp.                %d.00    *\n", admin_as);
	printf("   *   Total Tagihan         : Rp.               %d.00    *\n", totalTagihan_as);
	printf("   ----------------------------------------------------------\n");
	
	printf("\n");
	printf("\n");
	printf("   #+=======================================================+#\n");
	printf("       Created By\n");
	printf("       Nama   : Ahmad Sobirin\n");
	printf("       NPM    : 432007006220166\n");
	printf("       Kelas  : S1 - D\n");
	printf("                    STMIK TASIKMALAYA - 2022\n");
	printf("   #+========================================================+#");
	return 0;
}