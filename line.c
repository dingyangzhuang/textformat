#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "line.h"
#define MAX_LINE_LEN 60
char line[MAX_LINE_LEN + 1] = { 0 };
int num_words = 0;
int line_len = 0;

void clear_line()
{
	line[0] = '\0';
	line_len = 0;
	num_words = 0;
}

void add_word(const char * word)
{
	//当前有单词的时候，添加个空格，把下一个char设置为空字符，并将长度加1
	if (num_words > 0) {
		line[line_len] = ' ';
		line[line_len+1] = '\0';
		line_len++;
	}
	strcat( line, word );
	line_len += strlen( word );
	num_words++;
}

//返回剩余空间
int space_remaining()
{
	return MAX_LINE_LEN - line_len;
}

void write_line()
{
	int extra_spaces, spaces_to_insert,i,j;
	extra_spaces = MAX_LINE_LEN - line_len;
	for ( i = 0; i < line_len; i++)
	{
		if (line[i] != ' ') {//如果是文本直接输出
			putchar(line[i]);
		}
		else {//如果是不是文本，就要插入空格，每个单词配合一个空格。
			//比如5个单词，开头的时候还是5个，
			spaces_to_insert = extra_spaces / (num_words - 1);
			for (j= 0; j <= spaces_to_insert+1; j++)
			{
				putchar(' ');
			}
			extra_spaces -= spaces_to_insert;
			num_words--;
		}
	}
}

void flush_line()
{
	if (line_len > 0) {
		puts( line );
	}
}


