// C program to find first non-repeating character 
#include<stdlib.h> 
#include<stdio.h> 
#define NO_OF_CHARS 256 

/* Returns an array of size 256 containg count 
of characters in the passed char array */
int *getCharCountArray(char *str) 
{ 
int *count = (int *)calloc(sizeof(int), NO_OF_CHARS); 
int i; 
for (i = 0; *(str+i); i++) 
  count[*(str+i)]++; 
return count; 
} 

/* The function returns index of first non-repeating 
character in a string. If all characters are repeating 
then returns -1 */
int firstNonRepeating(char *str) 
{ 
int *count = getCharCountArray(str); 
int index = -1, i; 

for (i = 0; *(str+i); i++) 
{ 
  if (count[*(str+i)] == 1) 
  { 
  index = i; 
  break; 
  } 
} 
  
free(count); // To avoid memory leak 
return index; 
} 

/* Driver program to test above function */
int main() 
{ 
  int n;
  cin>>n;
  string arr[n];
  for{int i=0;i<n;i++)
  {
    cin>>arr[i];

int index = firstNonRepeating(arr[i]); 
if (index == -1) 
cout<<-1;
else
cout<<index;}

getchar(); 

return 0; 
} 
