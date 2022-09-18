const char htmlHome[] PROGMEM = R"=====(
<!DOCTYPE HTML><html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie-edge">
  <title>Temperature Measurement System For An Electric Water Heater - Home</title>
  <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.7.2/css/all.css" integrity="sha384-fnmOCqbTlWIlj8LyTjo7mOUStjsKC4pOpQbqyi7RrhN7udi9RwhKkMHpvLbHG9Sr" crossorigin="anonymous">
</head>

<body>
 <section style="margin: -8px;padding: 0;box-sizing: border-box;font-family: 'Poppins', sans-serif;
                 display: flex;justify-content: center;align-items: center;min-height: 100vh;
				 background: url(https://i.ibb.co/3sCbcp1/stellenbosch-background2.jpg);background-size: cover;background-position: center;
				 background-attachment: fixed;padding: 50px;">
 <div class="container" style="position: relative;width: calc(100% - 100px);min-height: calc(100vh - 200px);min-height: 300px;
                               background: rgba(255,255,255,0.4);box-shadow: 0 15px 35px rgba(0,0,0,0.05);border-radius: 20px;
							   display: flex; justify-content: space-between;align-items: center; padding: 50px;">
 <header style="position: absolute;top: -40px;right: 20px;left: 20px;padding: 20px 50px;display: flex;justify-content: space-between;
                align-items: center;background: rgba(255,255,255,0.2);box-shadow: 0 15px 35px rgba(0,0,0,0.05);border-radius: 20px;
				backdrop-filter: blur(10px);border: 1px solid rgba(255,255,255,0.25);border-top: 1px solid rgba(255,255,255,0.5);
			    border-left: 1px solid rgba(255,255,255,0.5);">
 <img src="https://i.ibb.co/Zh16cs2/SUN-splash-logo.png" style="margin: 0;max-height: 60px">
 <ul class="main" style="list-style: none;margin: 0;padding: 0;box-sizing: border-box;display: flex;">
    <li style="margin: 0 10px;"><a href="/" style="text-decoration: none;font-weight: 500;
	                                               color: #8a2435;padding: 8px 15px;border-radius: 25px;"
		onMouseOver="this.style.background='#fff';this.style.boxShadow=' 0 5px 10px rgba(0,0,0,0.1)'" 
		onMouseOut="this.style.background='none';this.style.boxShadow='none';this.style.color='#8a2435'">Home</a><li>
	<li style="margin: 0 10px;"><a href="/file" style="text-decoration: none;font-weight: 500;
	                                               color: #8a2435;padding: 8px 15px;border-radius: 25px;"
		onMouseOver="this.style.background='#fff';this.style.boxShadow=' 0 5px 10px rgba(0,0,0,0.1)'" 
		onMouseOut="this.style.background='none';this.style.boxShadow='none';this.style.color='#8a2435'">File</a><li>
	<li style="margin: 0 10px;"><a href="/settings" style="text-decoration: none;font-weight: 500;
	                                               color: #8a2435;padding: 8px 15px;border-radius: 25px;"
		onMouseOver="this.style.background='#fff';this.style.boxShadow=' 0 5px 10px rgba(0,0,0,0.1)'" 
		onMouseOut="this.style.background='none';this.style.boxShadow='none';this.style.color='#8a2435'">Settings</a><li>
	<li style="margin: 0 10px;"><a href="/data" style="text-decoration: none;font-weight: 500;
	                                               color: #8a2435;padding: 8px 15px;border-radius: 25px;"
		onMouseOver="this.style.background='#fff';this.style.boxShadow=' 0 5px 10px rgba(0,0,0,0.1)'" 
		onMouseOut="this.style.background='none';this.style.boxShadow='none';this.style.color='#8a2435'">Data</a><li>
	<li style="margin: 0 10px;"><a href="/graph" style="text-decoration: none;font-weight: 500;
	                                               color: #8a2435;padding: 8px 15px;border-radius: 25px;"
		onMouseOver="this.style.background='#fff';this.style.boxShadow=' 0 5px 10px rgba(0,0,0,0.1)'" 
		onMouseOut="this.style.background='none';this.style.boxShadow='none';this.style.color='#8a2435'">Graph</a><li>
 </ul>
 </header>
 <div class="content" style="transform: translateX(-80px); max-width: 700px;box-shadow: 0 15px 30px rgba(0,0,0,0.1);
                             border-radius: 20px;backdrop-filter: blur(10px);border: 1px solid rgba(255,255,255,0.25);
							 border-top: 1px solid rgba(255,255,255,0.5);border-left: 1px solid rgba(255,255,255,0.5);
							 padding: 20px 40px 20px 50px;">
    <h2 style="font-size: 2.5em;color: #8a2435;">Temperature Measurement System For An Electric Water Heater</h2>
	<p style="font-size: 1.2em;color: #8a2435;">Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore 
	   magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
	   consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.</p>
 </div>
 <div class="imgBx">
    <img src="https://i.ibb.co/SPhG9dK/System.png" style="transform: translateX(0px);margin-top: 30px;max-width: 50vw;box-shadow: 0 15px 30px rgba(0,0,0,0.1);
                             border-radius: 20px;backdrop-filter: blur(10px);border: 1px solid rgba(255,255,255,0.25);
							 border-top: 1px solid rgba(255,255,255,0.5);border-left: 1px solid rgba(255,255,255,0.5);
							 padding: 20px;margin: 55px 0px 0px 0px;">
 
 </div>
 <p class="copyrightText" style="position: absolute;bottom: 10px;left: 40px;color: #8a2435;">Author: Athenkosi Hlonyane, Student Number: 21879168. All Rights Reserved.</p>
 </div>
 </section>
</body>
<!-- <script>
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturec").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturec", true);
  xhttp.send();
}, 10000) ;
</script> -->
</html>
)=====";
