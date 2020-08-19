#include <stdio.h>

void encrypt(char *secret)
{
    char *ptr = secret;
    while (*ptr != '\0')
    {
        /* code */
        *ptr = *ptr + 1;
        ptr++;
    }
}

void decrypt(char* secret){
    char *ptr = secret;
    while (*ptr != '\0')
    {
        /* code */
        *ptr = *ptr - 1;
        ptr++;
    }    
}

int main()
{

    char secret[] = "secretPassword987";
    printf("Your password is %s \n",secret);
    encrypt(secret);
    printf("You encrypted password is %s \n", secret);
    decrypt(secret);
    printf("You decrypted password is %s", secret);

    return 0;
}