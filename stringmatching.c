#include <stdio.h>
#include <string.h>

int strStr(char *str1 ,  char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int one = 0 ; int two = 0;

    while(one < len1 && two < len2){
        if(str1[one]==str2[two]){
            if(two == len2-1){
                return one-len2+1;
            }else{
                one++;two++;
            }
        }
        else{
            one = one - two + 1;
            two=0;
        }
        
    }
    return -1;
}

int main(){
    char str1[] = "mississippi"; char str2[] = "issip";
    int res = strStr(str1,str2);
    printf("%d\n",res);
}
