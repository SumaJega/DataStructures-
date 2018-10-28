/* C Program For Balancing Expressions (Parenthesis) Using Linked List*/
#include<stdio.h>
#include<string.h>
#include "LinkListPara.h"
#include "myprofile.h"
int main()
{
	documentation(__FILE__);
	char str[100];
        int i, flag = 0, data = 0;
        /* get the input from the user */
        printf("Enter ur expression:");
        fgets(str, 100, stdin);
        for (i = 0; i < strlen(str); i++) {
                /* i/p char is an open brace -push it into stack */
                if (str[i] == '(' || str[i] == '{'
                        || str[i] == '[') {
                                push(str[i]);
                                continue;
                }
                if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
                /* i/p char is a close brace - pop top from stack */
                        data = pop();
                        if ((str[i] == ')' && data != '(') || data == -1 ||
                                (str[i] == '}' && data != '{') ||
                                        (str[i] == ']' && data != '[')) {
                                /* mismatch/missing symbols */
                                flag = 1;
                                break;
                        }

                }
        }

        if (flag == 1 || header != NULL)
                printf("Not a balanced expression\n");
        else
                printf("Balanced Expression\n");
        return 0;
}
