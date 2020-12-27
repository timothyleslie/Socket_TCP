#include<netinet/in.h> // sockaddr_in   
#include<sys/types.h>  // socket   
#include<sys/socket.h> // socket   
#include<stdio.h>    // printf   
#include<stdlib.h>   // exit   
#include<string.h>   // bzero   


int main()
{
    FILE *fp = fopen("test.txt", "wb");   
  if(NULL == fp)   
  {  
    printf("File: can not open\n");
    return -1;   
  } 
  else
  {
      fwrite("abcd", sizeof(char), 4, fp);
  }
}