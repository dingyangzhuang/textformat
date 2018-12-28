#include <stdio.h>
#include "word.h"

int read_char( )
{
	int ch = getchar();
	if (ch == '\n'||ch=='\t') {
		return " ";
	}
	return ch;
}

void read_word( char * word, int len )
{
	int ch = 0;
	int p = 0;

	while (( ch = read_char() ) == ' ')
		;//跳过空格的字符
	while (ch != ' '&&ch != EOF) {
		if (p < len) {//读取的单词不超过限定的最大长度
			word[p++] = ch;
		}
		ch = read_char();
	}
	word[p] = '\0';

}
