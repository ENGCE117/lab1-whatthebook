#include <stdio.h>

// ฟังก์ชันเพื่อรับค่าจากผู้ใช้และกำหนดให้กับ Matrix 2 มิติ
void GetMatrix(int **value, int *row, int *col) {
    // ข้อมูลแถวและคอลัมน์ที่ผู้ใช้ต้องการ
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", row, col);

    // รับค่าจากผู้ใช้เพื่อกำหนดค่าใน Matrix
    printf("Enter the values for the matrix:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (*(value + i) + j));
        }
    }
}

// ฟังก์ชันเพื่อแสดงผล Matrix 2 มิติ
void PrintMatrix(int **value, int row, int col) {
    printf("Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(*(value + i) + j)); // แสดงค่าที่ตำแหน่ง [i][j]
        }
        printf("\n");
    }
}

int main() {
    int *data, m = 3, n = 3;
    
    // จองหน่วยความจำสำหรับ Matrix ขนาด m * n
    data = (int *)malloc(m * n * sizeof(int));
    
    // รับค่าจากผู้ใช้และเก็บใน Matrix
    GetMatrix(&data, &m, &n);
    
    // แสดงผล Matrix
    PrintMatrix(&data, m, n);
    
    // ฟรีหน่วยความจำ
    free(data);
    
    return 0;
}
