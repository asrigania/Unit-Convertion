/////////////*********** TUGAS METODE PENGUKURAN **********///////////////
/////////////****** PROGRAM APLIKASI KONVERSI SATUAN *****///////////////

//// Nama : Asri Gania
//// NIM  : 1403141
//// Prodi: Pendidikan Teknik Elektro


#include <stdio.h>
#include <stdlib.h>

#define f 30.48
#define i 2.54
#define y 91.4399998610112
#define ml 160900
#define ml2 0.000006215040397762585
#define f2 0.0328084
#define i2 0.393701
#define y2 0.010936133


int pilih1, pilih2, pilih3, suhu;
float panjang, luas, volume, nilaisuhu, feet, inci, yard, mil, pound, hp, daya, C, R, F, K, m, cm, kg;
char yn;

void awal(){
	printf("PROGRAM KONVERSI SATUAN\n");
	printf("METODE PENGUKURAN\n");
	printf("DPTE-FPTK-UPI-2014\n\n");
	printf("-------AG.1403141-------\n\n");
	printf("1. British ke SI \n2. SI ke British \n3. Konversi Suhu");

	printf("\n\nPilih Menu Konversi: ");scanf("%d", &pilih1);
}

void bsip(){
p:
	system("cls");
	printf("1. feet\n2. inci\n3. yard\n4. mil\n");
	printf("Pilih satuan: ");scanf("%d", &pilih3);
	switch(pilih3){
		case 1 : printf("Masukkan nilai: ");scanf("%f", &feet);
					cm=feet*f;printf("%g feet = %g cm\n", feet, cm);break;
		case 2 : printf("Masukkan nilai: ");scanf("%f", &inci);
					cm=inci*i;printf("%g inci = %g cm\n", inci, cm);break;
		case 3 : printf("Masukkan nilai: ");scanf("%f", &yard);
					cm=yard*y;printf("%g yard = %g cm\n", yard, cm);break;
		case 4 : printf("Masukkan nilai: ");scanf("%f", &mil);
					cm=mil*ml;printf("%g mil = %g cm\n", mil, cm);break;
	}
	printf("\nApakah Anda ingin mengkonversi lagi? (ketik y) Atau kembali ke awal? (ketik a) ");scanf("%s", &yn);
				 	if (yn=='y' || yn=='Y'){
				 	goto p;}
				 	else{}
}

void bsil(){
l:
	system("cls");
	printf("1. feet\n2. inci\n3. yard\n4. mil\n");
	printf("Pilih satuan: ");scanf("%d", &pilih3);
	switch(pilih3){
		case 1 : 	printf("Masukkan nilai: ");scanf("%f", &feet);
					cm=feet*f*f;printf("%g feet^2 = %g cm^2\n", feet, cm);
					break;
		case 2 : printf("Masukkan nilai: ");scanf("%f", &inci);
					cm=inci*i*i;printf("%g inci^2 = %g cm^2\n", inci, cm);
					break;
		case 3 : printf("Masukkan nilai: ");scanf("%f", &yard);
					cm=yard*y*y;printf("%g yard^2 = %g cm^2\n", yard, cm);
					break;
		case 4 : printf("Masukkan nilai: ");scanf("%f", &mil);
					cm=mil*ml*ml;printf("%g mil^2 = %g cm^2\n", mil, cm);
					break;
	}
	printf("\nApakah Anda ingin mengkonversi lagi? (ketik y) Atau kembali ke awal? (ketik a) ");scanf("%s", &yn);
				 	if (yn=='y' || yn=='Y'){
				 	goto l;}
				 	else{}
}

void bsiv(){
v:
	system("cls");
	printf("1. feet\n2. inci\n3. yard\n4. mil\n");
	printf("Pilih satuan: ");scanf("%d", &pilih3);
	switch(pilih3){
		case 1 : printf("Masukkan nilai: ");scanf("%f", &feet);
					cm=feet*f*f*f;printf("%g feet^3 = %g cm^3\n", feet, cm);
					break;
		case 2 : printf("Masukkan nilai: ");scanf("%f", &inci);
					cm=inci*i*i*i;printf("%g inci^3 = %g cm^3\n", inci, cm);
					break;
		case 3 : printf("Masukkan nilai: ");scanf("%f", &yard);
					cm=yard*y*y*y;printf("%g yard^3 = %g cm^3\n", yard, cm);
					break;
		case 4 : printf("Masukkan nilai: ");scanf("%f", &mil);
					cm=mil*ml*ml*ml;printf("%g mil^3 = %g cm^3\n", mil, cm);
					break;
	}
	printf("\nApakah Anda ingin mengkonversi lagi? (ketik y) Atau kembali ke awal? (ketik a) ");scanf("%s", &yn);
				 	if (yn=='y' || yn=='Y'){
				 	goto v;}
				 	else{}
}

void konversisatuan(){	
k:
	system("cls");
	printf("1. Panjang \n2. Luas \n3. Volume \n4. Massa \n5. Daya");
	printf("\n\nPilih Satuan: ");scanf("%d", &pilih2);
	
	switch(pilih2){
		case 1 : bsip();break;
		case 2 : bsil();break; 
		case 3 : bsiv();break;
		case 4 : printf("Masukkan nilai (pound): ");scanf("%f", &pound);
				 kg=pound*0.453592;
				 printf("%g pound = %g kg\n", pound, kg);
				 printf("\nApakah Anda ingin mengkonversi lagi? (ketik y) Atau kembali ke awal? (ketik a) ");scanf("%s", &yn);
				 if (yn=='y' || yn=='Y'){
			   	 goto k;}
				 else{};
				 break;
		case 5 : printf("Masukkan nilai daya (hp): ");scanf("%f", &hp);
				 daya=hp*745.7;
				 printf("%g hp = %g Watt\n", hp, daya);
				 printf("\nApakah Anda ingin mengkonversi lagi? (ketik y) Atau kembali ke awal? (ketik a) ");scanf("%s", &yn);
				 if (yn=='y' || yn=='Y'){
			   	 goto k;}
				 else{};
				 break;	
	}
}

void konversisatuan1(){
s:
	system("cls");
	printf("1. Panjang \n2. Luas \n3. Volume \n4. Massa \n5. Daya");
	printf("\n\nPilih Satuan: ");scanf("%d", &pilih2);
	
	switch(pilih2){
		case 1 : printf("Masukkan nilai panjang (cm): ");scanf("%f", &panjang);
				 system("cls");
				 feet=f2*panjang;printf("%g cm = %g feet\n", panjang, feet);
				 inci=i2*panjang;printf("%g cm = %g inci\n", panjang, inci);
				 yard=y2*panjang;printf("%g cm = %g yard\n", panjang, yard);
				 mil=ml2*panjang;printf("%g cm = %g mil\n", panjang, mil);
				 break;
	 	case 2 : printf("Masukkan nilai panjang (cm^2): ");scanf("%f", &panjang);
				 system("cls");
				 feet=f2*f2*panjang;printf("%g cm^2 = %g feet^2\n", panjang, feet);
				 inci=i2*i2*panjang;printf("%g cm^2 = %g inci^2\n", panjang, inci);
				 yard=y2*y2*panjang;printf("%g cm^2 = %g yard^2\n", panjang, yard);
				 mil=ml2*ml2*panjang;printf("%g cm^2 = %g mil^2\n", panjang, mil);
				 break;
	 	case 3 : printf("Masukkan nilai panjang (cm^3): ");scanf("%f", &panjang);
				 system("cls");
				 feet=f2*f2*f2*panjang;printf("%g cm^3 = %g feet^3\n", panjang, feet);
				 inci=i2*i2*i2*panjang;printf("%g cm^3 = %g inci^3\n", panjang, inci);
				 yard=y2*y2*y2*panjang;printf("%g cm^3 = %g yard^3\n", panjang, yard);
				 mil=ml2*ml2*ml2*panjang;printf("%g cm^3 = %g mil^3\n", panjang, mil);
				 break;
	 	case 4 : printf("Masukkan nilai (kg): ");scanf("%f", &kg);
				 pound=kg/0.453592;
				 printf("%g kg = %g pound\n", kg, pound);
				 break;
		case 5 : printf("Masukkan nilai daya (Watt): ");scanf("%f", &daya);
				 hp=daya/745.7;
				 printf("%g Watt = %g hp\n", daya, hp);
 				 break;
	}
	printf("\nApakah Anda ingin mengkonversi lagi? (ketik y) Atau kembali ke awal? (ketik a) ");scanf("%s", &yn);
				 if (yn=='y' || yn=='Y'){
			   	 goto s;}
				 else{};

}


main(){
a:
	system("cls");
	awal();

	if(pilih1==1){
		konversisatuan();
		if (yn=='a' || yn=='A'){
 		goto a;
	 	}
	}

	if(pilih1==2){
		konversisatuan1();
		if (yn=='a' || yn=='A'){
 		goto a;
	 	}
	}


	if(pilih1==3){
		t:
		system("cls");
		printf("1. Celcius \n2. Rheamur \n3. Fahrenheit \n4. Kelvin");
		printf("\n\nPilih Suhu: ");scanf("%d", &suhu);
		printf("\nMasukkan Nilai Suhu: ");scanf("%f", &nilaisuhu);

		if(suhu==1){
			system("cls");
			R=nilaisuhu*0.8;
			printf("Rheamur: %g\n", R);
			F=(nilaisuhu*1.8)+32;
			printf("Fahrenheit: %g\n", F);
			K=nilaisuhu+273;
			printf("Kelvin: %g\n", K);
		}
	
		if(suhu==2){
			system("cls");
			C=nilaisuhu/0.8;
			printf("Celcius: %g\n", C);
			F=(nilaisuhu*2.25)+32;
			printf("Fahrenheit: %g\n", F);
			K=(nilaisuhu/0.8)+273;
			printf("Kelvin: %g\n", K);
		}

		if(suhu==3){
			system("cls");
			C=(nilaisuhu-32)/1.8;
			printf("Celcius: %g\n", C);
			R=(nilaisuhu-32)/2.25;
			printf("Rheamur: %g\n", R);
			K=((nilaisuhu-32)/1.8)+273;
			printf("Kelvin: %g\n", K);
		}	

		if(suhu==4){
			system("cls");
			C=nilaisuhu-273;
			printf("Celsius: %g\n", C);
			R=((nilaisuhu-273)*0.8);
			printf("Rheamur: %g\n", R);
			F=((nilaisuhu-273)*1.8)+32;
			printf("Fahrenheit: %g\n", F);	
		}

		printf("\nApakah Anda ingin mengkonversi lagi? (ketik y) Atau kembali ke awal? (ketik a) ");scanf("%s", &yn);
		if (yn=='a' || yn=='A'){
			goto a;
			}
		if (yn=='y' || yn=='Y'){
			goto t;
			}
		else{}

	}


}

//end.

// Mei 2015.
