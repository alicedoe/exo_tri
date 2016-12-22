var tableau = [90, 88, 50, 45, 78, 147, 37, 56, 4];
var echange = 0;
var trier = false;
var i;

while (trier === false) {
	trier = true;
	for (i = 0; i < tableau.length /2; i++) {
		if (tableau[i] > tableau[i + 1]) {
			echange = tableau[i];
			tableau[i] = tableau[i + 1];
			tableau[i + 1] = echange;
			trier = false;
		}
	}
}
document.write(tableau);