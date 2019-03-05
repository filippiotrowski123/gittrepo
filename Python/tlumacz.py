#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  tlumacz.py

def pokaz_menu():
    """Funkcja wyświetla działania dostępne dla użytkownia"""
    print("""
    Wybierz działanie:

    1. Lista słów
    2. Wprowadzanie / edycja słów
    3. Tłumaczenie
    4. Zmień język
    5. Koniec
""")
def listaSlow(dane):
    if not dane:
        print('Brak słów.')
        return
    i = 1
    print()
    for slowo, znaczenia in dane.items():
        print('{}, {}, {}'.format(i, slowo, ','.join(dane[slowo])))
        i += 1
def pobierzZnaczenia():
    znaczenia = input('Podaj słowo:').strip
def pobierzDane(dane):
    slowo = input('podaj słowo:').strip()
    if slowo in dane.keys():
        print('Słowo w bazie.')
        print('{}, {}'.format(slowo, ','.join(dane[slowo])))
        if input('Czy chcesz zmienić znaczanie (t/n)?').lower() == 't':
            dane[slowo] = pobierzZnaczenia()
        else:
            dane[slowo] = pobierzZnaczenia()
        

def main(args):
    dane ={'go': ['iść', 'jeżdzić'],'see': ['widieć', 'oglądać']}
    operacja = 0
    while operacja != 5:
        pokaz_menu()
        operacja = int(input(""))
        if operacja == 1:
            listaSlow(dane)
        elif operacja == 5:
            print("Do zobaczenia")
        else:
            print("")
                
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
