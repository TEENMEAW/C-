#include <stdio.h>

int main(void) {
    char name[50], loc[50], phone[20];
    int age;

    printf("--- Contact Info ---\n");
    
    printf("Name: "); scanf("%s", name);
    printf("Age: "); scanf("%d", &age);
    printf("Address: "); scanf("%s", loc);
    printf("Phone: "); scanf("%s", phone);

    // โชว์ผลลัพธ์ทีเดียวสั้นๆ
    printf("\nSaved: %s (%d) at %s | Tel: %s\n", name, age, loc, phone);
}