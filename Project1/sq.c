#include<stdio.h>
/*#include <stdlib.h>
 rand()%2*/
#include <stdlib.h>
void draw(int su, int x, int y);
void end();
int main() {
    int x = 0; //x 좌표
    int y = -1; //y 좌표
    int su = 12; //다리 길이
    char s;

    draw(su, x, y);

    while (1) {
        s = getch(); //키보드로 입력받는 값을 s에 저장
        if (s == 75) { //왼쪽
            //x == 열, y == 행
            //왼쪽 화살표를 누르면 첫번째 열의 네모가 1칸 올라간다
            x = 0;
            y++;
        }
        if (s == 77) { //오른쪽
            //x == 열, y == 행
            //오른쪽 화살표를 누르면 두번째 열의 네모가 1칸 올라간다
            x = 1;
            y++;
        }
        if (s == 27) break; //esc 누르면 종료
        draw(su, x, y);
    }

    return 0;
}
void draw(int su, int x, int y) {
    system("cls"); //콘솔창 초기화
    int a = 0;
    for (int i = 0; i < su; i++) {
        for (int j = 0; j < 2; j++) {
            if (y != su - (i + 1)) { //y가 su - (i + 1)이랑 같지 않으면 □ 출력
                printf("□");
            }
            else if (x == j) { //x와 j가 같으면 ■ 출력
                printf("■");
                a = rand() % 5;
                if (a == 0) {
                    end();
                }
                else {

                }

            }
            else {
                printf("□");
            }
        }
        printf("\n");
    }
}
void end() {
    system("cls");
    printf("죽었습니다.");
    exit(1);
}