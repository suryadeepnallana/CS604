//No toupper() or any other C function.
#include<stdio.h>
int main ()
{
    char ch[100];
    int no;
    printf("Enter a lowercase character :\n");
    scanf("%c", &ch);
    for (i=0; ch[i]!='\0';i++){
      if(ch[i] >= 'a' && ch[i] <= 'z') {
         s[i] = s[i] - 32;
         s[i]=no;
      }
   }
    //TODO: convert lowercase character to uppercase. You are not allowed to use
    //if or switch. 
    //TODO: for instance, if ch stores char a, then char A should be stored into no
    printf("Letter in capital  : %c\n", no);
    return 0;


}
