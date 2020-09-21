
# Linked List Library

> Linked List library I am making during my free time in order to practice pointers and linked list

## Table of Contents

- [Overview](#overview)
- [Installation](#installation)
- [Testing](#testing)
- [Features](#features)
- [Contact](#contact)
- [License](#license)


## Overview
This linked list library is a collection of useful functions when dealing with linked lists. These functions can range from the creating of lists to the addition of new data as well as removal of data. There can also be functions such as pretty print of different lists.

I made this library in order to practice my linked list skills in C, these functions can be used as a stepping stone in understanding how linked list work in C who are a necessary subject to grasp if we want to truly understand how C pointers work.

## Installation

### Clone

- Clone this repo to your local machine using `https://github.com/Memoniak/linkedList_lib.git`

### Setup

```sh
$ cd linkedList_lib
$ make
```
This command will output a .a file which is your library. Now whenever you compile your projects and you want to use this library make sure that you use the flag : *-llinked*
For example : `gcc -llinked cool_project.c `


## Testing

In order to launch the tests for this library you need to have Criterion Installed
*The following information is taken from the Criterion [online documentation](https://readthedocs.org/projects/criterion/downloads/pdf/latest/)*

### Prerequisites
The library is supported on Linux, OS X, FreeBSD, and Windows.
The following compilers are supported to compile both the library and the tests:
* GCC 4.9+ (Can be relaxed to GCC 4.6+ when not using C++)
* Clang 3.4+
* MSVC 14+ (Included in Visual Studio 2015 or later

### Setup
Clone the repo
```sh
$ git clone --recursive https://github.com/Snaipe/Criterion
$ meson build
$ ninja -C build
```
Then install the library files with :
` $ sudo ninja -C build install `

Once that is done go back to the linkedList_lib folder
Once in that folder you can launch

` make tests `

You should then find an executable

### Adding new tests
You can add your own criterion tests if you would like
All you have to do is modify the ==test_linkedList.c== file in the *tests* folder
Once your test added all you have to do is recompile the project with the same command as above

` make tests `

Then execute

## Features

I divided the library into **4** parts. **Creating**, **Handling**, **Printing** and **Freeing**. Each of these 4 parts contain functions that are similar to their respective name.

| Creating |Handling | Printing| Freeing |
|:--------:|:-------------:|:--------:|:-------:|
| create_linked_list | push_linked_list | print_linked_list | free_linked_list
| create_circular_list | pop_linked_list | print_circular_list | free_circular_list
| create_double_list | remove_by_index | print_double_list | free_double_list
| 		     | remove_by_value |
|                    | push_double_list|
|                    | pop_double_list |

 ### Data structures
These are the different data structures I used to represent the lists
 *linked_list*
 ``` c
 typedef struct node {
	 int data;
	 node_t *next;
} node_t
```

*double_list*
``` c
typedef struct double_node {
	int data;
	double_node_t *next;
	double_node_t *prev;
} double_node_t
```

I did my best to make each function in the library as easy as possible to expand and even change the data structures without having to change too much code.
This means you can use these functions are a starting point and build onto them for your projects.


## Contact

I am always looking to learn more and I love that we point out my mistakes.

If you find anything that you think could be done better feel absolutely free to send me a message on these different social medias

> GitHub [@Memoniak](https://github.com/Memoniak)
> Twitter [@bachelin_pol](https://twitter.com/bachelin_pol)
> Discord Polo#5032

## License

MIT
