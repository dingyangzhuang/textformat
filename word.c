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
		;//�����ո���ַ�
	while (ch != ' '&&ch != EOF) {
		if (p < len) {//��ȡ�ĵ��ʲ������޶�����󳤶�
			word[p++] = ch;
		}
		ch = read_char();
	}
	word[p] = '\0';

}
