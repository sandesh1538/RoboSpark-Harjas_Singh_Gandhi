<?php

$dbservername = "localhost";
$dbusername = "root";
$dbpassword = "";
$dbname = "form";


$id=$_POST['id'];
$con = mysqli_connect($dbservername,$dbusername,$dbpassword,$dbname);

$result ="SELECT * FROM student where stud_id=$id";
$res = mysqli_query($con, $result);



    if (mysqli_num_rows($res) > 0)
    {
        
        while ($row = mysqli_fetch_array($res)) 
        {
            $userdetails["stud_id"] = $row["stud_id"];
            $userdetails["stud_name"] = $row["stud_name"];
            $userdetails["branch"] = $row["branch"];
            $userdetails["cgpa"] = $row["cgpa"];
           
        echo "STUDENT ID:-". $userdetails["stud_id"]."<br>";
	    echo "STUDENT NAME:-" .$userdetails["stud_name"]."<br>";
	    echo "BRANCH:-" .$userdetails["branch"]."<br>";
            echo "CGPA:-" .$userdetails["cgpa"]."<br>";
            
            
        }
       
    
    }	
    else 
    {
       
        echo "something wrong";
    }

?>