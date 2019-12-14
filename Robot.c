#include <stdio.h>

char changeDir(char, char);
void advance(int*,int*,char);


int main(){
    int x,y; 
    int instructionLen; 
    printf("How long are my instructons?\n");
    scanf("%d",&instructionLen); 
    char inst[instructionLen]; 
    char dir = 'N'; 
    printf("Insert first coordinate: \n");
    scanf("%d",&x);
    printf("Insert second coordinate: \n");
    scanf("%d",&y);
    printf("Insert commands: \n");
    scanf("%s",inst);

    int *px = &x;
    int *py = &y;
    
    for (int i = 0; i < instructionLen; i++){
        
        if (inst[i] == 'A'){
            advance(px, py, dir);
        }
        else if (inst[i] == 'R'){
            dir = changeDir(dir, 'R');
        }
        else if (inst[i] == 'L'){
            dir = changeDir(dir, 'L');
        }
    }

    printf("Coordinates are: (%d, %d)\n",x,y);
    printf("Direction is: %c \n", dir);
    return 0;
}

char changeDir(char d, char turn){
    if (turn=='L'){
        if (d == 'N'){
            d = 'W';
            return d;
        }
        else if (d == 'W'){
            d = 'S';
            return d;
        }
        else if (d == 'S'){
            d = 'E';
            return d;
        }
        else if (d == 'E'){
            d = 'N';
            return d;
        }
    }
    if(turn == 'R'){
       if (d == 'N'){
            d = 'E';
            return d;
        }
        else if (d == 'E'){
            d = 'S';
            return d;
        }
        else if (d == 'S'){
            d = 'W';
            return d;
        }
        else if (d == 'W'){
            d = 'N';
            return d;
        } 
    }
}


void advance(int *cord1, int *cord2, char orientation){
    if (orientation == 'N'){
        *cord2 = *cord2 + 1;
    }
    if (orientation == 'S'){
        *cord2 = *cord2 - 1;
    }
    if (orientation == 'E'){
        *cord1 = *cord1 + 1;
    }
    if (orientation == 'W'){
        *cord1=*cord1 - 1;
    }
}

    
