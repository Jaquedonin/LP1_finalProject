#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


void Login(){

    printf("\nDigite seu nome de usuário: ");
    scanf("%s", &verificador_user);
    printf("Digite sua senha: ");
    scanf("%s", &verificador_senha);

    for(int i = 0; i<(str_len(verificador_user)); i++){
        if(verificador_user[i] == contatos[i]){
            printf("Login realizado com sucesso");
        }
    }
}
 
int main(int argc, char const *argv[])
{	
	

	FILE *arq;
 	size_t len = 100;
 	char * linha = malloc(len);
 	arq = fopen("instrucoes.txt","r");
 	char email[100];
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
	return 0;
}
	