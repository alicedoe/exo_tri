tableau = [90, 88, 50, 45, 78, 147, 37, 56, 4]
echange = 0
trier = False

while trier==False:
    i=0
    trier=True
    while i<len(tableau)-1:
        if tableau[i] > tableau[i+1]:
            echange=tableau[i]
            tableau[i]=tableau[i+1]
            tableau[i+1]=echange
            trier=False
        i=i+1
print(tableau)