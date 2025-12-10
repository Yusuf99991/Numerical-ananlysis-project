#include<stdio.h>
int main(){
	int N,dizi[50],i,j,h;
	float dizi1[50],X,toplam,carpim,A,B;
	
	printf("gireceginiz degerlerin sayisini giriniz:");
	scanf("%d",&N);
	for(i=0;i<N;i++){
	   	printf("%d. X degiskenin alacagi deger:",i);//mesela X=0,ve X=1 bunun gibi N tane 
		scanf("%d",&dizi[i]);
	   	printf("f(%d)  alacagi deger:",dizi[i]);//mesela F(0),veya F(1) bunun gibi N tane F(X) degeri X'e bagli; 
		scanf("%f",&dizi1[i]);		
	}
	
	printf("Bulmak istediginiz X degiskenin degerini yaziniz:");
	scanf("%f",&X);
	carpim=1;
	toplam=0;
	i=0;
	h=1;
	while(dizi1[0]!=0||dizi1[0]-dizi1[1]!=0){
        toplam=toplam+dizi1[0]*carpim;
        h=dizi[1]-dizi[0];
        A=X-dizi[i];
        B=(i+1)*h;
        carpim=carpim*A/B;
        j=0;
        while((j<N-1)&&dizi[j+1]!=0){
        	dizi1[j]=dizi1[j+1]-dizi1[j];
        	j++;
        }
        dizi[j]=0;
        i++;
        
	}
	printf("%f",toplam);
	return 0;
}                                             	
