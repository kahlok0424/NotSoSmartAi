#include "Ai.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int getStringLength(char *str){
  int i = 0;

  if( str == NULL){
	  return 0;
  }
  else{
  while( *(str + i) != '\0'){
    i++;
  }
  return i;
  }
}

char *convertToLowerCase(char *str)
{

  int i = 0;
  char *buffer;
  buffer = (char*)malloc(strlen(str)+1);
  strcpy(buffer,str);
  //convert the word to lowercase 1 by 1
  while(buffer[i] != '\0')
  {
   buffer[i] = tolower(buffer[i]);
    ++i;
  }
    return buffer;
}

int stringCompare(char *str1, char *str2){
  int lengthOfStr1 = 0;
  int lengthOfStr2 = 0;

  lengthOfStr1 = getStringLength(str1);
  lengthOfStr2 = getStringLength(str2);

  str1 = convertToLowerCase(str1);
  str2 = convertToLowerCase(str2);

  if(lengthOfStr1 != lengthOfStr2){
    return 0;
  }
  else{
    for(int i = 0; i < lengthOfStr1; i++ )
    {
      if(str1[i] != str2[i]){
        return 0;
      }
      else{
      }
    }
  }
  return 1;
}

char *extractName(char *name){

}

char *speakToAi(char *mesg){

  char *greetingmsg ="Hi,There! My name is AiMachine. What is yours?";
  mesg = convertToLowerCase(mesg);

  if(stringCompare(mesg ,"hi" ) || stringCompare(mesg ,"hello" ) || stringCompare(mesg ,"hey" ) ){
    return greetingmsg;
  }
  else if{
    
  }
  return NULL;
}
