#include <string.h>
#include "line.h"
#include "word.h"
#define MAX_WORD_LEN 20

int main() {
	char word[MAX_WORD_LEN + 2];
	int word_len;
	clear_line();
	for (;;)
	{
		read_word(word,MAX_WORD_LEN);
		word_len = strlen(word);
		if (word_len == 0) {//���е��ʶ���֮���flush
			flush_line();
		}
		if (word_len > MAX_WORD_LEN) {
			word[MAX_WORD_LEN] = '*';
		}
		if (word_len > space_remaining()) {//������ʵĳ����Ѿ��������е�ʣ�೤�ȣ���ֱ�������
			write_line();
			clear_line();
		}
		add_word(word);//����line������ӵ���
	}
}

