#include <unistd.h>

typedef enum
{
    WORD,
    PIPE,
    BUILT_IN,
    REDIR
}category;

typedef struct s_list
{
    char        *str;
    category    type;
    struct s_list *prev;
    struct s_list *next;
}t_list;