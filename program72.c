#include<stdio.h>
void Reverse(char str[])
{
  char *start,*end;
  char temp;
  if(str==NULL)
  {return;}

  start=str;
  end=str;
  while(*end!='\0')
{
    end++;
}
 end--;
 while(start<end)
 {
   temp=*start;
   *start=*end;
   *end=temp;
   start++;
   end--;
 }
}
int main()
{
  char Arr[10];
  int iRet=0;

  printf("Enter String\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']c",Arr);
  
  Reverse(Arr);
  printf("Reverse String is:%s\n",Arr);
  return 0;
}