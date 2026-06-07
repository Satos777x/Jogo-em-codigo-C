/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

    #include <stdio.h>
    
    int main() {
    
        int ouro = 0;
        int energia = 50;
        int opcao;
        char nome[20];
    
        printf("Qual o nome do personagem? ");
        scanf("%s", nome);
    
        do {
    
            printf("\n===== MENU =====\n");
            printf("1 - Explorar\n");
            printf("2 - Descansar\n");
            printf("3 - Ver Status\n");
            printf("4 - Sair do jogo\n");
    
            printf("Digite sua opcao: ");
            scanf("%d", &opcao);
    
            switch(opcao) {
    
                case 1: {
    
                    printf("\n%s entrou na floresta!\n", nome);
    
                    if(energia >= 10) {
    
                        energia -= 10;
    
                        int evento;
    
                        printf("\nEscolha um caminho:\n");
                        printf("1 - Caverna\n");
                        printf("2 - Atravessar o Rio Capibaribe\n");
                        printf("3 - Castelo Mal-Assombrado\n");
    
                        printf("Opcao: ");
                        scanf("%d", &evento);
    
                        switch(evento) {
    
                            case 1: {
    
                                int escolha1;
    
                                printf("\nEnquanto explorava a caverna, voce encontrou um bau protegido por um urso!\n");
    
                                printf("1 - Lutar com o urso\n");
                                printf("2 - Fugir\n");
                                printf("3 - Tentar pegar o bau furtivamente\n");
    
                                printf("Sua escolha: ");
                                scanf("%d", &escolha1);
    
                                switch(escolha1) {
    
                                    case 1:
    
                                        printf("\nParabens! Voce venceu a luta!\n");
    
                                        energia -= 30;
                                        ouro += 25;
    
                                        printf("Voce ganhou 25 de ouro!\n");
    
                                        break;
    
                                    case 2:
    
                                        printf("\nVoce fugiu do urso!\n");
    
                                        break;
    
                                    case 3:
    
                                        printf("\nVoce tropeçou e fez barulho!\n");
    
                                        energia -= 10;
    
                                        break;
    
                                    default:
    
                                        printf("\nOpcao invalida!\n");
                                }
    
                                break;
                            }
    
                            case 2: {
    
                                int escolha2;
    
                                printf("\nEnquanto passava pelo Rio Capibaribe, encontrou um vilarejo.\n");
    
                                printf("1 - Ajudar\n");
                                printf("2 - Saquear\n");
    
                                printf("Sua escolha: ");
                                scanf("%d", &escolha2);
    
                                switch(escolha2) {
    
                                    case 1:
    
                                        printf("\nVoce ajudou os habitantes.\n");
    
                                        energia -= 10;
                                        ouro += 30;
    
                                        printf("Voce ganhou 10 moedas.\n");
    
                                        break;
    
                                    case 2:
    
                                        printf("\nVoce saqueou o vilarejo.\n");
    
                                        energia -= 30;
                                        ouro += 5;
    
                                        printf("Voce ganhou 25 moedas.\n");
    
                                        break;
    
                                    default:
    
                                        printf("\nOpcao invalida!\n");
                                }
    
                                break;
                            }
    
                            case 3: {
    
                                int escolha3;
    
                                printf("\nVoce entrou em um castelo assombrado.\n");
                                printf("Um fantasma apareceu!\n");
    
                                printf("1 - Lutar\n");
                                printf("2 - Fugir\n");
    
                                printf("Sua escolha: ");
                                scanf("%d", &escolha3);
    
                                switch(escolha3) {
    
                                    case 1:
    
                                        printf("\nVoce venceu a luta!\n");
    
                                        energia += 10;
                                        ouro += 10;
    
                                        printf("Voce ganhou 10 moedas.\n");
    
                                        break;
    
                                    case 2:
    
                                        printf("\nVoce fugiu do castelo.\n");
    
                                        energia -= 5;
    
                                        break;
    
                                    default:
    
                                        printf("\nOpcao invalida!\n");
                                }
    
                                break;
                            }
    
                            default:
    
                                printf("\nCaminho invalido!\n");
                        }
    
                    } else {
    
                        printf("\nVoce esta sem energia suficiente!\n");
                    }
    
                    break;
                }
    
                case 2:
    
                    printf("\nVoce descansou.\n");
    
                    energia += 20;
    
                    if(energia > 50) {
                        energia = 50;
                    }
    
                    printf("Energia atual: %d\n", energia);
    
                    break;
    
                case 3:
    
                    printf("\n===== STATUS =====\n");
                    printf("Personagem: %s\n", nome);
                    printf("Ouro: %d\n", ouro);
                    printf("Energia: %d\n", energia);
    
                    break;
    
                case 4:
    
                    printf("\nVoce saiu do jogo.\n");
    
                    break;
    
                default:
    
                    printf("\nOpcao invalida!\n");
            }
    
            if(ouro >= 100) {
                printf("\nPARABENS! Voce ganhou o jogo!\n");
                break;
            }
    
            if(energia <= 0) {
                printf("\nVoce ficou sem energia. Você Perdeu!\n");
                break;
            }
    
        } while(opcao != 4);
    
        return 0;
    }