<!DOCTYPE html>
 <html lang = "ru">
 <head>
   <meta charset="utf-8">
   <script src="js/jquery-1.11.0,min.js"></script>
   <script src="test.js"></script>
   </head>
   <style>
   a{
     font-size: 30px;
     font-weight: bold;
     color: #000;
   }
   td
   {
     background: #fff; /* Фоновый цвет и фоновый рисунок*/
     color: #000; /*Цвет текста на странице*/
     padding: 70px;
     width: 200px;
   }
   img{
     width: 250px;
     height: 250px;
     border: none;
   }
   </style>
   <body>
     <header class="hd">
    <nav class="menu">
        <a href="StartMenu.php">Регистрация</a> &emsp; &emsp; &emsp; &emsp;
        <a href="Enter.php">Авторизация</a> &emsp; &emsp; &emsp; &emsp;
        <a href="enterAdmin.php">Вход администратора</a> &emsp; &emsp; &emsp; &emsp;
    </nav><br><br>
</header>
<table>
<?php
$mysql = new mysqli('localhost', 'root', 'root', 'registred-people');
$result = mysqli_query($mysql, "SELECT * FROM `computers`");
//while($row = $result->fetch_assoc())
$computers = mysqli_fetch_all($result);
foreach($computers as $computer)
{
echo'
    <div class = "col-md-4 product-left p-left">
    <div class = "product-main simpleCraft shelfItem">
    <tr>
    <td><img class="" src="'.$computer[4].'" alt = "" /></td>
    <div class="product-bottom">
      <td>'.$computer[1].'</td>
      <td>'.$computer[2].'</td>
      <td><a class ="item_add" href="#"><i></i></a> <span class="item_price">'.$computer[3].'</span></td>

      </div>
      <div class="srch srch1">
      </div>
    </div>
  </div>
';
?>
<td> <a style ="color: green;" href="OneClickReg.php?id=<?php echo $course['id'];?>">Купить в один клик</a></td>
</tr>
<?php
}

?>
</table>
</body>
</html>
