#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figura1.py

import turtle


def main(args):
    turtle.setup(800, 800)
    turtle.forward(200)
    turtle.right(90)
    turtle.forward(200)
    turtle.right(90)
    turtle.forward(200)
    turtle.right(90)
    turtle.forward(200)
    turtle.done()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
