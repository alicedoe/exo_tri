class Toto { 
    public static void main(String[] args) 
   {
int tableau[] = {90,88,50,45,78,147,37,56,4};
int echange;
int trier = 0;

while (trier == 0) {
    trier = 1;
    for(int i =0; i < tableau.length-1; i++) {
        if (tableau[i] > tableau[i+1]) {
            echange = tableau[i];
            tableau[i] = tableau[i+1];
            tableau[i+1] = echange;
            trier = 0;
        }
    }
}


for(int i =0; i < tableau.length; i++) {
                 
                System.out.print(" " + tableau[i] );
             
 
            }
     }
}