//Acctep one String from user

#include<stdio.h>
void StrCpyRevX(char *src, char *dest)
{
  if(src==NULL||dest==NULL)
  {return;}
  int iCnt=0;
  while(*src!='\0')
  {
    src++;
    iCnt++;
  }
  src--;
  while(iCnt>0)
  {
    *dest=*src;
    src--;
    dest++;
    iCnt--;
  }
  *dest='\0';
}
int main()
{
  char arr[20];
  char brr[20];
  int iRet=0;

  printf("Enter String\n");
  //fgets(Arr,40,stdin);
  scanf("%[^'\n']c",arr);
  
   StrCpyRevX(arr,brr);

  printf("After copying String is:%s\n",brr);
  return 0;
}