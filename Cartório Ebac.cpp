#include<stdio.h>//biblioteca de comunica��o com o usu�rio
#include<stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria
#include<locale.h>//biblioteca de alooca��o de texto por regi�o
#include<string.h> // biblioteca respons�vel pelas strings

int registro()// inicio do grupo de fun��es 
{//Inicio da fun��o registro (Responsavel por cadastrar os usu�rios no sistema)

		//inicio da cria��o de vari�veis/string
		char arquivo[40];
		char cpf [40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
		//Final da cria��o de vari�veis/string
		
		printf("Digite o CPF a ser cadastrado:");//Coletando informa��es do usu�rios
		scanf("%s", cpf); //%s refere-se a string
		
		
		strcpy(arquivo, cpf); // respons�vel por copiar os valores das strings
		
		FILE *file;//FILE(chama a fun��o feita pelo o sistema) file(arquivo escrito por mim)&[cria o arquivo]
		file = fopen(arquivo, "w");// cria o arquivo e o (W) refere-se a escrever
		fprintf(file, "CPF:");
		fprintf(file,cpf);// salva o valor da variavel
		fclose(file);// fecha o arquivo
		
		file = fopen(arquivo, "a");//Abre o arquivo e o (a) refere-se a atualizar
		fprintf(file, "Nome:");//escreve dentro do arquivo
		fclose(file);//Fecha o arquivo
		
		printf("Digite o nome a ser cadastrado:");
		scanf("%s", nome);// salva o valor da variavel
		
		file = fopen(arquivo, "a");//Abre o arquivo e o (a) refere-se a atualizar
		fprintf(file, nome);
		fclose(file);//Fecha o arquivo
		
		file = fopen(arquivo, "a");//Abre o arquivo e o (a) refere-se a atualizar
		fprintf(file, "Sobrenome:");//escreve dentro do arquivo
		fclose(file);//Fecha o arquivo
		
		printf("Digite o sobrenome a ser cadastrado:");
		scanf("%s",sobrenome);// salva o valor da variavel
		
		file = fopen(arquivo, "a");//Abre o arquivo e o (a) refere-se a atualizar
		fprintf(file,sobrenome);
		fclose(file);//Fecha o arquivo
		
		
		file = fopen(arquivo, "a");//Abre o arquivo e o (a) refere-se a atualizar
		fprintf(file, "Cargo:");//escreve dentro do arquivo
		fclose(file);//Fecha o arquivo
		
		printf("Digite o cargo a ser cadastrado:");
		scanf("%s",cargo);// salva o valor da variavel
		
		file = fopen(arquivo, "a");//Abre o arquivo e o (a) refere-se a atualizar
		fprintf(file,cargo);
		fclose(file);//Fecha o arquivo
		
		system("pause");
}	//Fim da fun��o registro
	
int consulta()//inicio da fun��o Consulta
{	
	setlocale(LC_ALL, "portuguese");// Definindo a linguagem
	
		//inicio da cria��o de vari�veis/string
		char cpf[40];
		char conteudo[200];
		//Final das vari�vei/string
		
		printf("Digite o CPF a ser consultado:");
		scanf("%s",cpf);// salva o valor da variavel
		
		FILE *file;//FILE(chama a fun��o feita pelo o sistema) file(arquivo escrito por mim)&[cria o arquivo]
		file = fopen(cpf, "r");	//Abre o arquivo e o (r) refere-se a ler e permitir que o sistema procure a vari�vel
		
		if(file == NULL)//Para caso o arquivo solicitado n�o seja encontrado
		{
			printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
			
		}
		
		while(fgets(conteudo, 200, file)!=NULL);//Para quando o arquivo for encontrado
		{
			printf("\nEssa s�o as informa��es do usu�rio:\n");
			printf("%s", conteudo);	//escreve o que se encontra salvo no arquivo
			printf("\n\n");
		}
	system("pause");
}//fim da fun��o consulta

int deletar()//inicio da fun��o Deletar
{		
		//Inicio da cria��o de vari�veis/string
		char cpf [40];
		//Final da cria��o de vari�veis/string
		
		printf("Digite o CPF a ser deletado: ");
		scanf("%s",cpf);//Salvando a vari�vel
		
		remove(cpf);//Para deletar a vari�vel
		
		FILE *file;////FILE(chama a fun��o feita pelo o sistema) file(arquivo escrito por mim)&[cria o arquivo]
		file = fopen(cpf,"r");//	//Abre o arquivo e o (r) refere-se a ler e permitir que o sistema procure a vari�vel
		
		
		if(file == NULL)//Para caso a vari�vel n�o seja encontrada dentro do sistema
		{
			printf("O usu�rio n�o se encontra no sistema!\n");
			system("pause");
		}	
		
		
			// fim da fun��o deletar
		 
}// fim do grupo de fun��es 

int main() // Indicador da fun��o principal 
{
	int opcao=0;// Definindo as vari�veis (necess�rio para o computador saber indetificar as outras depois)
	int x=1;// Variavel para o la�o
	
	for(x=1;x=1;)//Inicio do la�o
	{
		
		system("cls");
	
		setlocale(LC_ALL, "portuguese"); //comando usado para definir a liguagem 
	
	
		printf("### Cart�rio da EBAC ### \n\n"); // par�ntese � usado para falar com o usu�rio (In�cio do menu)
		printf("Escolha a op��o desejada do menu: \n\n"); // O \n � usado para pular linhas dentro do programa 
		printf("\t1 - Registro nomes \n"); // O \t1 � usado para dar espa�o do inicio do texto 
		printf("\t2 - Cosultar nomes \n"); 
		printf("\t3 - Deletar nomes\n");
		printf("\t4 - Sair do sistema\n\n");
		printf("Op��o:");// fim do menu
	
		scanf("%d", &opcao);//armazenando a escolha do usu�rio
	
		system("cls");//responsavel por limpar a tela
		
		switch(opcao)// inicio do switch
		{
			case 1:
			registro();//chamada de fun��es
			break;
			
			case 2:
			consulta();//Chamada de fun��o
			break;
			
			case 3:
			deletar();//Chamada de fun��o
			break;
			
			case 4:// opc�o criada para sair do sistema
			printf("obrigado por usar o sistema!\n\n");	
			return 0;
	     	break;//fechando o sistema
				
			default:
			printf("Essa op��o n�o esta dispon�vel!\n");
			system("pause");
			break;	
		}// fim do switch case
	
		
		}//fim do la�o
	
	}// fim da Main
	
