#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <dirent.h>
#include <string.h>

int password();
void addrecord();
void viewrecord();
void editrecord();
void editpassword();
void deleterecord();

int main(void)
{
    int menuChoice = 0;
    while(true)
	{
	    puts("\t***********************************");
	    puts("\t*PASSWORD PROTECTED PERSONAL DIARY*");
	    puts("\t***********************************");
	    puts("\n\t\tMAIN MENU");
	    puts("\n\tADD RECORD\t[1]");
	    puts("\tVIEW RECORD\t[2]");
	    puts("\tEDIT RECORD\t[3]");
	    puts("\tDELETE RECORD\t[4]");
	    puts("\tEDIT PASSWORD\t[5]");
	    puts("\tEXIT\t\t[6]");
	    printf("\n\tENTER YOUR CHOICE:");

	    scanf("%i", &menuChoice);
	    switch(menuChoice)
		{
		case 1:
		    addrecord();
		    break;
		case 2:
		    viewrecord();
		    break;
		case 6:
		    return 0;
		}
	}
}

void addrecord()
{
    int year = 0;
    int month = 0;
    int day = 0;
    int hours = 0;
    int minutes = 0;
    char name[20];
    char place[20];
    char duration[5];
    char note[150];
    char yesno;

    puts("\t\t*************************");
    puts("\t\t*WELCOME TO THE ADD MENU*");
    puts("\t\t*************************\n");
    printf("\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:");
    scanf("%i-%i-%i", &year, &month, &day);
    printf("\n\tENTER TIME:[hh:mm]:");
    scanf("%i:%i", &hours, &minutes);
    printf("\tENTER NAME:");
    scanf("%s", name);
    printf("\tENTER PLACE:");
    scanf("%s", place);
    printf("\tENTER DURATION:");
    scanf("%s", duration);
    printf("\tNOTE:");
    scanf("%s", note);
    puts("\nYOUR RECORD IS ADDED...");
    printf("\tADD ANOTHER RECORD...<Y/N>:");
    scanf(" %c", &yesno);
    getchar();

    switch(yesno)
	{
	case 'y':
	case 'Y':
	    addrecord();
	    break;
	case 'n':
	case 'N':
	    break;
	default:
	    puts("INVALID INPUT... RETURNING TO MAIN MENU");
	}
}

void viewrecord()
{
    char * recordList[20];
    char * recordToView = NULL;
    int i = 0;
    int menuChoice;

    struct dirent * de;
    DIR *dr = opendir("./records");
    if(dr == NULL)
	{
	    puts("MISSING \"records\" DIRECTORY");
	    return;
	}

    FILE * record;
    char fileChar;

    puts("\n\t\t***************************");
    puts("\t\t*CURRENT AVAILABLE RECORDS*");
    puts("\t\t***************************\n");

    while((de = readdir(dr)) != NULL && i < 20)
	{
	    if(strcmp(de->d_name, ".") != 0 && strcmp(de->d_name, "..") != 0)
		{
		    recordList[i] = de->d_name;
		    i++;
		    printf("\t%i. %s\n", i, de->d_name);
		}
	}

    closedir(dr);

    printf("\tCHOOSE A RECORD TO VIEW:");
    scanf("%i", &menuChoice);

    switch(menuChoice)
	{
	case 1:
	    if(recordList[0] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[0];
	    break;
	case 2:
	    if(recordList[1] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[1];
	    break;
	case 3:
	    if(recordList[2] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[2];
	    break;
	case 4:
	    if(recordList[3] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[3];
	    break;
	case 5:
	    if(recordList[4] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[4];
	    break;
	case 6:
	    if(recordList[5] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[5];
	    break;
	case 7:
	    if(recordList[6] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[6];
	    break;
	case 8:
	    if(recordList[7] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[7];
	    break;
	case 9:
	    if(recordList[8] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[8];
	    break;
	case 10:
	    if(recordList[9] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[9];
	    break;
	case 11:
	    if(recordList[10] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[10];
	    break;
	case 12:
	    if(recordList[11] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[11];
	    break;
	case 13:
	    if(recordList[12] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[12];
	    break;
	case 14:
	    if(recordList[13] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[13];
	    break;
	case 15:
	    if(recordList[14] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[14];
	    break;
	case 16:
	    if(recordList[15] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[15];
	    break;
	case 17:
	    if(recordList[16] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[16];
	    break;
	case 18:
	    if(recordList[17] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[17];
	    break;
	case 19:
	    if(recordList[18] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[18];
	    break;
	case 20:
	    if(recordList[19] == NULL)
		{
		    puts("RECORD SLOT EMPTY");
		    break;
		}
	    recordToView = recordList[19];
	default:
	    puts("\nINVALID SLOT CHOICE... RETURNING TO MAIN MENU\n");
	    return;
	}

    printf("%s\n", recordToView);

    puts("\tHOW WOULD YOU LIKE TO VIEW:\n");
    puts("\t1.RECORD OF WHOLE DAY.");
    puts("\t2.RECORD OF FIX TIME.\n");
    printf("\t\tENTER YOUR CHOICE:");

    scanf("%i", &menuChoice);

    switch(menuChoice)
	{
	case 1:
	    record = fopen(recordToView, "r");

	    if(record == NULL)
		{
		    puts("\nRECORD NOT FOUND... RETURNING TO MAIN MENU\n");
		    return;
		}

	    do{
		fileChar = fgetc(record);
		printf("%c", fileChar);
	    }while(fileChar != EOF);

	    fclose(record);
	    break;
	case 2:

	    break;
	default:
	    puts("\nINVALID CHOICE... RETURNING TO MAIN MENU\n");
	    return;
	}
}
