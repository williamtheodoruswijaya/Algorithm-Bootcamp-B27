#include <stdio.h>
int main(){
	// cara bikin variabel -> "modifier" "nama variabel";
	/* modifier(tipe data) itu ada:
	
	int "nama variabel" -> dipake untuk menampilkan angka
	short int "nama variabel" -> dipake untuk menampilkan angka dengan size yang lebih short
	long long int "nama variabel" -> dipake untuk menampilkan angka dengan size yang lebih long/besar.
	
	float "nama variabel" -> float dipake untuk menampilkan value dengan total 8 angka di belakang koma
	double "nama variabel" -> double dipake untuk menampilkan value dengan total 16 angka di belakang koma
	
	char "nama variabel" -> char dipake untuk menampilkan variabel berupa 1 huruf
	char string[] "nama variabel" -> char string dipake untuk menampilkan variabel berupa kata-kata
	char string[n] "nama variabel" -> char string dengan n untuk menampilkan kata-kata dengan jumlah kata yang dihitung.
	*/
	
// cara menampilkan variable:
	int a = 10;
	char string[100] = "William";
	printf("%d\n", a); // "%d" untuk menampilkan variabel berupa integer
	printf("%s\n", string); //"%s" untuk menampilkan variabel berupa string/char
	long long int b = 134593458234;
	printf("%lld\n", b); //"%lld" untuk menampilkan variabel berupa long long int
// "%d\n" (int) ; "%lld\n" (long long int) ; "%c\n" (char) ; "%s\n" (string) ; "%f\n" (float) ; "%lf\n" (double) ; "%[^\n]" (string)
//	"%.3f" (float dengan tiga angka dibelakang koma) ; "%2.f" (float dengan dua angka di belakang koma)
	return 0;
}
