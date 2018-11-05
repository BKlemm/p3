/*
 * a3.c
 * 
 * Copyright 2018 Anonymer Eintrag <bklem001@pc13-103>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * // / 100
 * 
 */


#include <stdio.h>

int calc(int n,int m,int c){
	int count,rest,i;
	rest = n % m;
	count = n / m;
	for(i = 0; i < count; i++){
		putchar(c);
	}
	return rest;
}

int main(int argc, char **argv)
{
	int rest;
	scanf("%d",&rest);
	
	rest = calc(rest,100,'C');
	rest = calc(rest,50,'L');
	rest = calc(rest,10,'X');
	rest = calc(rest,5,'V');
	rest = calc(rest,1,'I');
	
	putchar('\n');
	
	return 0;
}

