void GetMatrix(int **value, int *row, int *col) {
    printf("Enter values for the %d x %d matrix:\n", *row, *col);
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Enter element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &value[i][j]); // รับค่าจากผู้ใช้
        }
    }
}
