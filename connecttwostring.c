# include<string.h>
# include<stdio.h>
void main(){
    char str1[20],str2[20];
    printf("Enter the first string\n");
    scanf("%s",str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
    strcat(str1,str2);
    printf("%s ",str1);

}