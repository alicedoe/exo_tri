<?php $tableau = array(90, 88, 50, 45, 78, 147, 37, 56, 4);
$echange = 0;
$trier = false;

while ($trier == false) {
	$trier = true;
        
    for($i = 0; $i < count($tableau)-1; $i++)
    {
        if ($tableau[$i] > $tableau[$i+1])
                {
			$echange = $tableau[$i];
			$tableau[$i] = $tableau[$i+1];
			$tableau[$i+1] = $echange;
			$trier = false; }
    }
    
}

print_r ($tableau);