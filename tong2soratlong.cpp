#include <stdio.h>
#include <string.h>

void reverse(char *chuoi) {
    int dodai = strlen(chuoi);
    for (int i = 0; i < dodai / 2; i++) {
        char temp = chuoi[i];
        chuoi[i] = chuoi[dodai - 1 - i];
        chuoi[dodai - 1 - i] = temp;
    }
}

void sum(char *so1, char *so2, char *ketQua) {
    reverse(so1);
    reverse(so2);
    int dodai1 = strlen(so1);
    int dodai2 = strlen(so2);
    int dodaiMax;
    if(dodai1>dodai2) dodaiMax=dodai1;
    else dodaiMax=dodai2;
//  int dodaiMax = dodai1 > dodai2 ? dodai1 : doDai2;
    int nho = 0;
    int tong = 0;
    int viTri = 0;
    for (int i = 0; i < dodaiMax; i++) {
        int chuSo1 = (i < dodai1) ? (so1[i] - '0') : 0;
        int chuSo2 = (i < dodai2) ? (so2[i] - '0') : 0;
        tong = chuSo1 + chuSo2 + nho;
        nho = tong / 10;
        ketQua[viTri++] = (tong % 10) + '0';
    }
    if (nho > 0) {
        ketQua[viTri++] = nho + '0';
    }
    ketQua[viTri] = '\0';
    reverse(ketQua);
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char so1[502], num2[502], ketQua[502];
        scanf("%s %s", so1, num2);
        sum(so1, num2, ketQua);
        printf("%s\n", ketQua);
    }
    return 0;
}
