#include<stdio.h>
#include<string.h>
int main(void)
{
char string[100][100],input[100];

int ar_pos[100];    /* stores the indexes of the substrings stored in the 2-D array that are repeated*/

int len, i, j;                  /*len is length of substring  , i,j are looping variables*/

int pos = 0, count = 0, res =0, flag=0;
int ar_index=0;               /* variable used for refering to indices of array*/
scanf("%s", input);
scanf("%d", &len);

                      /*input the string and length of sub string from the console*/

char check[len+1];    /* string used for making comparisions */

int subs = (strlen(input) - len + 1);    /* computing total no. of substrings in the string*/


for(i=0; i < subs; i++)
{
  for(j=0 ; j < len ; j++)
    string[i][j] = input[j + pos];  
  pos++;
}
                                /* storing all the substrings in 2D array*/



pos = 0;
for(j=0 ; j < subs ; j++)
{
  strcpy(check , string[j]);
    for(i=pos+1 ; i <= subs ; i++)
    {
      res = strcmp(check , string[i]);
      if(res == 0)
        ar_pos[ar_index++] = i;  
    }
    pos++;
}
ar_pos[ar_index++] = 0;
                              /* storing the indices of repeated substrings in a array*/



for(i=0; i < subs ; i++)
{
  j=0;
  while(ar_pos[j] != 0)
  {
    if(i == ar_pos[j])
    {
      flag=1;
      break;
    }
    j++;
  }
  if(flag == 0)
    count++;
  flag=0;
}
                                 /* counting the no. of distinct substrings */

printf("%d", count); 
return 0;
}
