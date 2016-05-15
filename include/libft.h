#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <stdarg.h>

# define NORMAL "\e[0m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define WHITE "\e[0;37m"
# define BLUE "\e[0;34m"
# define BROWN "\e[0;33m"
# define CYAN "\e[0;36m"
# define GRAY "\e[1;30m"
# define PURPLE "\e[0;35m"
# define LIGHT_BLUE "\e[1;34m"
# define LIGHT_CYAN "\e[1;36m"
# define LIGHT_GRAY "\e[0;37m"
# define LIGHT_GREEN "\e[1;32m"
# define LIGHT_PURPLE "\e[1;35m"
# define LIGHT_RED "\e[1;31m"

typedef struct			s_list_1
{
	void				*content;
	size_t				content_size;
	struct s_list_1		*next;
}						t_list_1;

typedef struct			s_list
{
	char				*flag;
	char				*lmod;
	char				*of_str;
	wchar_t				*of_wstr;
	char				conv;
	char				*out;
	long long			of_int;
	int					field;
	int					precision;
	int					precision_sign;
	int					min;
	int					zero;
	int					space;
	int					plus;
	int					hash;
	int					printed;
}						t_list;

/*
** Conversion
*/
int						ft_atoi(const char *str);
void					ft_bzero(void *s, size_t n);
char					*ft_itoa(int nb);

/*
** Memory management
*/
void					*ft_memalloc(size_t size);
void					*ft_memccpy(void *dst, const void *src,
						int c, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					ft_memdel(void **ap);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memset(void *b, int c, size_t len);

/*
** std output
*/
void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);
void					ft_putendl(char const *s);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr(int nb);
void					ft_putnbr_fd(int nb, int fd);
void					ft_putstr(char const *s);
void					ft_putstr_fd(char const *s, int fd);
void					wdmatch(char *s1, char *s2);
void					ft_error(char *str);

/*
** string management
*/
char					*ft_strcat(char *dest, const char *src);
char					*ft_strchr(const char *s, int c);
void					ft_strclr(char *s);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dest, const char *src);
void					ft_strdel(char **as);
char					*ft_strdup(const char *s1);
int						ft_strequ(char const *s1, char const *s2);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strjoin(char const *s1, char const *s2);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
size_t					ft_strlen(const char *str);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s1,
						char (*f)(unsigned int, char));
char					*ft_strncat(char *dest, const char *src, size_t n);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strncpy(char *dest, const char *src, size_t n);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strnew(size_t size);
char					*ft_strnstr(const char *s1, const char *s2, size_t n);
char					*ft_strrchr(const char *s, int c);
char					**ft_strsplit(char const *s, char c);
char					*ft_strstr(const char *s1, const char *s2);
char					*ft_strsub(char const *s,
						unsigned int start, size_t len);
char					*ft_strtrim(char const *s);
char					*ft_strtoupper(char *str);
char					*ft_strtolower(char *str);

/*
** char management
*/
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);

/*
** list management
*/
void					ft_lstdel(t_list_1 **alst, void (*del)(void*, size_t));
void					ft_lstadd(t_list_1 **alst, t_list_1 *ls_new);
t_list_1				*ft_lstnew(void const *content, size_t content_size);
void					ft_lstiter(t_list_1 *lst, void (*f)(t_list_1 *elem));
t_list_1				*ft_lstmap(t_list_1 *lst,
						t_list_1 *(*f)(t_list_1 *elem));
void					ft_lstdelone(t_list_1 **alst,
						void (*del)(void*, size_t));

/*
** Maths
*/
int						ft_abs(int nb);
int						ft_power(int nb, int power);
int						ft_sqrt(int nb);
void					sort_in_tab(int *tab, unsigned int size);

/*
** ft_printf
*/

char					*ft_itoa_base(long long value, int base);
char					*ft_itoa_base_ulongmax(uintmax_t value, int base);
t_list					*ft_reset_list(t_list *stc);
void					ft_widechar(t_list *stc, char *mask,
						char *widechar, int len);
int						ft_needle(char c, char *str);
int						ft_figure(int number);
void					ft_putichar(int i, char c);
int						ft_to_stdout(char *ptr, char *to_stdout);
int						ft_check_of(t_list *stc);
void					ft_epur(t_list *stc, char toerase);
void					ft_free_list(t_list *stc);
void					ft_init_struct(t_list *stc);
void					ft_print_base(t_list *stc, int base);
void					ft_print_base_max(t_list *stc, int base);
int						ft_printf(const char *format, ...);
int						ft_find_flag(t_list *stc, char *ptr);
int						ft_find_field(t_list *stc, char *ptr, int p);
int						ft_find_precision(t_list *stc, char *ptr, int p);
int						ft_find_lengthmod(t_list *stc, char *ptr, int p);
void					ft_conv_digit(char *ptr, t_list *stc, va_list ap);
void					ft_conv_alpha(char *ptr, t_list *stc, va_list ap);
void					ft_conv_alpha_pcc(char *ptr, t_list *stc, va_list ap);
void					ft_no_conv(char *ptr, t_list *stc);
void					ft_split_size(char *ret, int time);
void					ft_d(t_list *stc, char *ptr);
void					ft_i(t_list *stc, char *ptr);
void					ft_o(t_list *stc, char *ptr);
void					ft_u(t_list *stc, char *ptr);
void					ft_x(t_list *stc, char *ptr);
void					ft_hh(t_list *stc);
void					ft_h(t_list *stc);
void					ft_l(t_list *stc);
void					ft_ll(t_list *stc);
void					ft_j(t_list *stc);
void					ft_z(t_list *stc);
void					ft_lmod_ptr(t_list *stc);
int						ft_atoi_btod(char *str, int nb, int i, int result);
int						ft_wstrlen(wchar_t *wstr);
int						ft_wchar_len(wchar_t wchar);
void					ft_wich_flags(t_list *stc);
void					ft_util_dioux(t_list *stc, int base);
void					ft_util_sspcc(t_list *stc);
void					hash(t_list *stc);
void					zero(t_list *stc);
void					minus(t_list *stc);
void					plus(t_list *stc);
void					space(t_list *stc);
void					ft_s(t_list *stc);
void					ft_bs(t_list *stc);
void					ft_p(t_list *stc);
void					ft_c(t_list *stc);
#endif
