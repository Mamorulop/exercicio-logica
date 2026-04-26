#include <stdio.h>
//jkhgfdsfgyhjk

int main() {
   int nums[5], choosePosition1, choosePosition2, valor1, valor2;
   int target;  

	//O usuario escolheu os numeros
	// Agora e somar os numeros
   //se usuario escolher tao posicao, será somados
   
   printf("Qual o valor do target?\n ");
   scanf("%d", &target);
   
   //Selecionou o numero 5 vezes
   for(int i = 0;i < 5; i++){
      printf("Escolha um numero:%d ", i);
   	  scanf("%d", &nums[i]);
   }
   
    int posicao0 = nums[0], posicao1 = nums[1], posicao2 = nums[2], posicao3 = nums[3], posicao4 = nums[4];
	
	//Imprimiu a posicao e valor dos numeros escolhidos
	for(int i = 0;i<5;i++){
		printf("Posicao: %d e Valor: %d\n", i, nums[i]);
	}
	//Agora vai escolher duas posicoes//
	//Tem que fazer pegar somente as posições da array//
        
	printf("%d, %d, %d, %d, %d:\n ", posicao0, posicao1, posicao2, posicao3, posicao4);
	printf("Escolha uma posicao da array: [0 a 4]\n ");
	scanf("%d", &choosePosition1);
	printf("Escolha outro numero da array: [0 a 4]\n ");
	scanf("%d", &choosePosition2);
	
	if (choosePosition1 >= 0 && choosePosition1 < 5 && choosePosition2 >= 0 && choosePosition2 < 5) {
     valor1 = nums[choosePosition1];
     valor2 = nums[choosePosition2];
}
	

	//Fazer imprimir as posições tbm
	
    if(valor1 + valor2 == target){
    	printf("A soma das posicoes %d e %d igual ao target %d\n", choosePosition1, choosePosition2, target);
	}else{
		printf("A soma das posicoes %d e %d nao e igual a target %d\n", choosePosition1, choosePosition2, target);
	}
	
    return 0;
}
