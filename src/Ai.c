#include "Ai.h"
#include <stdio.h>
#include <ctype.h>

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

int stringCompare(char *str1, char *str2){
  int lengthOfStr1 = 0;
  int lengthOfStr2 = 0;

  lengthOfStr1 = getStringLength(str1);
  lengthOfStr2 = getStringLength(str2);

  if(lengthOfStr1 != lengthOfStr2){
    return 0;
  }
  else{
    for(int i = 0; i < lengthOfStr1; i++ )
    {
      //str1[i] = tolower(str1[i]);
      //str2[i] = tolower(str2[i]);
      if(str1[i] != str2[i]){
        return 0;
      }
      else{
      }
    }
  }
  return 1;
}

char *speakToAi(char *mesg){
  return NULL;
}
