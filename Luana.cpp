#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()	
{
	
	 char cpf[50];
	 char nome[50];
	 char sobrenome[50];
	 char cargo[50];
	 char arquivo[50];
	
	printf("Digite o CPF a ser cadrastado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, " \n");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, " ");
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, " \n");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");

}
	
int consulta()
{   
	 setlocale(LC_ALL, "Portuguese");
	 
	 char cpf[50];
	 char conteudo[200];
	 
	 printf("Digite o CPF a ser consultado: ");
	 scanf("%s",cpf);
	 
	 FILE *file;
	 file = fopen(cpf,"r");
	 
	 if(file == NULL)
	 {
	 	printf("N�o foi poss�vel encontrar o arquivo!.\n");
	 }
	 
	 while(fgets(conteudo, 200, file) != NULL)
	 {
	 	printf("\nEssas s�o as informa��es do Usu�rio: ");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 }	 
	 
	 system("pause");
	 	
}

int deletar()
{
	char cpf[50];
	
	printf("Digite o cpf do usuario a ser deletado.");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL);
	{
		printf("O usuario n�o se encontra no sistema");
		system("pause");
	}	
}


 int main()
{
	int opcao=0;
	int	laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	
	printf("### Cartorio da EBAC ###\n\n");
	printf("Login de Administrador!\n\nDigite sua senha");
	scanf("%s",senhadigitada);
	
    comparacao = strcmp(senhadigitada, "admin");

	if(comparacao == 0)
	{
		system ("cls");
    	for(laco=1;laco=1;)
    	{ 
    
	   	system("cls");
	 
	   	setlocale(LC_ALL, "Portuguese");
	 
	  	 printf("### Cart�rio da Ebac ###\n\n");
	   	printf("Escolha a op��o desejada do menu:\n\n");
	   	printf("\t1 - Registrar nomes\n");
	   	printf("\t2 - Consultar nomes\n");
	   	printf("\t3 - Deletar nomes\n");
	   	printf("\t Esse software � para Luana\n");
	  	printf("Op��o: ");
	  	printf("\t4 - Sair do sistema\n\n");
	   	scanf("%d", &opcao);
	
	  		system("cls");
	   
	   		switch(opcao)
	   	  	{
            	case 1:
            	registro();
				break;
	        
	        	case 2: 
				consulta();
	    		break;
	        
	        	case 3:
	       		deletar();
	        	break;
	        	
	        	case 4:
	        	printf ("obrigado por utilizar o sistema\n");
	        	return 0;
	        	break;
	        
	        	default:
	        	printf("Essa op��o n�o est� Dispon�vel!!\n");
	        	system("pause");
	        	break;
		  	} 
	   }
    }
    else
    	printf("senha incorreta!");
}
