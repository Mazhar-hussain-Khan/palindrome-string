/* Name:Mazhar Hussain     Reg No:20MDELE098
email: 20MDELE098@uetmardan.edu.pk.*/
// calculate vowels in string //
#include<stdio.h>
#include<strings.h>
int main(){
    char string[50];
    char reverse[50];
    printf("enter the string\n");
    gets(string);
    strcpy(reverse,string);
    strrev(reverse);
    if(strcmp(string,reverse)==0){
	printf("the string is palindrome\n");
}
else 
printf("not palindrome\n");
return 0;
}

