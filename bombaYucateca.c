#include <unistd.h>
#include <stdio.h>

int main(){
    int a = 1;
    while(1){
        a=fork();
    }

}