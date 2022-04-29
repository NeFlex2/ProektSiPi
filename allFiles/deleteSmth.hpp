<?php
$mysql = new mysqli('localhost', 'root', 'root', 'список фильмов на завтра');
$id = $_GET['id'];
mysqli_query($mysql, "DELETE FROM `кинотеатр` WHERE `кинотеатр`.`id` = '$id'");
header('Location:auth.php');
?>
