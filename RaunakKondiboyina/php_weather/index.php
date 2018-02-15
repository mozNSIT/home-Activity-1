
<html>
<body>

<?php  
error_reporting(0);
$get=json_decode(file_get_contents('http://ip-api.com/json/'),true);
date_default_timezone_set($get['timezone']);
$url='https://api.openweathermap.org/data/2.5/weather?q='.$_POST["name1"].'&units=metric&appid=9e91ec239c87aebe08e82e1314463919';
//echo $url;
$data=json_decode(file_get_contents($url),true);
//print_r($data);

$temp=$data['main']['temp'];

echo '<br>';
echo $_POST["name1"],' - ';
print_r($temp);

$url='https://api.openweathermap.org/data/2.5/weather?q='.$_POST["name2"].'&units=metric&appid=9e91ec239c87aebe08e82e1314463919';
//echo $url;
$data=json_decode(file_get_contents($url),true);
//print_r($data);

$temp=$data['main']['temp'];

echo '<br>';
echo $_POST["name2"],' - ';
print_r($temp);

$url='https://api.openweathermap.org/data/2.5/weather?q='.$_POST["name3"].'&units=metric&appid=9e91ec239c87aebe08e82e1314463919';
//echo $url;
$data=json_decode(file_get_contents($url),true);
//print_r($data);

$temp=$data['main']['temp'];

echo '<br>';
echo $_POST["name3"],' - ';
print_r($temp);

$url='https://api.openweathermap.org/data/2.5/weather?q='.$_POST["name4"].'&units=metric&appid=9e91ec239c87aebe08e82e1314463919';
//echo $url;
$data=json_decode(file_get_contents($url),true);
//print_r($data);

$temp=$data['main']['temp'];

echo '<br>';
echo $_POST["name4"],' - ';
print_r($temp);

echo '<br>';echo '<br>';echo '<br>';

/*$url='https://api.openweathermap.org/data/2.5/forecast?q='.$_POST["name4"].'&units=metric&appid=9e91ec239c87aebe08e82e1314463919';
//echo $url;
$data=json_decode(file_get_contents($url),true);
//print_r($data);

$temp=$data['list']['0']['main']['temp'];
$temp1=$data['list']['0']['main']['temp'];
$temp2=$data['list']['0']['main']['temp'];
$temp3=$data['list']['0']['main']['temp'];
$temp4=$data['list']['0']['main']['temp'];

echo '<br>';
//echo $_POST["name4"],' - ';
print_r($temp);*/



?>



</body>
</html>


