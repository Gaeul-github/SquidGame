#include<stdio.h>
/*#include <stdlib.h>
 rand()%2*/
#include <stdlib.h>
void draw(int su, int x, int y);
void end();
int main() {
    int x = 0; //x ��ǥ
    int y = -1; //y ��ǥ
    int su = 12; //�ٸ� ����
    char s;

    draw(su, x, y);

    while (1) {
        s = getch(); //Ű����� �Է¹޴� ���� s�� ����
        if (s == 75) { //����
            //x == ��, y == ��
            //���� ȭ��ǥ�� ������ ù��° ���� �׸� 1ĭ �ö󰣴�
            x = 0;
            y++;
        }
        if (s == 77) { //������
            //x == ��, y == ��
            //������ ȭ��ǥ�� ������ �ι�° ���� �׸� 1ĭ �ö󰣴�
            x = 1;
            y++;
        }
        if (s == 27) break; //esc ������ ����
        draw(su, x, y);
    }

    return 0;
}
void draw(int su, int x, int y) {
    system("cls"); //�ܼ�â �ʱ�ȭ
    int a = 0;
    for (int i = 0; i < su; i++) {
        for (int j = 0; j < 2; j++) {
            if (y != su - (i + 1)) { //y�� su - (i + 1)�̶� ���� ������ �� ���
                printf("��");
            }
            else if (x == j) { //x�� j�� ������ �� ���
                printf("��");
                a = rand() % 5;
                if (a == 0) {
                    end();
                }
                else {

                }

            }
            else {
                printf("��");
            }
        }
        printf("\n");
    }
}
void end() {
    system("cls");
    printf("�׾����ϴ�.");
    exit(1);
}