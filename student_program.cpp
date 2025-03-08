#include <stdio.h>
#include <stdlib.h>  // ต้องรวม header สำหรับ malloc, free

// ฟังก์ชันเพื่อรับค่าจากผู้ใช้และกำหนดให้กับ Matrix 2 มิติ
void GetMatrix(int **value, int *row, int *col) {
    // ข้อมูลแถวและคอลัมน์ที่ผู้ใช้ต้องการ
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", row, col);

    // จองหน่วยความจำสำหรับ matrix (array 2 มิติ)
    *value = (int *)malloc((*row) * (*col) * sizeof(int));
    if (*value == NULL) {
        printf("Memory allocation failed\n");
        exit(1);  // หากไม่สามารถจองหน่วยความจำได้ ให้หยุดโปรแกรม
    }

    // รับค่าจากผู้ใช้เพื่อกำหนดค่าใน Matrix
    printf("Enter the values for the matrix:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (*value + i * (*col) + j));  // ใช้ pointer แบบ 1 มิติ
        }
    }
}

// ฟังก์ชันเพื่อแสดงผล Matrix 2 มิติ
void PrintMatrix(int *value, int row, int col) {
    printf("Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(value + i * col + j));  // ใช้ pointer แบบ 1 มิติ
        }
        printf("\n");
    }
}

int main() {
    int *data = NULL, m = 3, n = 3;

    // รับค่าจากผู้ใช้และเก็บใน Matrix
    GetMatrix(&data, &m, &n);

    // แสดงผล Matrix
    PrintMatrix(data, m, n);

    // ฟรีหน่วยความจำหลังการใช้งาน
    free(data);

    return 0;
}
