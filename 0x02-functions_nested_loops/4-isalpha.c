#include "main.h"
/**
* _isalpha - print a letter
* @c: decelaration
* Return: 0 and 1
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||      
(c >= 'A' && c <= 'Z'))    
return (1);  
else    
return (0);
}
