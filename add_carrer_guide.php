<?php
require_once("../class/class_carrer_guide.php");
require_once("../class/login_class.php");
?>
<form action="" method="post" enctype="multipart/form-data">
<br />name
<br /><input type="text" name="name" />
<br />location
<br /><select name="loc">
<option>select</option>
<option>kannur</option>
<option>kozhikode</option>
<option>Malapuram</option>
<option>Thrissur</option>
<option>Ernakulam</option>
<option>Kollam</option>
<option>trivandrum</option>
</select>
<br />emailid
<br /><input type="text" name="emailid" />
<br />phoneno
<br /><input type="text" name="phoneno" />
<br />qualification
<br /><input type="text" name="qualification" />
<br />username
<br /><input type="text" name="uname" />
<br />password
<br /><input type="text" name="pass" />
<br />photo
<br /><input type="file" name="myfile" />
<br /><input type="submit" name="btn" value="submit" />
</form>
<?php
if(isset($_POST["btn"]))
{
	$ob1 = new class_carrer_guide();
	
	$ob1->name=$_POST["name"];
	$ob1->location=$_POST["loc"];
	$ob1->emailid=$_POST["emailid"];
	$ob1->phoneno=$_POST["phoneno"];
	$ob1->qualification=$_POST["qualification"];
	$ob1->username=$_POST["uname"];
	$ob1->password=$_POST["pass"];
	$source=$_FILES["myfile"]["tmp_name"];
    $ob1->photo="upload/".$_FILES["myfile"]["name"];
    move_uploaded_file($source,"../".$ob1->photo);
	$ob2=new login_class();
	$ob2->username=$_POST["uname"];
	$ob2->password=$_POST["pass"];
	$ob2->usertype="carrerguide";
	if(($ob1->insert()  >0)&&($ob2->insert()>0))
{
	echo "Inserted .. ";
}
else
{
	echo "Error...";
}

}
?>
