#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sortowanie.py
from random import randint


def wypelnij(lista, n):
    for i in range(n):
     lista.append(randint(0, 100))
     

def wyswietl(lista):
    for i in lista:
        print(i," ", end='')
    print()


def sort_buble(tab):
    n = len(tab)
    for i in range(n-1, 0, -1):
        for j in range(0, i):
            if tab[j] < tab[j+1]:
                zamien(tab, j+1)
def zamien(tab, j, i):
    tmp = tab[j]
    tab[j] = tab[i]
    tab[i] = tmp
                       
def selection_sort(tab):
    for i in range(0, n-1):
        int i = k:
        for i in range(n + 1, i):
            if(tab[j]<tab[k]):
                zamien(tab[n], tab[i])

def main(args):
    n = int(input('Ile wyloswać liczb?'))
    lista = []
    wypelnij(lista, n)
    wyswietl(lista)
    sort_buble(lista)
    wyswietl(lista)
    selection_sort(lista)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
