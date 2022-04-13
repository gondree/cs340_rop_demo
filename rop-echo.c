#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char name[32];

int main() {
    printf("What's your name? "); fflush(stdout);
    read(0, name, 32);

    printf("Hi %s\n", name); fflush(stdout);

    printf("The time is currently "); fflush(stdout);
    system("/bin/date");

    char echo[100];
    printf("What do you want me to echo back? "); fflush(stdout);
    read(0, echo, 1000);
    puts(echo);

    return 0;
}
