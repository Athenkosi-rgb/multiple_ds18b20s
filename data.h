const char htmlData[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie-edge">
  <title>Temperature Measurement System For An Electric Water Heater - Data</title>
  <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.7.2/css/all.css" integrity="sha384-fnmOCqbTlWIlj8LyTjo7mOUStjsKC4pOpQbqyi7RrhN7udi9RwhKkMHpvLbHG9Sr" crossorigin="anonymous">
</head>

<body>
 <section style="margin: -8px;padding: 0;box-sizing: border-box;font-family: 'Poppins', sans-serif;
                 display: flex;justify-content: center;align-items: center;min-height: 100vh;
				 background: url(https://i.ibb.co/3sCbcp1/stellenbosch-background2.jpg);background-size: cover;background-position: center;
				 background-attachment: fixed;padding: 50px;">
 <div class="container" style="position: relative;width: calc(100vw - 100px);min-height: calc(100vh - 200px);min-height: 300px;
                               background: rgba(255,255,255,0.2);box-shadow: 0 15px 35px rgba(0,0,0,0.05);border-radius: 20px;
							   display: flex; justify-content: space-between;align-items: center; padding: 50px; 0px">
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
 
 <ul style="margin:30px 0px 0px -30px;position: relative; display: grid;column-gap: 30px;row-gap: 30px;
            grid-template-columns: auto auto auto auto auto;z-index: 2; list-style: none;">
  <!--------------------------------------------------------- row 1 --------------------------------------------------->
    <li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">A1</span>
    <span id="temperaturea1" style="font-size: 1.5em;color: #391e94">%TEMPERATUREA1%</span>
    <sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
  <li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">A2</span>
    <span id="temperaturea2" style="font-size: 1.5em;color: #391e94">%TEMPERATUREA2%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">A3</span>
    <span id="temperaturea3" style="font-size: 1.5em;color: #391e94">%TEMPERATUREA3%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">A4</span>
    <span id="temperaturea4" style="font-size: 1.5em;color: #391e94">%TEMPERATUREA4%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">A5</span>
    <span id="temperaturea5" style="font-size: 1.5em;color: #391e94">%TEMPERATUREA5%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<!--------------------------------------------------------- row 2 --------------------------------------------------->
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">B1</span>
    <span id="temperatureb1" style="font-size: 1.5em;color: #391e94">%TEMPERATUREB1%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">B2</span>
    <span id="temperatureb2" style="font-size: 1.5em;color: #391e94">%TEMPERATUREB2%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">B3</span>
    <span id="temperatureb3" style="font-size: 1.5em;color: #391e94">%TEMPERATUREB3%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">B4</span>
    <span id="temperatureb4" style="font-size: 1.5em;color: #391e94">%TEMPERATUREB4%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">B5</span>
    <span id="temperatureb5" style="font-size: 1.5em;color: #391e94">%TEMPERATUREB5%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<!--------------------------------------------------------- row 3 --------------------------------------------------->
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">C1</span>
    <span id="temperaturec1" style="font-size: 1.5em;color: #391e94">%TEMPERATUREC1%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">C2</span>
    <span id="temperaturec2" style="font-size: 1.5em;color: #391e94">%TEMPERATUREC2%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">C3</span>
    <span id="temperaturec3" style="font-size: 1.5em;color: #391e94">%TEMPERATUREC3%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">C4</span>
    <span id="temperaturec4" style="font-size: 1.5em;color: #391e94">%TEMPERATUREC4%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">C5</span>
    <span id="temperaturec5" style="font-size: 1.5em;color: #391e94">%TEMPERATUREC5%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<!--------------------------------------------------------- row 4 --------------------------------------------------->
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">D1</span>
    <span id="temperatured1" style="font-size: 1.5em;color: #391e94">%TEMPERATURED1%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">D2</span>
    <span id="temperatured2" style="font-size: 1.5em;color: #391e94">%TEMPERATURED2%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">D3</span>
    <span id="temperatured3" style="font-size: 1.5em;color: #391e94">%TEMPERATURED3%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">D4</span>
    <span id="temperatured4" style="font-size: 1.5em;color: #391e94">%TEMPERATURED4%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">D5</span>
    <span id="temperatured5" style="font-size: 1.5em;color: #391e94">%TEMPERATURED5%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<!--------------------------------------------------------- row 5 --------------------------------------------------->
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">E1</span>
    <span id="temperaturee1" style="font-size: 1.5em;color: #391e94">%TEMPERATUREE1%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">E2</span>
    <span id="temperaturee2" style="font-size: 1.5em;color: #391e94">%TEMPERATUREE2%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">E3</span>
    <span id="temperaturee3" style="font-size: 1.5em;color: #391e94">%TEMPERATUREE3%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">E4</span>
    <span id="temperaturee4" style="font-size: 1.5em;color: #391e94">%TEMPERATUREE4%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
	<li style="position: relative;margin: 10px;height: 120px;width:15vw;border: 1px solid rgba(255,255,255,0.5);
	           border-right: 1px solid rgba(255,255,255,0.2);border-bottom: 1px solid rgba(255,255,255,0.2);
	           border-radius: 10px;display: flex;justify-content: center;align-items: center;
			   box-shadow: 0 15px 45px rgba(0,0,0,0.3);text-decoration: none;flex-direction: column;
			   backdrop-filter: blur(10px);">
			   <span class="card-label" style="font-size: 2em;">E5</span>
    <span id="temperaturee5" style="font-size: 1.5em;color: #391e94">%TEMPERATUREE5%</span><sup class="units" style="font-size: 1.5em;">&deg;C</sup></li>
</ul>
 
 </div>
 </section>
</body>

<script>
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturea1").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturea1", true);
  xhttp.send();
}, 1000) ;
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturea2").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturea2", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturea3").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturea3", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturea4").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturea4", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturea5").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturea5", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatureb1").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatureb1", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatureb2").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatureb2", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatureb3").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatureb3", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatureb4").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatureb4", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatureb5").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatureb5", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturec1").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturec1", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturec2").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturec2", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturec3").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturec3", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturec4").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturec4", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturec5").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturec5", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatured1").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatured1", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatured2").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatured2", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatured3").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatured3", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatured4").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatured4", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperatured5").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperatured5", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturee1").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturee1", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturee2").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturee2", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturee3").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturee3", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturee4").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturee4", true);
  xhttp.send();
},1000);
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperaturee5").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperaturee5", true);
  xhttp.send();
},1000);
</script>
</html>
)rawliteral";