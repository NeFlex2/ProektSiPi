
<html>
/*!
	\brief Файл для добавления товаров в каталог

	Данный класс реализует возможность добавления 
	новых товаров для админов
*/
<form method = "post">
  <p>Название</p>
  <input type="text" name = "Name"><br>
  <p>Информация о товаре</p>
  <input type="text" name = "Information"><br>
  <p>Цена</p>
  <input type="int" name = "Price"><br>
  <p>Изображение</p>
  <input type="varchar" name = "Image"><br>
  <p>Тип</p>
  <input type="text" name = "Type"><br>
  <button type = "submit">Добавить товар</button>
</form>
<form action = "admin.php" method = "submit">
  <button type = "submit">Вернуться в меню выбора действий</button>
</form>
<style>
body {
  font-size: 30px;
background: #000 url(img/RegBackground.jpg); /* Фоновый цвет и фоновый рисунок*/
color: #fff; /*Цвет текста на странице*/
background-attachment: fixed; /* Фон страницы фиксируется */
background-repeat: repeat-x; /* Изображение повторяется по горизонтали */
}
button{
  font-size: 30px;
  font-weight: bold;
  color: #fff;
  background: #000;
  padding: 20px;
}
</style>
</html>
<?php
$mysql = new mysqli('localhost', 'root', 'root', 'registred-people');
$name = $_POST['Name'];
$information = $_POST['Information'];
$price = $_POST['Price'];
$img = $_POST['Image'];
$type = $_POST['Type'];
if($name != 0 && $information != null && $price != null && $img != 0 && $type != null)
{
mysqli_query($mysql, "INSERT INTO `computers`(`id`,`Name`,`Information`,`price`,`image`, `type`) VALUES(NULL,'$name','$information','$price', '$img', '$type')");
}
?>
