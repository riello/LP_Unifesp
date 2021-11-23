#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i=0, j, key, lengh;
	char *word=(char*) malloc(sizeof(char)*50);
	char alfabeto[26][26] = {
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
        "ZABCDEFGHIJKLMNOPQRSTUVWXY",
        "XZABCDEFGHIJKLMNOPQRSTUVWX",
        "XYZABCDEFGHIJKLMNOPQRSTUVW",
        "WXYZABCDEFGHIJKLMNOPQRSTUV",
        "VWXYZABCDEFGHIJKLMNOPQRSTU",
        "UVWXYZABCDEFGHIJKLMNOPQRST",
        "TUVWXYZABCDEFGHIJKLMNOPQRS",
        "STUVWXYZABCDEFGHIJKLMNOPQR",
        "RSTUVWXYZABCDEFGHIJKLMNOPQ",
        "QRSTUVWXYZABCDEFGHIJKLMNOP",
        "PQRSTUVWXYZABCDEFGHIJKLMNO",
        "OPQRSTUVWXYZABCDEFGHIJKLMN",
        "NOPQRSTUVWXYZABCDEFGHIJKLM",
        "MNOPQRSTUVWXYZABCDEFGHIJKL",
        "LMNOPQRSTUVWXYZABCDEFGHIJK",
        "KLMNOPQRSTUVWXYZABCDEFGHIJ",
        "JKLMNOPQRSTUVWXYZABCDEFGHI",
        "IJKLMNOPQRSTUVWXYZABCDEFGH",
        "HIJKLMNOPQRSTUVWXYZABCDEFG",
        "GHIJKLMNOPQRSTUVWXYZABCDEF",
        "FGHIJKLMNOPQRSTUVWXYZABCDE",
        "EFGHIJKLMNOPQRSTUVWXYZABCD",
        "DEFGHIJKLMNOPQRSTUVWXYZABC",
        "CDEFGHIJKLMNOPQRSTUVWXYZAB",
        "BCDEFGHIJKLMNOPQRSTUVWXYZA"
	};
	scanf("%d", &n);
	
	while(i++<n){
		scanf("%s", word);
		scanf("%d", &key);
		
		lengh=0;
		
		while(word[lengh] != '\0'){
			lengh++;
		}		
		j=0;
		while(j<lengh){
			word[j] = alfabeto[key][word[j]-'A'];
			j++;
		}
		printf("%s\n", word);
	}
	return 0;	
}
