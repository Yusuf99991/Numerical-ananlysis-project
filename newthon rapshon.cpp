#include<stdio.h>
int main(){
	int n,N,N1,dizi1[100],dizi[100],i,j;
	float E,A1,A2,X1,X2,toplam1,toplam2;
	printf("fonksiyonun dercesini giriniz.");
	scanf("%d",&N);
	printf("fonksiyonun kat sayilarini giriniz.");
	printf("\n");
	for(i=0;i<N+1;i++){
		printf("%d.dereceden elemanin kat sayisini giriniz.",i);
		scanf("%d",&dizi[i]);
	}
	/*printf("fonksiyonun türevinin derecesini  giriniz:");
	scanf("%d",&N1);
	//printf("fonksiyonun türevinin kat sayilarini giriniz.");
	/*for(i=0;i<N1+1;i++){
		printf("%d.dereceden elemanin kat sayisini giriniz.",i);
		scanf("%d",&dizi1[i]);
	*/	
	printf("Baslangýc degeri giriniz");
	scanf("%f",&X1);
	printf("hata miktarini giriniz.");
	scanf("%f",&E);
	for(i=0;i<N+1;i++){
		A1=dizi[i];
		for(j=0;j<i;j++){
			A1=A1*X1;
		}
		toplam1+=A1;
	}
	for(i=1;i<N+1;i++){
		A2=i*dizi[i];
		for(j=1;j<i;j++){
			A2=A2*X1;
		}
		toplam2+=A2;
	}
	X2=X1-toplam1/toplam2;
	n=1;
	while(((X1-X2>E)||(X1-X2<(-1)*E))&&(n<15)){
		X1=X2;	
		for(i=0;i<N+1;i++){
		    A1=dizi[i];
		    for(j=0;j<i;j++){
			    A1=A1*X1;
		    }
		    toplam1+=A1; 
		}
		for(i=1;i<N+1;i++){
	    	A2=i*dizi[i];
		    for(j=1;j<i;j++){
			    A2=A2*X1;
		    }
		    toplam2+=A2;
	    }
	    X2=X1-toplam1/toplam2;
	    n=1;
	    n++;
	}
	while((n>15)&&((X1-X2>E)||(X1-X2<(-1)*E))){
		printf("kok iraksadi tekrardan yeni bir baslangic degeri giriniz");
		scanf("%f",X1);
		n=0;
		while(((X1-X2>E)||(X1-X2<(-1)*E))&&(n<15)){
		    X1=X2;	
		    for(i=0;i<N+1;i++){
		        A1=dizi[i];
		        for(j=0;j<i;j++){
			        A1=A1*X1;
		        }
		        toplam1+=A1; 
		    }
		    for(i=1;i<N+1;i++){
	    	    A2=i*dizi[i];
		        for(j=1;j<i;j++){
			        A2=A2*X1;
		        }
		        toplam2+=A2;
	        }
	        X2=X1-toplam1/toplam2;
	        n++;
		
	}
	printf("yaklasýk kok degeri:%f",X2);
	
	return 0;


}
