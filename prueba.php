<?php

$cadena=("07:05:45PM");

$str = strtotime($cadena);
$hora = date("H:i:s", $str);
echo $str;
echo "<br />";
echo $hora."<br />";




 ?>