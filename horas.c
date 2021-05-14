#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int total[31][12];
	
	int x;
	int y;
	int registro;
	int horas;
	int dia=0;
	int mes=0;
	int decision;
	int decision_2;
	int sumaf;


	
		
	for(x=0; x<31; x++){
		for(y=0; y<12; y++){
			total[x][y]=0;
		}
	}
	



	while(1){
	
		printf("Desea registrar sus horas laboradas al sistema? 1/0: ");
			scanf("%d", &registro);
				printf("\n");
		if(registro ==1){
			break;
		}else if(registro <1 || registro >1){
			printf("Es un numero invalido, ingrese un valor valido:\n");
				printf("\n");
		}else if(registro==0){
			break;
		}
		
	}
	



	do{


	do{


		while(1){
		
			printf("En que mes laboro? 1/12: ");
				scanf("%d", &mes);
					printf("\n");
				if(mes >=1 && mes <=12){
					break;
				}else{
					printf("Ingrese un valor valido: \n\n");
				}
		}	
		
		while(1){
		
			printf("En que dia laboro? 1/31: ");
				scanf("%d", &dia);	
					printf("\n");
				if(dia >=1 && dia <=31){
					break;
				}else{
					printf("Ingrese un valor valido: \n\n");
				}
		
		}
		
			printf("Ingrese la cantidad de horas laboradas: ", dia, mes);
				scanf("%d", &horas);
					printf("\n");
				
					total[dia][mes] += horas;
					
			printf("Desea ingresar mas horas de trabajo? 1/0: ");
				scanf("%d", &decision);	
					printf("\n");	
				
	}while(decision !=0);	
	
	
		printf("Desea ingresar otro trabajador?: 1/0 ");
			scanf("%d", &decision_2);
			printf("\n");
	
	
	}while(decision_2 !=0);
	
	
		for(x=0; x<31; x++){
			for(y=0; y<12; y++){
				sumaf += total[x][y];
		}

	}
	
		printf("La cantidad total de horas trabajadas es de %d", sumaf);
			printf("\n\n");
	
	
	
	
	for(x=0; x<31; x++){
		for(y=0; y<12; y++){
			printf("%d ", total[x][y], dia, mes);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
