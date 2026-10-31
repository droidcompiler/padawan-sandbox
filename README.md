*Este proyecto ha sido creado como parte del currículo de 42 por equinto.*

# Libft

## Descripción

Libft es un proyecto que forma parte del cursus de 42 Urduliz. Va de programar desde cero nuestra propia biblioteca "libft.a" en lenguaje C.

El objetivo es comprender a bajo nivel cómo se estructuran los tipos de datos, cómo interactúa el código con la memoria "Stack y Heap" para tenerlo como herramienta a proyectos futuros.

## Contenido

## 1. Funciones

- **Comprobación y conversión de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- **Manipulación de cadenas:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`.
- **Gestión de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
- **Conversión y asignación dinámica:** `ft_atoi`, `ft_calloc`, `ft_strdup`.

## 2. Funciones adicionales

- `ft_substr`: Extrae una subcadena a partir de un índice y tamaño determinados.
- `ft_strjoin`: Concatena dos cadenas reservando nueva memoria con `malloc`.
- `ft_strtrim`: Recorta caracteres iniciales y finales que coincidan con un conjunto dado.
- `ft_split`: Divide una cadena en un arreglo de cadenas utilizando un delimitador.
- `ft_itoa`: Convierte un número entero en una cadena de caracteres.
- `ft_strmapi`: Aplica una función a cada carácter de la cadena, devolviendo una nueva cadena resultante.
- `ft_striteri`: Aplica una función a cada carácter modificándolo directamente sobre la memoria original.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Escritura directa sobre un descriptor de archivo (*File Descriptor*).

## 3. Listas enlazadas
Funciones orientadas al manejo de estructuras `t_list`

- **Creación y recorrido:** `ft_lstnew`, `ft_lstsize`, `ft_lstlast`.
- **Añadir nodos:** `ft_lstadd_front`, `ft_lstadd_back`.
- **Eliminación y limpieza de memoria:** `ft_lstdelone`, `ft_lstclear`.
- **Iteración y mapeo:** `ft_lstiter`, `ft_lstmap`.

## Instrucciones

### Compilación
Compila utilizando `cc` y las flags `-Wall -Wextra -Werror`

# Compilar y generar libft.a
make

# Eliminar los archivos objeto (.o)
make clean

# Eliminar los archivos objeto (.o) y el archivo libft.a
make fclean

# Recompilar todo de 0
make re

## Recursos y uso de IA

- Manual "man"
- Beej's guide to c programming
- C tutor
- cs50

Uso de la IA para consultas conceptuales y explicación sobre funciones y creación de casos a modo de prueba. No se utilizó para generar código final a modo de entrega directa.
