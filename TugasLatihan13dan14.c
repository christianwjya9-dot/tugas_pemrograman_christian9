#include <stdio.h>

// Function prototype
float tambah(float num1, float num2);
float kali(float num1, float num2);
float kurang(float num1, float num2);
float bagi(float num1, float num2);

int main()
{
    float bil1, bil2, result;
    int pilihan;

    printf("Masukkan bilangan 1: ");
    scanf("%f", &bil1);
    printf("Masukkan bilangan 2: ");
    scanf("%f", &bil2);

    do
    {
        printf("\nPilih operasi (1 = +, 2 = x, 3 = -, 4 = /, 0 = selesai): ");
        scanf("%d", &pilihan);

        if (pilihan == 1)
        {
            result = tambah(bil1, bil2); // Call a function dengan arguments
            printf("Hasil = %.2f\n", result);
        }
        else if (pilihan == 2)
        {
            result = kali(bil1, bil2);
            printf("Hasil = %.2f\n", result);
        }
        else if (pilihan == 3)
        {
            result = kurang(bil1, bil2);
            printf("Hasil = %.2f\n", result);
        }
        else if (pilihan == 4)
        {
            result = bagi(bil1, bil2);
            printf("Hasil = %.2f\n", result);
        }
    } while (pilihan != 0);

    return 0;
}

// Function dengan parameter
float tambah(float num1, float num2)
{
    float hasil = num1 + num2;
    return hasil; // Returns a float value
}

float kali(float num1, float num2)
{
    float hasil = num1 * num2;
    return hasil;
}

float kurang(float num1, float num2)
{
    float hasil = num1 - num2;
    return hasil;
}

float bagi(float num1, float num2)
{
    float hasil = num1 / num2;
    return hasil;
}



//soal 2

#include <stdio.h>

// Function prototype
void input_bilangan();
float tambah();
float kali();
float kurang();
float bagi();

// Global variable
float bil1 = 0;
float bil2 = 0;

int main()
{
    int pilihan;
    float result;

    input_bilangan();

    do
    {
        printf("\nPilih operasi (1 = +, 2 = x, 3 = -, 4 = /, 0 = selesai): ");
        scanf("%d", &pilihan);

        if (pilihan == 1)
        {
            result = tambah();
            printf("Hasil = %.2f\n", result);
        }
        else if (pilihan == 2)
        {
            result = kali();
            printf("Hasil = %.2f\n", result);
        }
        else if (pilihan == 3)
        {
            result = kurang();
            printf("Hasil = %.2f\n", result);
        }
        else if (pilihan == 4)
        {
            result = bagi();
            printf("Hasil = %.2f\n", result);
        }
    } while (pilihan != 0);

    return 0;
}

// Void function untuk input, disimpan ke global variable
void input_bilangan()
{
    printf("Masukkan bilangan 1: ");
    scanf("%f", &bil1);
    printf("Masukkan bilangan 2: ");
    scanf("%f", &bil2);
}

// Function tanpa parameter
float tambah()
{
    float hasil = bil1 + bil2;
    return hasil;
}

float kali()
{
    float hasil = bil1 * bil2;
    return hasil;
}

float kurang()
{
    float hasil = bil1 - bil2;
    return hasil;
}

float bagi()
{
    float hasil = bil1 / bil2;
    return hasil;
}