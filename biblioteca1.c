#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct dados_usuario
{
    char usuario[200];
    int idade;
    char numeroMatricula[200];
};

void categoriaLivro(char *categoria){
  if (strcmp(categoria, "terror") == 0)
  {
    printf("Você escolheu a categoria de terror!\n");
  }
  else if (strcmp(categoria, "romance") == 0)
  {
    printf("Você escolheu a categoria de romance!\n");
  }
  else if (strcmp(categoria, "comedia") == 0)
  {
    printf("Você escolheu a categoria de comedia!\n");
  }
  else if (strcmp(categoria, "drama") == 0)
  {
    printf("Você escolheu a categoria de drama!\n");
  }
  else if (strcmp(categoria, "ficcão") == 0)
  {
    printf("Você escolheu a categoria de ficcão!\n");
  }
  else
  {
    printf("Categoria Invalída.\n");
  }
  
}

void livroDisponivel(char *livro){
	if (livro, "os tres porquinos"){
		printf("\nLivro disponivel");
	}
	else if (livro, "o pequeno principe"){
		printf("\nlivro disponivel");
	}
	else if (livro, "romeu e julieta"){
		printf("\nLivro disponivel");
	}
	else if (livro, "it - a coisa"){
		printf("\nLivro disponivel");
	}
	else if (livro, "o cemitério"){
		printf("\nLivro disponivel");
	}
	else if (livro, "é assim que acaba"){
		printf("\nLivro disponivel");
	}
    else
    {
    	printf("nao disponivel");
	}
 
}

int main() {
    setlocale(LC_ALL,"portuguese");
 
struct dados_usuario usuario;

char reserva;
char livro;
int escolha;
char categoriaEscolhida[26];
char devolucao;
char livroEscolhido[26];

 printf("=== Biblioteca Senai ===");
 printf("\n\n=== Faça seu cadastro ===");

 printf("\n\nNome completo de usuário: ");
 gets(usuario.usuario);

 printf("Idade: ");
 scanf("%d", &usuario.idade);
 fflush(stdin);

 printf("Número da matrícula: ");
 gets(usuario.numeroMatricula);

 system("cls");

 printf("BEM VINDO Á BIBLIOTECA\n");
 
    printf("\n\nPara começar informe sua categoria de livros preferida.");
    
    printf("\n\n Categoria: ");
    scanf("%s", &categoriaEscolhida);

    system("cls");

    categoriaLivro(categoriaEscolhida);

    printf("\n=== MENU DA BIBLIOTECA ===\n");

    printf("\n=== 1 - Biblioteca pessoal  ===");
    printf("\n=== 2 -    categorias       ===");
    printf("\n=== 3 -    Devoluções       ===");
    printf("\n=== 4 -     Reservas        ===");
    printf("\n\nEscolha a opção desejada: ");
    scanf("%d", &escolha);
   
    system("cls");

    switch (escolha)
  {
  case 1:
    printf("\n=== BEM VINDO A SUA BIBLIOTECA ===\n");
    printf("\nAqui você adiociona seus livros preferidos e organizam da seu jeito");
    break;
  case 2:
    printf("\n\n Categoria: ");
    scanf("%s", &categoriaEscolhida);
    break;
    case 3:
     printf("\n=== DEVOLUÇÕES DE LIVROS ===\n");
     printf("\nNome do livro a ser devolvido: ");
     scanf("%s", &livro);
     printf("\nData estimada para devolução: ");
     scanf("%s", &devolucao);
     break;
     case 4:
     	printf("\n=== RESERVAS DE LIVROS ===");
     	printf("\n\n  ===== Livros ====");
     	printf("\n  o pequeno principe");
     	printf("\n  os tres porquinhos");
     	printf("\n  o cemitério");
     	printf("\n  é assim que acaba");
     	printf("\n  romeu e julieta");
     	printf("\n\nQual livro você deseja reservar: ");
     	scanf("%s", &livroEscolhido);
     	
     	livroDisponivel(livroEscolhido);
     	break;
  default :
  printf("não temos essa função");
    break;
  }
   
    
    return 0;
}