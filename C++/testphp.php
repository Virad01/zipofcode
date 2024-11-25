
<?php

class MyClass1{
    public $obj1prop;
}

class MyClass2{
    public obj2prop;
}

$obj1=new MyClass1();
$obj1->objprop=1;

$obj2=new MyClass2();
$obj2->obj2prop=2;

$serialzedObj1= serialze($obj1);
$serialzedObj2= serialze($obj2);




?>