/*brief Страница управления сайтом
		Эта страница создана для администрации
*/
\code
<!DOCTYPE html>
<html lang = "ru">
<style>
a{
  font-size: 30px;
  font-weight: bold;
  color: #000;
}
body{
  background: #000 url(img/RegBackground.jpg);
}
button {
  background-color: #008CBA; /* Green */
  border: 2px solid #555555;

  color: black;
  padding: 15px 32px;

  text-align: center;
  text-decoration: none;
  display: inline-block;

  font-size: 16px;
  font-weight: bold;

}
button:hover {
  background-color: #4CAF50; /* Green */
  color: white;
}
img{
  width: 250px;
  height: 250px;
  border: none;
}
</style>
<head>
  <script src="js/jquery-1.11.0,min.js"></script>
  <script src="test.js"></script>
  <nav class="menu">
      <a href="exit.php">Выход</a> &emsp; &emsp; &emsp; &emsp;
  </nav>
<body>

 <br><br><br><form action = "addSmth.php" method = "post">
   <button type = ""><br><br>Добавить товар<br><br></button>
 </form>
 <br><form action = "deleteSmth.php" method = "post">
   <button type = ""><br><br>Посмотреть товары/Удалить товар<br><br></button>
 </form>
 <br><form action = "deleteUser.php" method = "post">
   <button type = ""><br><br>Посмотреть пользователей/Удалить пользователя<br><br></button>
 </form>
</body>
</head>
\endcode