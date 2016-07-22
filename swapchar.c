#include <stdio.h>
#include<string.h>
int main(void) {
    char a[20],temp;
    int i;
    scanf("%s",a);
    for(i=0;i<strlen(a);i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    printf("%s",a);
	// your code goes here
	return 0;
}

