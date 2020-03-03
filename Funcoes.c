#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

void ManagementFile(char caminho)
{
	//ponteiro pro arquivo
	FILE *arq;
	//tamanho do espaço de memária que será alocado
 	size_t len = 100;
 	//ponteiro para espaço de memória que será alocada
 	char * linha = malloc(len);
 	//concatena o caminho do arquivo com o nome do arquivo 
 	strcat(caminho, "/instrucoes.txt");
 	arq = fopen(caminho,"r");
 	//variavel que recebera email do usuario lido do arquivo
 	char email[100];
 	//variável teste para verificar se usuario esta cadastrado
 	char credenciais = 'Luis';

 	while (getline(&linha, &len,arq)>0)
 	{
 		for (int i = 0; i <(strlen(linha)); ++i)
 		{	
 			email[i] = linha[i];
 			if(linha[i] == '_'){
 				printf("Dentro do if que le email do arquivo\n");
 				break;
 			}
 		}
 		if(email == credenciais)
 		{
 			printf("Dentro do if que compara email e credenciais\n");
 			break;
 		}
 		else
 		{
 			printf("Deu errado as strings nao sao iguais\n");
 		}
 	}

 	fclose(arq);
 	free(linha);
}
int Login(){

    printf("\nDigite seu nome de usuário: ");
    scanf("%s", &verificador_user);
    printf("Digite sua senha: ");
    scanf("%s", &verificador_senha);

    for(int i = 0; i<(str_len(verificador_user)); i++){
        if(verificador_user[i] == contatos[i]){
            printf("Login realizado com sucesso");
        }
    }
    return 0;
}
int FriendManagement()
{
	return 0;
}

int AcountsManagement()
{
	return 0;
}

int GroupsManagement()
{
	return 0;
}

int main(int argc, char const *argv[])
{	
	


	return 0;
}
	