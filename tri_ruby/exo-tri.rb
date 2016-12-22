tableau = [90, 88, 50, 45, 78, 147, 37, 56, 4]
echange = 0
trier = 0

while trier == 0  do
    trier = 1
    i=0    
    while i<tableau.length-1
        if tableau[i] > tableau[i+1]
            echange=tableau[i]
            tableau[i]=tableau[i+1]
            tableau[i+1]=echange
            trier=0
        end
        i=i+1
    end
    
end

puts tableau