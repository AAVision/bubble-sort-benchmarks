<?php
function bubbleSort1(&$arr1)
{
    $time_start = microtime(true); 
    $n1 = sizeof($arr1);
    for($i1 = 0; $i1 < $n1; $i1++)
    {
        for ($j1 = 0; $j1 < $n1 - $i1 - 1; $j1++)
        {
            if ($arr1[$j1] > $arr1[$j1+1])
            {
                $t1 = $arr1[$j1];
                $arr1[$j1] = $arr1[$j1+1];
                $arr1[$j1+1] = $t1;
            }
        }
    }

    //dividing with 60 will give the execution time in minutes otherwise seconds
    $time_elapsed_secs = microtime(true) - $time_start;

    //execution time of the script
    echo 'Total Execution Time: '.$time_elapsed_secs.' s';
}
$arr1 = array();
for ($i=0; $i<10000; $i++){
    array_push($arr1, rand(-1*$i,$i*10));
}


$len1 = sizeof($arr1);
bubbleSort1($arr1);
?>