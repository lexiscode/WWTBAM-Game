#include <stdio.h>

int main()
{
    //Introductory Message
    puts("WHO WANTS TO BE A MILLIONAIRE!!!\n");
    //To Start/Exit the game
    int init_game;
    printf("Input 1 to BEGIN or 0 to WALKAWAY:");
    scanf("%d",&init_game);
    //Response on the user's input
    if(init_game<=1 && init_game>=1){
        puts("\nThe Game Has Began! lETS GOOO!!!\n");
    }
    else if(init_game<1 && init_game>=0){
        puts("\nYou have walked away from becoming a millionaire!\n");
        puts("SHAME ON YOU! LOLZZ...");
    }
    else{
        puts("You entered an invalid input, retry. Bye!\n");
    }
    //STARTING THE GAME
    if(init_game==1){
        //First Question
        int ans1;
        puts("Question A: What's the name of a place you go to see lots of animals?");
        puts("(1) Museum\n(2) Church\n(3) Concert\n(4) Zoo\n");
        printf("Enter your answer:");
        scanf("%d",&ans1);
        if(ans1==4){
            puts("Correct Answer!\nYou have won a sum of NGN500,000!\n");
            puts("Next Question will fetch you a sum of NGN1,000,000.\n");
            //Second Question
            int ans2;
            puts("Question B: How many legs does a spider have?");
            puts("(1) Five\n(2) Eight\n(3) Three\n(4) Four\n");
            printf("Enter your answer:");
            scanf("%d",&ans2);

            if(ans2==2){
                puts("Correct Answer!\nYou have won a sum of NGN1,000,000!");
                puts("Congratulations!!!\n");
            }
            else{
                puts("Wrong Answer!");
                puts("You are walking away with a sum of NGN500,000!");
                puts("Congratulations!!!");
            }

        }
        else{
            puts("Wrong Answer!\nGoodbye and try again in the future!");
        }

    }

    return 0;
}
