#include <stdio.h>

void menuSobre(void);
void menuPrincipal(void);

int main(void) {
	menuPrincipal();
	menuSobre();
    return 0;

}

//esse vai ser o menu que vai aparecer quando o usuário clicar na opção "sobre nos" no menuPrincipal
void menuSobre(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            ***************                              ///\n");
    printf("///                            ** SOBRE NOS **                              ///\n");
    printf("///                            ***************                              ///\n");
    printf("///                                                                         ///\n");
    printf("///  Prodik e um programa feito com o intuito de ajudar aqueles que querem  ///\n");
    printf("///  digitar de forma mais rapida e pratica, com a ajuda de diversos jogos  ///\n");
    printf("///  e desafios para treinar seus reflexos e habilidades de digitacao.      ///\n");
    printf("///  Seja para treinar ou apenas se divertir, Prodik podera te ajudar       ///\n");
    printf("///                                                                         ///\n");
    printf("///                     Pressione <ESC> para voltar                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

//menu principal terminado
void menuPrincipal(void) {
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///             *************************************             ///\n");
    printf("///             ** Programa de Digitacao do Kiiush **             ///\n");
    printf("///             *************************************             ///\n");
    printf("///                                                               ///\n");
    printf("///                       1 - Jogar                               ///\n");
    printf("///                       2 - Configuracoes                       ///\n");
    printf("///                       3 - Sobre Nos                           ///\n");
    printf("///                       4 - Sair                                ///\n");
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}