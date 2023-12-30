#include <stdio.h>

struct Student {
    char name[100];
    char nim[100];
    float gpa;
    char jurusan[100];
};

int main() {
    struct Student binusian[50];
    
    // Membersihkan karakter '\n' yang tertinggal di buffer setelah input sebelumnya.
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    for (int i = 0; i < 50; i++) {
        printf("Masukkan data mahasiswa ke-%d:\n", i + 1);

        // Menggunakan format specifier yang tepat dan membersihkan karakter '\n' di buffer.
        scanf("%[^\n] %[^\n] %f %[^\n]", binusian[i].name, binusian[i].nim, &binusian[i].gpa, binusian[i].jurusan);
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        printf("Nama: %s\nNIM: %s\nGPA: %.2f\nJurusan: %s\n\n", binusian[i].name, binusian[i].nim, binusian[i].gpa, binusian[i].jurusan);
    }
    return 0;
}

