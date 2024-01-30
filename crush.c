#include<stdio.h>
int main(){
    //design
    printf("   @@@@      @@@@\n");
    printf(" @@@@@@@@  @@@@@@@@\n");
    printf("@@@@@@Detect Love@@@\n");
    printf(" @@@@@@@@@@@@@@@@@@\n");
    printf(" @@@@@@@@@@@@@@@@@@@\n");
    printf("  @@@@@@@@BY@@@@@@@\n");
    printf("   @@@@@@@@@@@@@@@\n");
    printf("    @@@@@@@@@@@@@\n");
    printf("    ahsan iw shuvo\n");
    printf("     @@@@@@@@@\n");
    printf("      @@@@@@@\n");
    printf("       @@@@@\n");

    //answer's
    char response1;

    //question's
    printf("Do you love someone !! Do you want's to know about her feelings??? \n");
                                   printf("IF Yes then type Y/y,either type N/n \n");
    scanf("%c",&response1);
    //if yes then next questions.either dismiss here saying sorry

    //operations
    if(response1 == 'y' || response1 == 'Y'){
        printf("Congratulations \n");
              printf("\U0001F60A\n");
                    printf("Lets have a deep dive \n");


        question1();

    }
    else if(response1 == 'n' || response1 == 'N'){
        printf("Thanks for your valuable time.Keep trying to get her attention \n");

    }
    else{
        printf("It's ok motherfucker");
    }



    return 0;
}








int question1(){
    char response2;
    int i;


    printf("Do you  have an EX !\n");
    scanf("%c",&response2);
        //operations
    if(response2 == 'y' || response2 == 'Y'){
        for (/*size_t*/ i = 0; i < 10; i++)
        {
            /* code */
                    printf("Congratulations \n");
              printf("\U0001F60A\n");
        }
        

                    //printf("Lets have a deep dive \n");
                    question2();



    }
    else if(response2 == 'n' || response2 == 'N'){
        for (/*size_t*/ i = 0; i < 10; i++)
        {
            /* code */
                    printf("First time HUH!!!\n");
        printf("\U0001F60A");
        }
        

        printf("\U0001F60A");
        printf("\U0001F60A");
        printf("\U0001F60A");
        printf("\U0001F60A");

    }
    else{
        printf("Hey motherfucker, I told you to type only y/n.Your are giving invalid response.Repet it again mutherfucker.\n");
        question1();
    }

    return 0;
}
int question2(){
            char response3;
            char response4;
                char response5;
                    char response6;




                    printf("");





    return 0;
}
