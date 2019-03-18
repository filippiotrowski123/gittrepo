#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  wykres.py
import matplotlib.pyplot as plt


def main(args):
    a = int(input('Podaj współczynik a:'))
    b = int(input('Podaj współczynik b:'))
    x = range(-10, 11)
    y = [a * i + b for i in x]
    
    plt.plot(x, y)
    plt.title('Wykres f(x) = {}*x + {}'.format(a, b))
    plt.grid(True)
    plt.show()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
