funciones:

1**"ft_strlen" ----> Cuenta un string y devuelve un size t con el numero de caracteres. size_t  ft_strlen(const char *str);

2**"ft_strlcpy" -----> Copia x tamano de un string base a uno destino. Copiara -1 caracter para dejar ese espacio al '\0'. por ejemplo si pedimos que imprima 4 del string 'hola', copiara 'hol' porque el ultimo lo reserva para ponerle un '\0'.
Devuelve la cantidad de caracteres que tiene el string base. size_t	ft_strlcpy(char *dst, const char *str, size_t size);

3**"ft_strlcat" -----> Une dos strings, con un limite de tamano especifico. Al final del string de destino copiara el string base -1 caracter de lo que le pase, dejando lugar para el '\0'. si quiero unir 'hola' a 'chau' tendria que pasarle 9 de tamano;
Devuelve la cantidad de caracteres de la cadena resultante si es que no es mayor que el tamano pasado. si es mayor la cadena resultante que el size, devuelve size + cadena base. unsigned int	ft_strlcat(char *dst, char *str, unsigned int size);

4**"ft_strncmp" ---> Compara n caracteres de dos cadenas y devuelve un valor entero dependiendo de si una mayor, menor o igual que la otra. intft_strncmp(const char *s1, const char *s2, size_t n);

5**"ft_strchr" ---> Busca la PRIMERA aparicion de un caracter en un string. Devuelve un puntero a la primera aparicion o NULLO si no se encuentra. char	*ft_strchr(const char *s, int c);

6**"ft_strrchr" ---> Busca la ULTIMA aparicion de un caracter en un string. Devuelve un puntero a
    la ultima aparicion o NULLO si no se encuentra. char	*ft_strrchr(const char *s, int c);

7**"ft_strnstr" ---> Busca dentro un string grande, otro pequeno. Por ejemplo en 'hola como estas' busca 'como', si lo encuentra devuelve un puntero desde la primera aparicion. Sino lo encuentra devuelve NULLO. Esta funcion esta delimitada por un size. Es decir que buscara en X size. Si no le pasas 10, no encontraria a 'como'. char	*ft_strnstr(const char *big, const char *little, size_t len);

8**"ft_strdup" ---> Copia una cadena de caracteres a otra nueva y devuelve la cadena nueva. La funcion asigna memoria con malloc para esta nueva cadena. char	*ft_strdup(const char *s1);

9**"ft_striteri" ---> Aplica una funcion a cada caracter del strin, pasando a esa funcion la posicion del caracter como primer argumento, y el puntero al caracter como segundo argumento. Por ejemplo puedo al string 'Hola como estas' aplicarle una funcion X que imprima cada uno de esos caracteres. Ya que ambas funciones no retornan nada .void	ft_striteri(char *s, void (*f) (unsigned int, char*));

10**"ft_strmapi" ---> Aplica una funcion a cada caracter del string, pasandole a esa funcion la posicion del caracter y el caracter como argumentos. Crea un nuevo string y le asigna memoria mediante malloc. Por ejemplo podemos hacer que todos los caracteres del string pasen de minuscula a mayuscula y los metemos dentro del nuevo string creado para luego devolverlos. Tambien retorna NULLO si se asigna mal la memoria. char*ft_strmapi(const char *s, char (*f) (unsigned int, char));

11**"ft_strjoin" ---> Une dos strings creando una nueva string para guardar esta concatenacion. Asigna memoria con malloc para esta nueva string. Devuelve esta nueva string o NULLO si falla la asignacion de memoria. char	*ft_strjoin(const char *s1, const char *s2);

12**"ft_strtrim" ---> Elimina los caracteres de un string2 que encuentre al principio y final de otro string1. Solo hasta que encuentre un caracter no perteneciente a string2. Lo resultante(string1 recortada de los caracteres string2) lo mete dentro de otro string que crea. Asigna memoria mediante malloc para este nuevo string. Por ejemplo si quiero borrar '-' de '---hola-' , daria por resultado 'hola'.
Retorna ademas de este nuevo string, NULLO si se falla el asignado de memoria. char	*ft_strtrim(const char *s1, const char *set);

13**"ft_substr" ---> Crea una substring de la string1 que recibe la funcion. Esta substring empieza desde el indice start y tiene la longitud de len, ambos parametros que recibe la funcion.
Devuelve la substring resultante o NULLO si falla la asignacion de memoria. Por ejemplo quiero hacer una substring de 'hola como' le paso 4, 4 . ' como ' . char	*ft_substr(const char *s, unsigned int start, size_t len);

la diferencia entre usar estas siguientes funciones respecto de las anteriores, es que trabajan con zonas de memoria, bloques. Las str con strings.

14**"ft_memset" ---> Completa de un valor, una zona de memoria. Recibe un puntero a la zona de memoria en donde realizara la operacion, el valor que se establecera en esos bytes de memoria y la cantidad de bytes que se estableceran. Por ejemplo, si quiero completar un array con letras A.
enviaria el 'array', 'A' ,y 2. Dara como resultado 'AA'.  void    *ft_memset(void *b, int c, size_t len);

15**"ft_memmove" ---> Copia len cantidad de bytes de una zona de memoria base a una zona de memoria destino, posiblemente solapandose. Recibe como argumentos un puntero a la zona de destino donde realizara la copia, un puntero a la zona de memoria desde donde se copiaran los datos y el numero de bytes que copiara de base a destino.
Devuelve un puntero a la zona de memoria destino. void	*ft_memmove(void *dst, const void *src, size_t len);

16**"ft_memcpy" ---> Es como strcpy con la diferencia de que en vez de copiar strings, copia zonas d memoria. Copia x cantidad de bytes de la zona de memoria base a la zona de memoria destino.
Devuelve un puntero a la zona de memoria destino. void	*ft_memcpy(void *dest, const void *src, size_t nbytes);

17**"ft_memcmp" ---> Al igual que strcmp, Compara los primeros x bytes de dos bloques de memoria(s1 y s2) Devuelve un valor mayor, menor o igual dependiendo de si uno es mayor menor o igual que el otro.
La funcion recibe como parametros, bloque de memoria s1 a comparar, bloque de memoria s2 a comparar y el numero de bytes que se compararan.  intft_memcmp(const void *s1, const void *s2, size_t n);

18**"ft_memchr" ---> Busca un caracter dentro de un bloque de memoria de tamano X. La funcion recibe ese tamano x, el puntero al bloque de memoria y el caracter a buscar.
Devuelve un puntero al lugar en la memoria donde lo encontro, sino lo encuentra devuelve NULLO.
void	*ft_memchr(const void *s, int c, size_t n);

19**"ft_bzero" ---> Establece todos los bytes de un bloque de memoria a cero.	Es útil para inicializar o 'borrar' la memoria de manera eficiente. void	ft_bzero(void *s, size_t n);

20**"ft_itoa" ---> Crea una string en donde guardara como caracteres, el entero recibido.
Asignara con malloc memoria a esa string. Devolvera un puntero a la string creada para almacenar el entero. char	*ft_itoa(int n);

21**"ft_calloc" ---> Asigna memoria para un numero especifico de elementos de un tamano dado y la iniciliza a 0. Es util para asignar y preparar memoria para estructuras de datos, como arreglos. void	*ft_calloc(size_t num_elements, size_t size);

22**"ft_lstnew"---> Crea un nodo nuevo con el contenido especificado y lo inicializa.
Recibe un puntero al contenido que se almacenara en el nodo de la lista y devuelve un puntero al nuevo nodo de la lista. o NULLO si se asigna mal la memoria.
t_list	*ft_lstnew(void *content);

23**"ft_lstadd_front"---> Agrega un nuevo nodo al principio de una lista. si la lista esta vacia, el puntero lst se actualizara para apuntar al nuevo nodo.
Si no esta vacia, el nuevo nodo se enlazara con el nodo inicial, y luego se actualizara el puntero lst para apuntar al nuevo nodo. no devuelve nada.

aclaracion: *lst = nuevo ---->
Esta línea actualiza la cabeza de la lista (*lst) para que ahora apunte al nuevo nodo (nuevo). Ahora, el nuevo nodo se convierte en el primer elemento de la lista, ya que la cabeza de la lista apunta a él.
aclaracion: nuevo->next = *lst --->
Esta línea establece el puntero next del nuevo nodo (nuevo) para que apunte al nodo actual al que apunta la cabeza de la lista (*lst). Básicamente, estás colocando el nuevo nodo al principio de la lista, y su campo next apunta al nodo que originalmente era el primer nodo de la lista.
void	ft_lstadd_front(t_list **lst, t_list *nuevo);

24**"ft_lstadd_back"--->  Agrega un nuevo nodo al final de una lista enlazada.
Si la lista esta vacia, el puntero lst se actualizara con el valor del nuevo elemento\nodo.
Si no esta vacia, el nuevo elemento se agregara al final de la lista existente.
No devuelve nada.
void	ft_lstadd_back(t_list **lst, t_list *new);

25**"ft_lstsize"---> Cuenta el numero de elementos en una lista enlazada. Recorre la lista desde el primer nodo hasta el ultimo, incrementando el contador.
Devuelve el numero total de nodos de la lista.
int	ft_lstsize(t_list *lst);

26**"ft_lstclear" ---> Elimina y libera la memoria de todos los nodos de la lista enlazada recibida en la funcion mediante un puntero a puntero lst. Tambien toma como argumento la funcion del, que se utiliza para liberar la memmoria del contenido de cada nodo. No devuelve nada.
void	ft_lstclear(t_list **lst, void (*del)(void *));

27**"ft_lstdelone" ---> Elimina y libera la memoria de un solo nodo de una lista, lista reciba como parametro de la funcion mediante un puntero lst.
Toma tambien como parametro la funcion del que se encarga de liberar la memoria del contenido del nodo que se eliminara. no devuelve nada.
void	ft_lstdelone(t_list *lst, void (*del)(void*));

28**"ft_lstlast"---> Devuelve un puntero al ultimo nodo de la lista enlazada.
si la lista esta vacia, devuelve NULLO.
t_list	*ft_lstlast(t_list *lst);

29**"ft_lstiter" ---> Recorre una lista enlazada y aplica la funcion f a cada uno de los nodos.
la funcion f debe tomar un puntero al contenido del nodo y no devuelve ningun valor.
Se la puede usar por ejemplo para pasar el contenido de cada nodo a mayusculas.
void	ft_lstiter(t_list *lst, void (*f)(void *));

30**"ft_lstmap" ---> Itera la lista lst y aplica la funcion f al contenido de cada nodo. Crea una lista resultante con la aplicacion correcta de esta funcion f sobre cada nodo. La funcion del se utiliza para eliminar el contenido de un nodo si fuera necesario.
Devuelve un puntero a la nueva lista resultante, con los resultados del a apliacion de f, o nULLO  si fallta la creacion de un nuevo nodo.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
