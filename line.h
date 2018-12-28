#ifndef LINE_H
#define LINE_H
#pragma once
#define _CRT_SECURE_NO_WARNINGS
/****************************************************************
*	clear_line:Clears the current line.							*
*****************************************************************/
void clear_line();

/****************************************************************
*	add_word:Add word to the end of current line.If this is not	*
*		   the first word on the line,puts one space before word*
*****************************************************************/
void add_word( const char * word );

/****************************************************************
*	space_remaining:Return the number of characters left in the	*
*					current line.								*
*****************************************************************/
int space_remaining();

/****************************************************************
*	wirte_line:Writes the current line without justification	*
*****************************************************************/
void write_line();

/****************************************************************
*	flush_line():Writes the current line without justification	*
*				If line is empty,do nothing!					*
*****************************************************************/
void flush_line();



#endif // !1


