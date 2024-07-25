#include <stdio.h>
#include<string.h>

int attempt = 0;
char id[] = "kirtanmalakar@gmail.com";
char passcode[] = "deerwalk";

int valididcode() 
{
    char email[40], password[20];
    do {
        printf("Enter the E-mail: ");
        scanf("%s", &email);
        printf("Enter the Password: ");
        scanf("%s", &password);
        

        if (strcmp(email,id) != 0 && strcmp(password,passcode) != 0) 
		{
            attempt++;
            if (attempt < 3) {
                printf("\nIncorrect ID or Password. Try again!\n");
                printf("%d attempt(s) left.\n\n", 3 - attempt);
            } else {
                printf("Your portal has been closed.\n");
                return 0;
            }
        }
    } while (strcmp(email,id) != 0 && strcmp(password,passcode) != 0);

    printf("\nWelcome to the portal!\n");
    return 1;
}

void namelist() 
{
    printf("\n------Students of BCA------");
    printf("\n601. Aarav Jung KC");
    printf("\n602. Aananta Khanal");
    printf("\n603. Dirasha Rajbhandari");
    printf("\n604. Kirtan Malakar");
    printf("\n605. Paruhangma Limbu");
    printf("\n606. Rubish Karmarcharya");
    printf("\n607. Sangam Sunwar");
    printf("\n608. Deep Singh Rawal\n");
}

void putmarks(int *marks) 
{
    printf("\nSubjects\n");
    
    printf("\nMath= ");
    scanf("%d", &marks[0]);
    printf("\nEnglish= ");
    scanf("%d", &marks[1]);
    printf("\nC-programming= ");
    scanf("%d", &marks[2]);
    printf("\nMicroProcessor= ");
    scanf("%d", &marks[3]);
    printf("\nAccount= ");
    scanf("%d", &marks[4]);    

    int sum = 0;
    for (int i = 0; i < 5; i++) 
	{
        sum = sum + marks[i];
    }
    
    float percentage = (sum / 500.0) * 100;
    float gpa = percentage / 25;
    
    printf("\nTotal Marks: %d\n", sum);
    printf("\nPercentage= %.2f%%\n", percentage);
    
    if (percentage >= 90.0) {
        printf("\nGPA= %.2f 'A+' Outstanding", gpa);
    } else if (percentage >= 80.0) {
        printf("\nGPA= %.2f 'A' Excellent", gpa);
    } else if (percentage >= 70.0) {
        printf("\nGPA= %.2f 'B+' Very Good", gpa);
    } else if (percentage >= 60.0) {
        printf("\nGPA= %.2f 'B' Good", gpa);
    } else if (percentage >= 50.0) {
        printf("\nGPA= %.2f 'C+' Average", gpa);
    } else {
        printf("\nGPA= %.2f 'C' Failed", gpa);
    }
}

void failsubject(int marks[])
{
	printf("\n");
    if (marks[0] <= 40) {
        printf("\nFailed in Math\n");
    }
    if (marks[1] <= 40) {
        printf("\nFailed in English");
    }
    if (marks[2] <= 40) {
        printf("\nFailed in C-programming");
    }
    if (marks[3] <= 40) {
        printf("\nFailed in Microprocessor");
    }
    if (marks[4] <= 40) {
        printf("\nFailed in Account");
    }
}

int main() 
{
    char count;
    int opt;
    if (!valididcode()) {
        return 0;
    }

    do {
        namelist();
        printf("\nEnter Your Choice: ");
        scanf("%d", &opt);
        printf("\n");
        int marks[5] = {0};  // Initialize the array to store marks

        switch (opt) {
            case 601:
                printf("Result of Aarav Jung KC");
                putmarks(marks);
                failsubject(marks);
                break;
            case 602:
                printf("Result of Aananta Khanal\n");
                putmarks(marks);
                failsubject(marks);
                break;
            case 603:
                printf("Result of Dirasha Rajbhandari\n");
                putmarks(marks);
                failsubject(marks);
                break;
            case 604:
                printf("Result of Kirtan Malakar\n");
                putmarks(marks);
                failsubject(marks);
                break;
            case 605:
                printf("Result of Paruhangma Limbu\n");
                putmarks(marks);
                failsubject(marks);
                break;
            case 606:
                printf("Result of Rubish Karmarcharya\n");
                putmarks(marks);
                failsubject(marks);
                break;
            case 607:
                printf("Result of Sangam Sunwar\n");
                putmarks(marks);
                failsubject(marks);
                break;
            case 608:
                printf("Result of Deep Singh Rawal\n");
                putmarks(marks);
                failsubject(marks);
                break;
            default:
                printf("Invalid option");
        }
        printf("\nDo you want to continue [Y/N]: ");
        scanf(" %c", &count);
        printf("\n");
    } while (count == 'Y' || count == 'y');
    printf("-----LOGOFF-----");

    return 0;
}

