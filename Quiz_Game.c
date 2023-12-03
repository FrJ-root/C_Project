#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;

    printf("   Welcome to the Game\n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);
    if(i==7)
    {
        printf("The game has started\n\n");
    }
    else if(i==0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalide\n\n");
    }
    if(i==7)
    {
        printf("1) Which one is the first search engine in  internet?\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altavista\n");

        printf("Entrer Your Answer : ");
        scanf("%d", &ans1);

        if(ans1==2)
        {
            printf("Correct\n");
            point1=5;
            printf("You have scored %d point\n", point1);
        }
        else
        {
            printf("Wrong\n");
            point01=0;
            printf("You have scored %d point\n", point01);
        }
        printf("2) Which one is the fist web browser invented in 1990?\n");
        printf("1) Internet explorer\n");
        printf("2) Mosaic\n");
        printf("3) Mozilla\n");
        printf("4) Nexus\n");

        printf("Entrer Your Answer : ");
        scanf("%d",  &ans2);

        if(ans2==4)
        {
            printf("Correct\n");
            point2=5;
            printf("You have scored %d point\n", point2);
        }
        else
        {
            printf("Wrong\n");
            point02=0;
            printf("You have scored %d point\n", point02);
        }
        printf("3) First computer virus is known as?\n");
        printf("1) Rabbit\n");
        printf("2) Creeper Virus\n");
        printf("3) Elk Cloner\n");
        printf("4) SCA Virus\n");

        printf("Enter your answer : ");
        scanf("%d", &ans3);
        if(ans3==2)
        {
            printf("Correct\n");
            point3=5;
            printf("You have scored %d point\n", point3);
        }
        else
        {
            printf("Wrong\n");
            point03=0;
            printf("You have scored %d point\n", point03);
        }
        printf("4) Firewall in computer is used for?\n");
        printf("1) Security\n");
        printf("2) Data transmition\n");
        printf("3) Monitoing\n");
        printf("4) Authentication\n");
        printf("Entrer Your answer: ");
        scanf("%d", &ans4);
        if(ans4==3)
        {
            printf("Correct\n");
            point4=5;
            printf("You have scored %d point\n",  point4);
        }
        else
        {
            printf("Wrong\n");
            point04=0;
            printf("You have scored %d point\n", point04);
        }
    }
return 0;
}

