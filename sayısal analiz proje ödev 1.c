#include<stdio.h>
int main(){
	int N,dizi[100],i,j;
	float E,A,B,X1,X2,X3,toplam1,toplam2,toplam3;
	printf("fonksiyonun dercesini giriniz.");
	scanf("%d",&N);
	printf("fonksiyonun kat sayilarini giriniz.");
	printf("\n");
	for(i=0;i<N+1;i++){
		printf("%d.dereceden elemanin kat sayisini giriniz.",i);
		scanf("%d",&dizi[i]);
	}
	do{
	    printf("fonksiyonun kokunun bulundugu araligi kucukten buyuge sirayla giriniz.");
	    scanf("%f",&A);
	    scanf("%f",&B);
	}while(B<=A);
	printf("hata miktarini giriniz.");
	scanf("%f",&E);
	toplam1=0;
	toplam2=0;
	for(i=0;i<N+1;i++){
		X1=dizi[i];
		X2=dizi[i];
		for(j=0;j<i;j++){
			X1=X1*A;
			X2=X2*B;
		}
		toplam1=toplam1+X1;
		toplam2=toplam2+X2;
	}
	toplam3=10;
	if(toplam1<toplam2){
		while((B-A>E)||toplam3==0){
			toplam3=0;
		    for(i=0;i<N+1;i++){
		        X3=dizi[i];
		        for(j=0;j<i;j++){
			        X3=X3*((A+B)/2);
			    }
			    toplam3=toplam3+X3;
			}
			if(toplam3<0){
				A=(A+B)/2;
			}
			else{
				if(toplam3>0){
					B=(A+B)/2;
				}
				else{
					A=(A+B)/2;
					B=(A+B)/2;
				}
				
			}
		}
		if(toplam3<0){
			printf("%f",A);
		}
		else{
			printf("%f",B);
		}
    }
	else{
	    while((B-A>E)||toplam3==0){
		    for(i=0;i<N+1;i++){
		        X3=dizi[i];
		        for(j=0;j<i;j++){
			        X3=X3*((A+B)/2);
			    }
			    toplam3=toplam3+X3;
			}
			if(toplam3<0){
				B=(A+B)/2;
			}
			else{
				if(toplam3>0){
					B=(A+B)/2;
				}
				else{
					A=(A+B)/2,
					B=(A+B)/2;
				}
				
			}
		}
		if(toplam3<0){
			printf("%f",B);
		}
		else{
			if(toplam3>0){
				printf("%f",A);
			}
			else{
				("%f",A);
			}
		}
		
	}    
	
	return 0;
	
}
