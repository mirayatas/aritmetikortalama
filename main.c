#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>


int main(){
	
	int i,a;
	float toplam = 0.0;
	float aritort;
	printf("dizinin boyutunu giriniz: ");
	scanf("%d",&a);
	
	int dizi[a];
	printf("dizi elemanlarini giriniz: ");
	for(i=0;i<a;i++){
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<a;i++){
	toplam=dizi[i]+toplam;
	}
		
	aritort=toplam/a;
	printf("%f",aritort);
	return 0;}
