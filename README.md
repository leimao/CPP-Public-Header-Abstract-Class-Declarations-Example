# C++ Public Header Abstract Class Declarations Example

## Introduction

This is an example for showing how to use abstract class declarations in the C++ public header file for hiding private methods and members.

## Usages

### Build

```
$ mkdir -p build
$ cd build
$ cmake ..
$ make -j
```

### Execution

```
$ cd app
$ ./app
Hello, I'm Bob. 
Nice to meet you.
$ ./app_failure 
Segmentation fault (core dumped)
$ ./app_virtual 
Hello, I'm Bob. 
Nice to meet you.
```