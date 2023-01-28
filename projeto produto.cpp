#include <stdio.h>
#include <string.h>

#define TF 50
struct Produto {
  char descricao[50];
  int codfornecedor;
  int qtestoque;
  int qtminima;
  int qtmaxima;
};

void abaixo(struct Produto vetProduto[TF], int TL){
int i = 0;
printf("\nABAIXO DO ESTOQUE");
  for(i = 0; i < TL; i++){
    if(vetProduto[i].qtestoque < vetProduto[i].qtminima){
      printf("\n valores vetProduto[%d]:", i);
      printf("\n descricao: %s", vetProduto[i].descricao);
      printf("\n codigo fornecedor: %d", vetProduto[i].codfornecedor);
      printf("\n quantidade em estoque: %d", vetProduto[i].qtestoque);
      printf("\n quantidade maxima: %d", vetProduto[i].qtmaxima);
      printf("\n pedir a quantidade: %d", vetProduto[i].qtmaxima-vetProduto[i].qtestoque);
      printf("\n");
    }    
  }
}
  
void acima(struct Produto vetProduto[TF], int TL){
	int i = 0;
	printf("\nACIMA DO ESTOQUE");
  for(i = 0; i < TL; i++){
    if(vetProduto[i].qtestoque > vetProduto[i].qtmaxima){
      printf("\n valores vetProduto[%d]:", i);
      printf("\n descricao: %s", vetProduto[i].descricao);
      printf("\n codigo fornecedor: %d", vetProduto[i].codfornecedor);
      printf("\n quantidade em estoque: %d", vetProduto[i].qtestoque);
      printf("\n quantidade maxima: %d", vetProduto[i].qtmaxima);
      printf("\n quantidade excedente: %d", vetProduto[i].qtestoque-vetProduto[i].qtmaxima);
      printf("\n");
    }    
  }
}
  

main(){

  int TL = 10;
  int opcao = 0;
  
  struct Produto vetProduto[TF];

  
  strcpy(vetProduto[0].descricao,"arroz");
	vetProduto[0].codfornecedor = 777;
	vetProduto[0].qtestoque = 100;
	vetProduto[0].qtminima = 150;
	vetProduto[0].qtmaxima = 200;
	
	//
	
	strcpy(vetProduto[1].descricao,"feijao");
	vetProduto[1].codfornecedor = 777;
	vetProduto[1].qtestoque = 190;
	vetProduto[1].qtminima = 60;
	vetProduto[1].qtmaxima = 100;
	
	//

	strcpy(vetProduto[2].descricao,"leite condensado");
	vetProduto[2].codfornecedor = 444;
	vetProduto[2].qtestoque = 45;
	vetProduto[2].qtminima = 50;
	vetProduto[2].qtmaxima = 90;
	
	//
	
	strcpy(vetProduto[3].descricao,"macarrao");
	vetProduto[3].codfornecedor = 555;
	vetProduto[3].qtestoque = 68;
	vetProduto[3].qtminima = 60;
	vetProduto[3].qtmaxima = 100;
	
	//
	
	strcpy(vetProduto[4].descricao,"molho de tomate");
	vetProduto[4].codfornecedor = 222;
	vetProduto[4].qtestoque = 24;
	vetProduto[4].qtminima = 20;
	vetProduto[4].qtmaxima = 70;
	
	//
	
	strcpy(vetProduto[5].descricao,"acucar");
	vetProduto[5].codfornecedor = 333;
	vetProduto[5].qtestoque = 67;
	vetProduto[5].qtminima = 70;
	vetProduto[5].qtmaxima = 100;
	
	//
	
	strcpy(vetProduto[6].descricao,"bolacha salgada");
	vetProduto[6].codfornecedor = 555;
	vetProduto[6].qtestoque = 135;
	vetProduto[6].qtminima = 45;
	vetProduto[6].qtmaxima = 50;
	
	//
	
	strcpy(vetProduto[7].descricao,"agua mineral - 1l");
	vetProduto[7].codfornecedor = 987;
  vetProduto[7].qtestoque = 60;
	vetProduto[7].qtminima = 40;
	vetProduto[7].qtmaxima = 80;
	
	//
	
	strcpy(vetProduto[8].descricao,"farinha de trigo");
	vetProduto[8].codfornecedor = 111;
	vetProduto[8].qtestoque = 230;
	vetProduto[8].qtminima = 40;
	vetProduto[8].qtmaxima = 90;
	
	//
	
	strcpy(vetProduto[9].descricao,"leite - 12 unidades");
	vetProduto[9].codfornecedor = 666;
	vetProduto[9].qtestoque = 20;
	vetProduto[9].qtminima = 30;
	vetProduto[9].qtmaxima = 50;

while(opcao!=3){
		
		printf("\n 1 - produtos abaixo do estoque");
		printf("\n 2 - produtos acima do limite de estoque");
		printf("\n 3 - sair");
		scanf("%d",&opcao);
		switch(opcao){
			
			case 1: abaixo(vetProduto,TL);break;
			
			case 2: acima(vetProduto,TL);break;	
       }
			
				
	   }
	  }
  
