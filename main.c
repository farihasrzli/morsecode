///Name     : NOR FARIHA SERZALI
///ID       : B04180022
///Task     : Individual Assignment 2
///Question : Morse Code
///Date     : 1 August 2018


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void checkuserin(char code[1000]);
void getuserin(char code[1000]);


void main()
{
    char again = 'y';

    while( again == 'y'){
    char code[1000]={};

    printf("\nNo space between each symbols of a character");
    printf("\nOne space is separated for each character");
    printf("\nEach word is separated by 4 spaces");

    printf("\nEnter a morse code that you want to translate : ");
    getuserin(code);
    checkuserin(code);
    printf("\nWould you like to try again? Press y for yes or n for no : ");
    scanf(" %c",&again);
    getchar();
    while(again != 'y' && again != 'n'){
            printf("\n Invalid command!!\nPlease re-enter ur command: ");
    scanf(" %c",&again);
    getchar();
}
    system("cls");
}

}

void getuserin(char code[1000])
{
    gets(code);
}

void checkuserin(char code[1000])
{
    int counter;
    for(counter=0;counter<1000;counter++){
    if(code[counter]=='.' && code[counter+1]=='-' && code[counter+2]!='.' && code[counter+2]!='-'){
        printf("A");
        counter+=2;
    }
    else if (code[counter]=='-' && code[counter+1]=='.' && code[counter+2]=='.' && code[counter+3]=='.'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("B");
        counter+=4;
    }
    else if (code[counter]=='-' && code[counter+1]=='.' && code[counter+2]=='-' && code[counter+3]=='.'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("C");
        counter+=4;
    }
    else if (code[counter]=='-' && code[counter+1]=='.' && code[counter+2]=='.' && code[counter+3]!='.'&& code[counter+3]!='-'){
        printf("D");
        counter+=3;
    }
    else if (code[counter]=='.' && code[counter+1]!='.' && code[counter+1]!='-' ){
        printf("E");
        counter+=1;
    }
    else if (code[counter]=='.' && code[counter+1]=='.' && code[counter+2]=='-' && code[counter+3]=='.'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("F");
        counter+=4;
    }
    else if (code[counter]=='-' && code[counter+1]=='-' && code[counter+2]=='.' && code[counter+3]!='.'&& code[counter+3]!='-'){
        printf("G");
        counter+=3;
    }
    else if (code[counter]=='.' && code[counter+1]=='.' && code[counter+2]=='.' && code[counter+3]=='.'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("H");
        counter+=4;
    }
    else if (code[counter]=='.' && code[counter+1]=='.'&& code[counter+2]!='.' && code[counter+2]!='-')  {
        printf("I");
        counter+=2;
    }
    else if (code[counter]=='.' && code[counter+1]=='-'&& code[counter+2]=='-' && code[counter+3]=='-'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("J");
        counter+=4;
    }
    else if (code[counter]=='-' && code[counter+1]=='.' && code[counter+2]=='-' && code[counter+3]!='.'&& code[counter+3]!='-'){
        printf("K");
        counter+=3;
    }
    else if (code[counter]=='.' && code[counter+1]=='-' && code[counter+2]=='.' && code[counter+3]=='.'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("L");
        counter+=4;
    }
    else if (code[counter]=='-' && code[counter+1]=='-' && code[counter+2]!='.' && code[counter+2]!='-')  {
        printf("M");
        counter+=2;
    }
    else if (code[counter]=='-' && code[counter+1]=='.' && code[counter+2]!='.' && code[counter+2]!='-')  {
        printf("N");
        counter+=2;
    }
    else if (code[counter]=='-' && code[counter+1]=='-' && code[counter+2]=='-' && code[counter+3]!='.' && code[counter+3]!='-'){
        printf("O");
        counter+=3;
    }
    else if (code[counter]=='.' && code[counter+1]=='-' && code[counter+2]=='-' && code[counter+3]=='.' && code[counter+4]!='-' && code[counter+4]!='.'){
        printf("P");
        counter+=4;
    }
    else if (code[counter]=='-' && code[counter+1]=='-' && code[counter+2]=='.' && code[counter+3]=='-' && code[counter+4]!='-' && code[counter+4]!='.'){
        printf("Q");
        counter+=4;
    }
    else if (code[counter]=='.' && code[counter+1]=='-' && code[counter+2]=='.' && code[counter+3]!='.' && code[counter+3]!='-'){
        printf("R");
        counter+=3;
    }
    else if (code[counter]=='.'&& code[counter+1]=='.'&& code[counter+2]=='.' && code[counter+3]!='.' && code[counter+3]!='-'){
        printf("S");
        counter+=3;
    }
    else if (code[counter]=='-' && code[counter+1]!='.'&& code[counter+1]!='-' ){
        printf("T");
        counter+=1;
    }
    else if (code[counter]=='.'&& code[counter+1]=='.'&& code[counter+2]=='-' && code[counter+3]!='.'&& code[counter+3]!='-'){
        printf("U");
        counter+=3;
    }
    else if (code[counter]=='.'&& code[counter+1]=='.'&& code[counter+2]=='.' && code[counter+3]=='-'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("V");
        counter+=4;
    }
    else if (code[counter]=='.'&& code[counter+1]=='-'&& code[counter+2]=='-' && code[counter+3]!='.'&& code[counter+3]!='-'){
        printf("W");
        counter+=3;
    }
    else if (code[counter]=='-'&& code[counter+1]=='.'&& code[counter+2]=='.' && code[counter+3]=='-'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("X");
        counter+=4;
    }
    else if (code[counter]=='-'&& code[counter+1]=='.'&& code[counter+2]=='-' && code[counter+3]=='-'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("Y");
        counter+=4;
    }
    else if (code[counter]=='-'&& code[counter+1]=='-'&& code[counter+2]=='.' && code[counter+3]=='.'&& code[counter+4]!='-' && code[counter+4]!='.'){
        printf("Z");
        counter+=4;
    }
    else if(code[counter]==' '&& code[counter+1]==' ' && code[counter+2]==' '){
        printf(" ");
        counter+=2;
    }

    else if (code[counter]=='.'&& code[counter+1]=='-'&& code[counter+2]=='-' && code[counter+3]=='-'&& code[counter+4]=='-' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("1");
        counter+=5;
    }
    else if (code[counter]=='.'&& code[counter+1]=='.'&& code[counter+2]=='-' && code[counter+3]=='-'&& code[counter+4]=='-' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("2");
        counter+=5;
    }
    else if (code[counter]=='.'&& code[counter+1]=='.'&& code[counter+2]=='.' && code[counter+3]=='-'&& code[counter+4]=='-' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("3");
        counter+=5;
    }
    else if (code[counter]=='.'&&code[counter+1]=='.'&& code[counter+2]=='.' && code[counter+3]=='.'&& code[counter+4]=='-' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("4");
        counter+=5;
    }
    else if (code[counter]=='.' && code[counter+1]=='.'&& code[counter+2]=='.' && code[counter+3]=='.'&& code[counter+4]=='.' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("5");
        counter+=5;
    }
    else if (code[counter]=='-' && code[counter+1]=='.' && code[counter+2]=='.' && code[counter+3]=='.'&& code[counter+4]=='.' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("6");
        counter+=5;
    }
    else if (code[counter]=='-' && code[counter+1]=='-' && code[counter+2]=='.' && code[counter+3]=='.'&& code[counter+4]=='.' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("7");
        counter+=5;
    }
    else if (code[counter]=='-' && code[counter+1]=='-' && code[counter+2]=='-' && code[counter+3]=='.'&& code[counter+4]=='.' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("8");
        counter+=5;
    }
    else if (code[counter]=='-'&&code[counter+1]=='-'&& code[counter+2]=='-' && code[counter+3]=='-'&& code[counter+4]=='.' && code[counter+5]!='.' && code[counter+5]!='-'){
        printf("9");
        counter+=5;
    }
    else if (code[counter]=='-'&&code[counter+1]=='-'&& code[counter+2]=='-' && code[counter+3]=='-'&& code[counter+4]=='-' && code[counter+5]!='-' && code[counter+5]!='-'){
        printf("0");
        counter+=5;
    }
    else if(code[0]=='\0'){
            system("cls");
    printf("Invalid morse code");break;
    }
    else if (code[counter]=='\0'){
        printf("\nSucess translation ... Process Completed!!!!");break;
    }
    else {
        system("cls");
        printf("Invalid morse code !! ");break;
    }

    }
}
