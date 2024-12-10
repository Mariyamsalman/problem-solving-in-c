#include <stdio.h>
#include <string.h>

int main() {
    char id[50],valid_id[] = "maryam_salman";
    int password,valid_password = 123;
    printf("Enter your ID: ");
    scanf("%s", id);

    // First switch to check ID validity
    switch (strcmp(id, valid_id) == 0) {
        case 1: // ID is valid
            printf("Enter your password: ");
            scanf("%d", &password);

            // Nested switch to check password validity
            switch (password == valid_password) {
                case 1:
                    printf("Your name is Maryam Salman.\n");
                    break;
                case 0:
                    printf("Incorrect password.\n");
                    break;
            }
            break;

        case 0: // ID is invalid
            printf("Incorrect ID.\n");
            break;

        default:
            printf("An unexpected error occurred.\n");
    }

    return 0;
}

