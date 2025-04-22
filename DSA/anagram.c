//Hash mapping but only using lowercase eng letters
#include <string.h>
bool isAnagram(char* s, char* t) {
    if(strlen(s)!=strlen(t)){
        return 0;
    }
    int map1[27]={0};

    int i;
    for(i=0;i<strlen(s);i++){
        map1[s[i]-'a'] += 1;
        map1[t[i]-'a'] -= 1;
    }

    for(i=0;i<27;i++){
        if(map1[i]!=0){
            return 0;
        }
    }
    return 1;
}
