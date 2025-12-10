#include<stdio.h>

int main(){
	int row,i,j,k;
	float matrix1[50][50],matrix[50][50],tmp;
	printf("Kare matrisin satir sayisini girin:");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf("Matrix[%d][%d]. elemanini giriniz",i+1,j+1);
			scanf("%f",&matrix[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			if(i==j){
				matrix1[i][j]=1;
			}
			else{
				matrix1[i][j]=0;
			}
			
			    
		}
		
	}
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			if(i!=j){
				tmp=matrix[j][i];
				for(k=0;k<row;k++){
					matrix[j][k]=matrix[j][k]-(matrix[i][k]/matrix[i][i])*tmp;
					matrix1[j][k]=matrix1[j][k]-(matrix1[i][k]/matrix[i][i])*tmp;
					
				}
			}
			
			
			
		}
	}
	for(i=0;i<row;i++){
		tmp=matrix[i][i];
		for(j=0;j<row;j++){
			matrix[i][j]=matrix[i][j]/tmp;
			matrix1[i][j]=matrix1[i][j]/tmp;
		}
	}
    for(i=0;i<row;i++){
    	for(j=0;j<row;j++){
    		printf("|%5.2f|",matrix[i][j]);
		}
		printf("\n");
	}
	printf("Matrixin tersi\n");
    for(i=0;i<row;i++){
    	for(j=0;j<row;j++){
    		printf("|%5.2f|",matrix1[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}
