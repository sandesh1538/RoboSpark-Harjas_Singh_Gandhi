<?php
$con=mysqli_connect('localhost','root','robospark');
if(!$con)
{
    echo "Connection error".mysql_connect_error();
}
else
{
    echo "<h3>Database Connection Successful</h3>";
}
?>