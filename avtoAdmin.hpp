\brief Логика страницы входа
\code
<?php

$login = filter_var(trim($_POST['login']),
FILTER_SANITIZE_STRING);
$pass = filter_var(trim($_POST['pass']),
FILTER_SANITIZE_STRING);
$tNumber = filter_var(trim($_POST['tNumber']),
FILTER_SANITIZE_STRING);
$email = filter_var(trim($_POST['email']),
FILTER_SANITIZE_STRING);

$mysql = new mysqli('localhost', 'root', 'root', 'registred-people');

$result = $mysql->query("SELECT * FROM `registred-people` WHERE `Login` = 'admin' AND `Pass` = 'admin'");

$users = $result->fetch_assoc();
if(count($users) == 0)
{
  echo "Пользователь не найден";
  exit();
}
else
{
  setcookie('user' , $users['Name'], time() + 1800, "/");
}

$mysql -> close();

  header('Location: /admin.php')
   ?>
\endcode