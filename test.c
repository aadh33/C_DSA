#include <stdio.h>
#include <string.h>
int main() {
    char count; // Initialize count to 0
    int i = 0;     // Initialize i to 0
    char a[100] = "Hello_world";
    int len=strlen(a);
    // Calculate the length of the string
    for (i=0;i<len/2;i++)
    {
        count=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=count;  

    }
    printf("%s",a);

  

    return 0;
}

