/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouhadr <cbouhadr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:30:34 by cbouhadr          #+#    #+#             */
/*   Updated: 2024/10/03 16:40:58 by cbouhadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "libft.h"
#include <strings.h>


int main()
{
    //ft_isalpha
    assert(ft_isalpha('a'));
    assert(ft_isalpha('z'));
    assert(ft_isalpha('A'));
    assert(ft_isalpha('Z'));
    assert(!ft_isalpha('\n'));
    assert(!ft_isalpha('1'));
    assert(!ft_isalpha('\0'));

    printf("ft_ isalpha focntion OK\n");

    //ft_isdigit
    assert(ft_isdigit('0'));
    assert(ft_isdigit('9'));
    assert(!ft_isdigit('A'));
    assert(!ft_isdigit('\0'));

    printf("ft_ isdigit focntion OK\n");
    

    //ft_isalnum
    assert(ft_isalnum('0'));
    assert(ft_isalnum('a'));
    assert(ft_isalnum('A'));
    assert(ft_isalnum('z'));
    assert(ft_isalnum('Z'));
    assert(!ft_isalnum('\0'));
    assert(!ft_isalnum(((char)0)));

    printf("ft_ isallnum focntion OK\n");

    //ft_isascii

    assert(ft_isascii(127));
    assert(ft_isascii(0));
    assert(!ft_isascii(130));
    assert(ft_isascii(12));

    printf("ft_ isascii focntion OK\n");

    //ft_isprint
    assert(!ft_isprint(0));
    assert(ft_isprint(32));
    assert(!ft_isprint(127));
    assert(ft_isprint(55));
    assert(ft_isprint(44));
    
    printf("ft_ isprint focntion OK\n");

    //ft_strlen

    assert(strlen("voici le test") == ft_strlen("voici le test"));
    assert(strlen("") == ft_strlen(""));
    assert(ft_strlen(NULL) == 0);
    printf("ft_ strlen ok focntion OK\n");

    //ft_memset
    char ptr[3841];
	char ptr2[3841];

    ft_memset(ptr,'A',3841);
	memset(ptr2,'B',3841);
 
    assert(memcmp(ptr, ptr2 ,3841));
    
    ft_memset(ptr, 'a', 3840);
    memset(ptr2,'a',3840);
    assert(!memcmp(ptr, ptr2 ,3840));

    const int size = 18;
	char b1[0xF00];
    
    char *r1 = memset(b1, 'A', size);
	char *r2 = ft_memset(b1, 'A', size);

    r1 = memset("", 'A', (0));
	r2 = ft_memset("", 'A', 0);

    
    assert(r1 == r2);

    assert(ft_memset(NULL, 0, 10) == NULL);
    assert(ft_memset(ptr,'A',0) == memset(ptr,'A',(0)));
    assert(ft_memset(((void*)0), 'a', 12) == NULL);
   
    printf("ft_ memset ok focntion OK\n");

    //ft_bzero

    ft_bzero(ptr,3841);
    bzero(ptr2, 3841);
    assert(!memcmp(ptr, ptr2 ,3841));
    
    char *p = NULL;
    char *b = NULL;
    
    ft_bzero(p,3841);
    ft_bzero(b,0);
    
    assert(p == NULL);
    assert(b == NULL);

    printf("ft_bzero ok focntion OK\n");

    //ft_memcpy

    ft_memset(ptr, 'A', 3841);
    ft_memcpy(ptr2,ptr,3841);
    assert(!memcmp(ptr,ptr2,3841));

    ft_memset(ptr, 'A', 10);
    ft_memcpy(ptr2,ptr,10);
    assert(!memcmp(ptr,ptr2,10));
    
    //test dst == NULL return NULL
    assert(ft_memcpy(NULL,ptr2,3841) == NULL);
    //test src == NULL return dst
    assert(ft_memcpy(ptr,NULL,3841) == &ptr);
    //test len = 0 return dst
    assert(ft_memcpy(ptr,ptr2,0) == &ptr);

    printf("ft_memcpy ok fonction OK\n");

    //ft_memmove

    char s[] = "voici le txt"; 
    char *d = s - 1; 

   
}