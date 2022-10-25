#include<stdio.h>
#include<string.h>
#define passward "abcd1234"                       // 비밀번호 정의
#define arrysize 10                               // 배열 최대값 정의 
int main() 
{

    char password[] = passward;                  
    char user[arrysize];

    printf("Input your passward : ");
    scanf_s("%s", user, 10);
    

    while (1)                                   
    {
        if (strcmp(password, user) == 0)          // 지정된 비밀번호와 입력받은 비밀번호 비교
            break;
        printf("not matched, retry...\nInput your passward : ");
        scanf_s("%s", user, 10);  

    }

    printf("normal detrmination...\n");           // 결과 도출

    return 0;
}