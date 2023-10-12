#include <stdio.h>

int main() {
    int x;
    int apneia_max_masculino=0;
    int apneia_max_feminino=0;
    int apneia_media_masculino=0;
    int apneia_media_feminino=0;
    printf("Qual a quantidade de alunos:\n");
    scanf("%d", &x);
    for (int i=0;i<x;i++){
        char nome[100];
        char sexo;
        int apneia_tempo = 0;
        printf("Informe o nome do aluno:\n");
        scanf("%s", nome);
        printf("Informe o sexo (M/F):\n");
        scanf(" %c", &sexo);
        printf("Informe o tempo de apneia (em segundos):\n");
        scanf("%d", &apneia_tempo);
        if (sexo=='M'||sexo=='m') {
            if (apneia_tempo>apneia_max_masculino) {
                apneia_max_masculino=apneia_tempo;
            }
            apneia_media_masculino+=apneia_tempo;
        } else if(sexo=='F'||sexo=='f'){
            if (apneia_tempo>apneia_max_feminino) {
                apneia_max_feminino=apneia_tempo;
            }
            apneia_media_feminino+=apneia_tempo;
        } else{
            printf("Sexo inválido. Informe 'M' ou 'F'.\n");
            i--;
        }
    }
    if(apneia_media_masculino>0){
        apneia_media_masculino/=x;
    }
    if(apneia_media_feminino>0){
        apneia_media_feminino/=x;
    }
    printf("Estatísticas de apneia do sono:\n");
    printf("Tempo máximo de apneia (masculino): %d segundos\n",apneia_max_masculino);
    printf("Tempo máximo de apneia (feminino): %d segundos\n",apneia_max_feminino);
    printf("Tempo médio de apneia (masculino): %d segundos\n",apneia_media_masculino);
    printf("Tempo médio de apneia (feminino): %d segundos\n",apneia_media_feminino);

    return 0;
}