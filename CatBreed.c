/*This program determines what cat breed goes best with the user*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char disposition, shed, liveSpace, adopt;
    char tryAgain = 'y';

    while (tryAgain == 'y')
    {
        printf("Do you like a playful cat or calm cat? Enter 'p' or 'c': ");
        scanf(" %c", &disposition);

        printf("Is it okay if your cat sheds? Enter 'y' or 'n': ");
        scanf(" %c", &shed);

        printf("Would you like your cat to be indoor or outdoor? Enter 'i' or 'o': ");
        scanf(" %c", &liveSpace);

        if (disposition == 'p')
        {
            if (shed == 'y')
            {
                if (liveSpace == 'i')
                {
                    printf("\n\nYour perfect cat is a Maincoon! :)\n");
                }
                else if (liveSpace == 'o')
                {
                    printf("\n\nYour perfect cat is a Persian! :)\n");
                }
            }
            if (shed == 'n')
            {
                if (liveSpace == 'i')
                {
                    printf("\n\nYour perfect cat is a Cornish Rex! :)\n\n");
                }
                else if (liveSpace == 'o')
                {
                    printf("\n\nYour perfect cat is a Simease! :)\n\n");
                }
            }
        }

        if (disposition == 'c')
        {
            if (shed == 'y')
            {
                if (liveSpace == 'i')
                {
                    printf("\n\nYour perfect cat is a Tabby Cat! :)\n\n");
                }
                else if (liveSpace == 'o')
                {
                    printf("\n\nYour perfect cat is a Ragdoll! :)\n\n");
                }
            }
            if (shed == 'n')
            {
                if (liveSpace == 'i')
                {
                    printf("\n\nYour perfect cat is a American Shorthair! :)\n\n");
                }
                else if (liveSpace == 'o')
                {
                    printf("\n\nYour perfect cat is a Munchkin! :)\n\n");
                }
            }
        }

        printf("Would you be interested in adopting: 'y' or 'n': ");
        scanf(" %c", &adopt);
        if (adopt == 'y')
        {
            printf("Awesome! Visit here for more info:\n https://www.miamidade.gov/global/service.page?Mduid_service=ser159925122910773\n\n");
            printf("Wanna test again? Enter 'y' or 'n': ");
            scanf(" %c", &tryAgain);
        }
        else
        {
            printf("Well that sucks, wanna test again? Enter 'y' or 'n': ");
            scanf(" %c", &tryAgain);
        }
    }

    return 0;
}