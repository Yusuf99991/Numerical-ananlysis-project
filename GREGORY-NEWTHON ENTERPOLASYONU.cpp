#include<stdio.h>
int main(){
	int N,dizi[50],X,i,j;
	float dizi1[50],toplam,carpým;
	
	pritnf("gireceginiz degerlerin sayisini giriniz.");
	scanf("%d",N);
	for(i=0;i<N;i++){
		printf("%d. X degiskenin alacagý deger:",i);//mesela X=0,ve X=1 bunun gibi N ba
		scanf("%d",&dizi[i]);
		printf("f(%d). fonksiyonun alacagi deger.");
		scanf("%f",&dizi1[i]);
	}
	printf("Bulmak istediginiz X degiskenin degerini yaziniz.");
	scanf("%d",&X);
	carpým=1;
	toplam=0;
	i=0;
	while((dizi1[0]!=dizi1[1]&&dizi1[1]!=dizi1[2])&&(dizi[1]!=0)){
        toplam=toplam+dizi1[0]*carpým;
        carpým=carpým*(X-dizi[i]);
        j=0;
        while(dizi[j+1]!=0&&(j<N-1)){
        	dizi1[j]=dizi1[j+1]-dizi1[j];
        	j++;
        }
        dizi[j]=0;
        
	}
	printf("%f",toplam);
	return 0;
}                                             	
