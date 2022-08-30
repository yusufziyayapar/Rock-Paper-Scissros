#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curses.h>

void game(char choose){
int random;
int score = 0,total=0;
    srand(time(NULL));
random = rand()%3;
//Computer's choice--> (0 = rock, 1 = paper, 2 = scissors)

if(random == 0 && (choose =='R'|| choose == 'r')){
    printf("Computer = Rock \n");
    printf("TIE!\n");

    printf("Score: %d",total);
} if(random == 1 && (choose == 'R'|| choose == 'r')){
        printf("Computer = Paper \n");
        printf("LOST!\n");

        score --;
        total+=score;
        printf("Score: %d",total);
} if(random == 2 && (choose == 'R'|| choose == 'r')){
        printf("Computer = Scissors \n");
        printf("WIN!\n");

        score++;
        total+=score;
        printf("Score: %d",total);
} if(random == 0 && (choose =='P'|| choose == 'p') ){
        printf("Computer = Rock \n");
        printf("WIN!\n");

        score++;
        total+=score;
        printf("Score:%d ",total);
} if(random == 1 && (choose == 'P'|| choose == 'p')){
        printf("Computer = Paper \n");
        printf("TIE!\n");

        printf("Score: %d",total);
} if(random == 2 && (choose == 'P'|| choose == 'p')){
        printf("Computer = Scissors\n");
        printf("LOST!\n");

        score --;
        total+=score;
        printf("Score: %d",total);
} if(random == 0 && (choose == 'S'|| choose == 's')){
        printf("Computer = Rock \n");
        printf("LOST!\n");

        score --;
        total+=score;
        printf("Score: %d",total);
} if(random == 1 && (choose == 'S'|| choose == 's')){
        printf("Computer = Paper \n");
        printf("WIN!\n");

        score ++;
        total+=score;
        printf("Score: %d",total);
} if (random == 2 && (choose == 'S'|| choose == 's')){
        printf("Computer = Scissors \n");
        printf("TIE!\n");

        printf("Score: %d", total);
}
}

void entry(){
char topic[20] = {"Welcome to the game"};
for (int i = 0; i < 60; ++i) {
printf("*");
}
printf("\n%40s",topic);
printf("\n");
for (int j = 0; j <60 ; ++j) {
printf("*");
}
}


int main() {
    char play;
    char choose;
 entry();
    do {
        printf("\n\tPress  'Y' to play, 'N' to exit\n");
        scanf("%s",&play);
        if (play == 'Y' || play == 'y') {
            printf("Enter the initial letter of the option you selected\n"
                   "(Doesn't matter if it's uppercase or lowercase)\n\n");
            printf("\tRock='R'\n\tPaper:'P'\n\tScissors:'S'\n");
            scanf("%s", &choose);
            game(choose);
        }
    }while(play!='N' && play !='n' );
    system("cls");


    return 0;
}
