#include<stdio.h>
#include<string.h>
#define passward "abcd1234"                       // ��й�ȣ ����
#define arrysize 10                               // �迭 �ִ밪 ���� 
int main() 
{

    char password[] = passward;                  
    char user[arrysize];

    printf("Input your passward : ");
    scanf_s("%s", user, 10);
    

    while (1)                                   
    {
        if (strcmp(password, user) == 0)          // ������ ��й�ȣ�� �Է¹��� ��й�ȣ ��
            break;
        printf("not matched, retry...\nInput your passward : ");
        scanf_s("%s", user, 10);  

    }

    printf("normal detrmination...\n");           // ��� ����

    return 0;
}