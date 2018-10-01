#include <stdio.h>
#include <stdlib.h>

/*创建棋盘*/
char qipan[20][20];

/*初始化棋盘*/
void chushihua(char qipan[][20]){
    int i,j;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            qipan[i][j]='-';
        }
    }
}

/*打印棋盘*/
void printQipan(char qipan[][20]){
    system("clear");  //清空屏幕(Linux命令)
    printf("   ");
    int i,j;
    for(i=0;i<20;i++){
        if(i<10){
            printf("%d ",i);
        }else{
            printf("%d ",i-10);
        }
    }
    printf("\n");
    for(i=0;i<20;i++){
        if(i<10){
            printf("%d  ",i);
        }else{
            printf("%d ",i);
        }
        for(j=0;j<20;j++){
            printf("%c ",qipan[i][j]);
        }
        printf("\n");
    }
}

//判断输赢
int result(int a,int b){
    
    //判断行
        if(qipan[a][b]==qipan[a][b+1] && qipan[a][b]==qipan[a][b+2] && qipan[a][b]==qipan[a][b+3] && qipan[a][b]==qipan[a][b+4]){
            printf("%s\n","判断生效1" );
            return 1;
        }else 
        if(qipan[a][b]==qipan[a][b-1] && qipan[a][b]==qipan[a][b+1] && qipan[a][b]==qipan[a][b+2] && qipan[a][b]==qipan[a][b+3]){
            printf("%s\n","判断生效2" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a][b-2] && qipan[a][b]==qipan[a][b-1] && qipan[a][b]==qipan[a][b+1] && qipan[a][b]==qipan[a][b+2]){
            printf("%s\n","判断生效3" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a][b-3] && qipan[a][b]==qipan[a][b-2] && qipan[a][b]==qipan[a][b-1] && qipan[a][b]==qipan[a][b+1]){
            printf("%s\n","判断生效4" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a][b-4] && qipan[a][b]==qipan[a][b-3] && qipan[a][b]==qipan[a][b-2] && qipan[a][b]==qipan[a][b-1]){
            printf("%s\n","判断生效5" );
            return 1;
        }

    //判断列
        if(qipan[a][b]==qipan[a+1][b] && qipan[a][b]==qipan[a+2][b] && qipan[a][b]==qipan[a+3][b] && qipan[a][b]==qipan[a+4][b]){
            printf("%s\n","判断生效1" );
            return 1;
        }else 
        if(qipan[a][b]==qipan[a-1][b] && qipan[a][b]==qipan[a+1][b] && qipan[a][b]==qipan[a+2][b] && qipan[a][b]==qipan[a+3][b]){
            printf("%s\n","判断生效2" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-2][b] && qipan[a][b]==qipan[a-1][b] && qipan[a][b]==qipan[a+1][b] && qipan[a][b]==qipan[a+2][b]){
            printf("%s\n","判断生效3" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-3][b] && qipan[a][b]==qipan[a-2][b] && qipan[a][b]==qipan[a-1][b] && qipan[a][b]==qipan[a+1][b]){
            printf("%s\n","判断生效4" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-4][b] && qipan[a][b]==qipan[a-3][b] && qipan[a][b]==qipan[a-2][b] && qipan[a][b]==qipan[a-1][b]){
            printf("%s\n","判断生效5" );
            return 1;
        }

    //判断左斜
        if(qipan[a][b]==qipan[a+1][b+1] && qipan[a][b]==qipan[a+2][b+2] && qipan[a][b]==qipan[a+3][b+3] && qipan[a][b]==qipan[a+4][b+4]){
            printf("%s\n","判断生效1" );
            return 1;
        }else 
        if(qipan[a][b]==qipan[a-1][b-1] && qipan[a][b]==qipan[a+1][b+1] && qipan[a][b]==qipan[a+2][b+2] && qipan[a][b]==qipan[a+3][b+3]){
            printf("%s\n","判断生效2" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-2][b-2] && qipan[a][b]==qipan[a-1][b-1] && qipan[a][b]==qipan[a+1][b+1] && qipan[a][b]==qipan[a+2][b+2]){
            printf("%s\n","判断生效3" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-3][b-3] && qipan[a][b]==qipan[a-2][b-2] && qipan[a][b]==qipan[a-1][b-1] && qipan[a][b]==qipan[a+1][b+1]){
            printf("%s\n","判断生效4" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-4][b-4] && qipan[a][b]==qipan[a-3][b-3] && qipan[a][b]==qipan[a-2][b-2] && qipan[a][b]==qipan[a-1][b-1]){
            printf("%s\n","判断生效5" );
            return 1;
        }
        
    //判断右斜
        if(qipan[a][b]==qipan[a+1][b-1] && qipan[a][b]==qipan[a+2][b-2] && qipan[a][b]==qipan[a+3][b-3] && qipan[a][b]==qipan[a+4][b-4]){
            printf("%s\n","判断生效1" );
            return 1;
        }else 
        if(qipan[a][b]==qipan[a-1][b+1] && qipan[a][b]==qipan[a+1][b-1] && qipan[a][b]==qipan[a+2][b-2] && qipan[a][b]==qipan[a+3][b-3]){
            printf("%s\n","判断生效2" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-2][b+2] && qipan[a][b]==qipan[a-1][b+1] && qipan[a][b]==qipan[a+1][b-1] && qipan[a][b]==qipan[a+2][b-2]){
            printf("%s\n","判断生效3" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-3][b+3] && qipan[a][b]==qipan[a-2][b+2] && qipan[a][b]==qipan[a-1][b+1] && qipan[a][b]==qipan[a+1][b-1]){
            printf("%s\n","判断生效4" );
            return 1;
        }else
        if(qipan[a][b]==qipan[a-4][b+4] && qipan[a][b]==qipan[a-3][b+3] && qipan[a][b]==qipan[a-2][b+2] && qipan[a][b]==qipan[a-1][b+1]){
            printf("%s\n","判断生效5" );
            return 1;
        }

    //均不成立
    return 0;
}

//输出胜出信息
void winner(int winner){
    printf("玩家%d赢了",winner);
}

/*玩家1*/
int player1(){
    int a,b;
    printf("%s","player1请输入坐标:");
    scanf("%d%d",&a,&b);
    
    //判断是否已经存在棋子
    int i;
    for(i=0;i<5;i++){
        if(qipan[a][b]!='-'){
            printQipan(qipan);
            printf("%s","该坐标已有棋子，player1请重新输入：");
            scanf("%d%d",&a,&b);
        }else{
            break;
        }
    }

    qipan[a][b]='*';
    if(result(a,b)==1){
        printQipan(qipan);
        winner(1);
        return 1;
    }else{
        printQipan(qipan);
    }
    return 0;
}

/*玩家2*/
int player2(){
    int a,b;
    printf("%s","player2请输入坐标:");
    scanf("%d%d",&a,&b);
    printf("\n");

    //判断是否已经存在棋子
    int i;
    for(i=0;i<5;i++){
        if(qipan[a][b]!='-'){
            printQipan(qipan);
            printf("%s","该坐标已有棋子，player2请重新输入：");
            scanf("%d%d",&a,&b);
        }else{
            break;
        }
    }

    qipan[a][b]='%';
    if(result(a,b)==1){
        printQipan(qipan);
        winner(2);
        return 1;
    }else{
        printQipan(qipan);
    }
    return 0;
}

/*主函数*/
int main(){

    //初始化棋盘
    chushihua(qipan);
    printQipan(qipan);

    //切换玩家1和玩家2
    int i;
    for(i=0;i<400;i++){
        if(i==0){
            player1();
        }else if(i==1){
            player2();
        }else if(i%2==0){
            if(player1()==1){
                return 0;
            }
        }else{
            if(player2()==1){
                return 0;
            }
        }
    }

    return 0;
}




