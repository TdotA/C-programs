#include <stdio.h>

char *read(){
    static char s[18] ;
    scanf("%s", s);
    return s;
}
void makeNewString(char *str){
    
    for(int i=0; i<sizeof(str); i++){
        for (long unsigned int k = 1; k<2*sizeof(str); k = k+2){
            if(str[i]=='(' && str[i+k] ==')'){
                str[i]='1';
                str[i+k]='1';
                break;
            }
            if (str[i]=='[' && str[i+k] ==']'){
                str[i]='1';
                str[i+k]='1';
                break;
            }
            if (str[i]=='{' && str[i+k] =='}'){
                str[i]='1';
                str[i+k]='1';
                break;
            }
            
        }
    }
    
}
int isWellNested(char *str){
    if (sizeof(str) % 2 == 1){
        return 0;
    }
    for(int i = 0; i< sizeof(str); i++){
        if(str[i] != '1' && str[i]!= '\0'){
            return 0;
        }
    }
    return 1;
}
int main(){
    char *initialS = read();
    // char *newS=makeNewString(initialS);
    makeNewString(initialS);
    int answer = isWellNested(initialS);
    printf("%d\n", answer);
    return 0;
}


