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
     
    // 2. �ݺ��� (�÷��̾� �� ���Բ�)
    do {
        int step = rolldie();
        int coinResult;
        char c;
        pos += step;
        
        coinResult = int board_getBoardCoin(pos);
        
        printf("Press any key to continue:");
        scanf("%d", &c);
       // 2-1. �÷��̾� ���� ���
       // 2-2. �ֻ��� ������
       // 2-3. �̵�
       // 2-4. �����ݱ�
       // 2-5. ���� ��
       // 2-6. if(����: ��� �÷��̾ �ѹ��� ���� ��) 
          // ��� ���� 
     
    // 3. ����(���� ���, ��� ��) 
  
    system("PAUSE");	
    return 0;
}
