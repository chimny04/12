#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

#define MAX_DIE

void opening(void)
{
  printf("******************************\n");
  printf("{{{{{{{{{{SHARK GAME}}}}}}}}}}\n");
  printf("******************************\n");
}
  
int rolldie(void)
{
    return rand()%MAX_DIE+1;
}


int main(int argc, char *argv[])
{
    srand((unsigned)time(NULL));
  
    // 0. opening
    opening();
  
    // 1. initialize, player set
    board_initboard();
     
    // 2. 반복문 (플레이어 턴 돌게끔)
    do {
        int step = rolldie();
        int coinResult;
        char c;
        pos += step;
        
        coinResult = int board_getBoardCoin(pos);
        
        printf("Press any key to continue:");
        scanf("%d", &c);
       // 2-1. 플레이어 상태 출력
       // 2-2. 주사위 던지기
       // 2-3. 이동
       // 2-4. 동전줍기
       // 2-5. 다음 턴
       // 2-6. if(조건: 모든 플레이어가 한번씩 턴을 돔) 
          // 상어 동작 
     
    // 3. 정리(승자 계싼, 출력 등) 
  
    system("PAUSE");	
    return 0;
}
