#define N 3

void hex(int p){
	char tab[N+1];
    if (p < 0 || p > 4095){
        printf("Liczba %d jest poza zakresem [0, 4095]\n", p);
        return 0;
    }
	
	printf("%4d = %s\n", p, tab);
}

int main(void){
	for(int i=-2; i<=4097; i++)
		if(i<3 || (i>8 && i<17) || i>4093 || i%1000==0)
			hex(i);
	return 0;
}
//    0 = 000
//    1 = 001
//    2 = 002
//    9 = 009
//   10 = 00A
//   11 = 00B
//   12 = 00C`
//   13 = 00D
//   14 = 00E
//   15 = 00F
//   16 = 010
// 1000 = 3E8
// 2000 = 7D0
// 3000 = BB8
// 4000 = FA0
// 4094 = FFE
// 4095 = FFF