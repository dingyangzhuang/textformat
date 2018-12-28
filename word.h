#ifndef WORD_H
#define WORD_H
/************************************************************
*	read_word:Reads next word from the input and stores it	*
*			in word[].Makes word empty if no word can be	*
*			read because of end-of-file.					*
*			Truncates the word if its length excends len.	*
*	read_char:Reads a char from stdio.if char is '\t' or	*
*			'\n',return ' '.
*************************************************************/
int read_char(void);//读取字符
void read_word( char * word, int len );//读取字符数组


#endif // !WORD_H
