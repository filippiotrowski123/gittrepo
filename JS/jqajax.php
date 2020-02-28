<!DOCTYPE html>
<html>
<head>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script>
$(document).ready(function(){
  $("b1").click(function(){
    $("#div1").load("demo_test.txt");
  });
  $("b2").click(function(){
    $("#div1").load("getinfo.php", function(data){
      
        });
    });
});
</script>
</head>
<body>

<div id="div1"><h2>Let jQuery AJAX Change This Text</h2></div>

<button id="b1">Get External Content</button>
<button id="b2">Żądanie</button>
</body>
</html>
