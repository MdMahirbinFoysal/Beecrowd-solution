while (True):
    a = 0
    b = 0
    while (b<2):
        n= float(input())
        if (n >= 0 and n <= 10):
            a += n
            b += 1
        else:
            print("nota invalida")
    print("media = %.2f" % (a / 2))
    x = 0
    while (True):
        print("novo calculo (1-sim 2-nao)")
        x= int(input())
        if (x==1 or x==2):
            break
    if (x == 2):
        break