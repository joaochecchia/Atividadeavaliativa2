#include <stdio.h>

struct Jogador {
    char nome[30];
    char posicao;
    int forca;
};

int main() {
    struct Jogador jogadores[12];
    char time1[30], time2[30]; 
    float forcatime1 = 0.0, forcatime2 = 0.0;

    scanf("%[^\n]%*c", time1);

    for(int i = 0; i < 11; i++) {
        scanf("%[^;];%c;%d%*c", jogadores[i].nome, &jogadores[i].posicao, &jogadores[i].forca);

        if(jogadores[i].posicao == 'G') forcatime1 += 8 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'L') forcatime1 += 10 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'Z') forcatime1 += 5 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'V') forcatime1 += 8 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'M') forcatime1 += 11 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'A') forcatime1 += 12 * jogadores[i].forca;
    }

    forcatime1 /= 100;

    scanf("%[^\n]%*c", time2);

    for(int i = 0; i < 11; i++) {
        scanf("%[^;];%c;%d%*c", jogadores[i].nome, &jogadores[i].posicao, &jogadores[i].forca);

        if(jogadores[i].posicao == 'G') forcatime2 += 8 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'L') forcatime2 += 10 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'Z') forcatime2 += 5 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'V') forcatime2 += 8 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'M') forcatime2 += 11 * jogadores[i].forca;
        else if(jogadores[i].posicao == 'A') forcatime2 += 12 * jogadores[i].forca;
    }

    forcatime2 /= 100;

    printf("%s: %.2f de forca\n", time1, forcatime1);
    printf("%s: %.2f de forca\n", time2, forcatime2);

    if(forcatime1 > forcatime2) printf("%s eh mais forte\n", time1);
    else printf("%s eh mais forte\n", time2);

    return 0;
}