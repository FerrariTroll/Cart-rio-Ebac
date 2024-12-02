#include<stdio.h>//biblioteca de comunicação com o usuário
#include<stdlib.h>//biblioteca de alocação de espaço em memória
#include<locale.h>//biblioteca de aloocação de texto por região
#include<string.h> // biblioteca responsável pelas strings

int registro()// inicio do grupo de funções 
{//Inicio da função registro (Responsavel por cadastrar os usuários no sistema)

		//inicio da criação de variáveis/string
		char arquivo[40];
		char cpf [40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
		//Final da criação de variáveis/string
		
		printf("Digite o CPF a ser cadastrado:");//Coletando informações do usuários
		scanf("%s", cpf); //%s refere-se a string
		
		
		strcpy(arquivo, cpf); // responsável por copiar os valores das strings
		
		FILE *file;//FILE(chama a função feita pelo o sistema) file(arquivo escrito por mim)&[cria o arquivo]
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
}	//Fim da função registro
	
int consulta()//inicio da função Consulta
{	
	setlocale(LC_ALL, "portuguese");// Definindo a linguagem
	
		//inicio da criação de variáveis/string
		char cpf[40];
		char conteudo[200];
		//Final das variávei/string
		
		printf("Digite o CPF a ser consultado:");
		scanf("%s",cpf);// salva o valor da variavel
		
		FILE *file;//FILE(chama a função feita pelo o sistema) file(arquivo escrito por mim)&[cria o arquivo]
		file = fopen(cpf, "r");	//Abre o arquivo e o (r) refere-se a ler e permitir que o sistema procure a variável
		
		if(file == NULL)//Para caso o arquivo solicitado não seja encontrado
		{
			printf("Não foi possivel abrir o arquivo, não localizado!.\n");
			
		}
		
		while(fgets(conteudo, 200, file)!=NULL);//Para quando o arquivo for encontrado
		{
			printf("\nEssa são as informações do usuário:\n");
			printf("%s", conteudo);	//escreve o que se encontra salvo no arquivo
			printf("\n\n");
		}
	system("pause");
}//fim da função consulta

int deletar()//inicio da função Deletar
{		
		//Inicio da criação de variáveis/string
		char cpf [40];
		//Final da criação de variáveis/string
		
		printf("Digite o CPF a ser deletado: ");
		scanf("%s",cpf);//Salvando a variável
		
		remove(cpf);//Para deletar a variável
		
		FILE *file;////FILE(chama a função feita pelo o sistema) file(arquivo escrito por mim)&[cria o arquivo]
		file = fopen(cpf,"r");//	//Abre o arquivo e o (r) refere-se a ler e permitir que o sistema procure a variável
		
		
		if(file == NULL)//Para caso a variável não seja encontrada dentro do sistema
		{
			printf("O usuário não se encontra no sistema!\n");
			system("pause");
		}	
		
		
			// fim da função deletar
		 
}// fim do grupo de funções 

int main() // Indicador da função principal 
{
	int opcao=0;// Definindo as variáveis (necessário para o computador saber indetificar as outras depois)
	int x=1;// Variavel para o laço
	
	for(x=1;x=1;)//Inicio do laço
	{
		
		system("cls");
	
		setlocale(LC_ALL, "portuguese"); //comando usado para definir a liguagem 
	
	
		printf("### Cartório da EBAC ### \n\n"); // parêntese é usado para falar com o usuário (Início do menu)
		printf("Escolha a opção desejada do menu: \n\n"); // O \n é usado para pular linhas dentro do programa 
		printf("\t1 - Registro nomes \n"); // O \t1 é usado para dar espaço do inicio do texto 
		printf("\t2 - Cosultar nomes \n"); 
		printf("\t3 - Deletar nomes\n");
		printf("\t4 - Sair do sistema\n\n");
		printf("Opção:");// fim do menu
	
		scanf("%d", &opcao);//armazenando a escolha do usuário
	
		system("cls");//responsavel por limpar a tela
		
		switch(opcao)// inicio do switch
		{
			case 1:
			registro();//chamada de funções
			break;
			
			case 2:
			consulta();//Chamada de função
			break;
			
			case 3:
			deletar();//Chamada de função
			break;
			
			case 4:// opcão criada para sair do sistema
			printf("obrigado por usar o sistema!\n\n");	
			return 0;
	     	break;//fechando o sistema
				
			default:
			printf("Essa opção não esta disponível!\n");
			system("pause");
			break;	
		}// fim do switch case
	
		
		}//fim do laço
	
	}// fim da Main
	
