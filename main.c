#include <stdio.h>

    //first question//

int main()
{
    char i='a';
    do
    {
        printf("%c\n", i);
        i+=4;
    }
    while(i<='z');
    
    //second question//

    int num=20;
    int k=5;
    int sum;
    
    for(int i=1; i<=num; i++){
        if(i%k==0){
            sum+=i;
        }else{
            printf("%d\n", sum);
        }
    }
    
    return 0;
}
