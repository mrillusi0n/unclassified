#include <stdio.h>

typedef enum {
    NEGATIVE = -1,
    NOT_TESTED,
    POSITIVE,
} covid_status;

typedef struct {
    char *name;
    char *id;
    covid_status status;
} person;

covid_status test_blood(person *p) {
    // some logic that performs the test
    // and determines whether the person is infected

    return NEGATIVE;
}

int main(int argc, char const *argv[])
{
    person harry = {
        .name = "Harry P.",
        .id = "HP019823",
        .status = NOT_TESTED,
    };

    switch (test_blood(&harry)) {
        case POSITIVE: printf("Unsafe.\n"); break;
        case NEGATIVE: printf("Safe.\n"); break;
        case NOT_TESTED: printf("Not safe, yet.\n"); break;
    }

    return 0;
}