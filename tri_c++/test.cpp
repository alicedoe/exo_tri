#include <iostream>

int main()
{
int tableau[9] = {90, 88, 50, 45, 78, 147, 37, 56, 4};
int echange = 0;
int trier = 0;
int taille = sizeof(tableau)/sizeof(int);

    while (trier == 0)
        {
            trier = 1;
            int i=0;
            while (i<taille-1)
                {
                    if (tableau[i] > tableau[i+1])
                        {
                            echange=tableau[i];
                            tableau[i]=tableau[i+1];
                            tableau[i+1]=echange;
                            trier=0;
                        }
                    i=i+1;
                }
            
        }
int j = 0;
while (j<taille-1)
{
std::cout << tableau[j] << std::endl;
j=j+1;
}

}