#include <stdio.h>

void menuSobre(void);
void menuPrincipal(void);
void menuConfig(void);
void menuConta(void);
void menuReset(void);

int main(void) {
	menuPrincipal();
	menuSobre();
	menuConfig();
	menuConta();
	menuReset();
    return 0;

}

//menu sobre nos
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

//menu principal
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
    printf("///                       0 - Sair                                ///\n");
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

//menu de configuracoes
void menuConfig (void) {
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                      ** Configuracoes **                      ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                                                               ///\n");
    printf("///                       1 - Conta                               ///\n");
    printf("///                       2 - Resetar Dados                       ///\n");
    printf("///                                                               ///\n");
    printf("///                  Pressione <ESC> para voltar                  ///\n");
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

//menu da conta
void menuConta (void) {
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                           ***********                         ///\n");
    printf("///                           ** Conta **                         ///\n");
    printf("///                           ***********                         ///\n");
    printf("///                                                               ///\n");
    printf("///                       1 - Criar Conta                         ///\n");
    printf("///                       2 - Entrar em conta                     ///\n");
    printf("///                                                               ///\n");
    printf("///                  Pressione <ESC> para voltar                  ///\n");
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

//menu de resetar os dados
void menuReset (void) {
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                      ** Configuracoes **                      ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                                                               ///\n");
    printf("///       Tem certeza que deseja resetar os dados da conta?       ///\n");
    printf("///                                                               ///\n");
    printf("///                 (Sim)                   (Nao)                 ///\n");
    printf("///                                                               ///\n");
    printf("///                                                               ///\n");
    printf("///                  Pressione <ESC> para voltar                  ///\n");
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}