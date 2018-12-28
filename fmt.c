#include <string.h>
#include "line.h"
#include "word.h"
#include "common.h"
#define MAX_WORD_LEN 20

int main() {
	char word[MAX_WORD_LEN + 2];
	int word_len;
	clear_line();
	for (;;)
	{
		read_word(word,MAX_WORD_LEN);
		word_len = strlen(word);
		PRINT_S(word);
		if (word_len == 0) {//所有单词读完之后就flush
			PRINT_S("start flush_line()");
			flush_line();
		}
		if (word_len > MAX_WORD_LEN) {
			word[MAX_WORD_LEN] = '*';
		}
		if (word_len > space_remaining()) {//如果单词的长度已经超过了行的剩余长度，就直接输出行
			write_line();
			clear_line();
		}
		add_word(word);//向行line继续添加单词
	}
}

