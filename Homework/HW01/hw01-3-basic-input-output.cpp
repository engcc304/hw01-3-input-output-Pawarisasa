/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main() {
    char FirstName[50] ;
    char Lastname[50] ;
    printf("Enter your name: " );
    scanf("%s", &FirstName );
    printf("Enter your age: ");
    scanf("%s", &Lastname ) ;
    printf("- - - - - -\n" );
    printf("%s ", FirstName); 
    printf("%ss", Lastname);
    printf(" TC, RMUTL, Chiang Mai, Thailand");

    return 0;
}

