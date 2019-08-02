/*The main objective of this application is to calculate the perimeter and the area of
  a circle of radius was gived for the user.
 */

//First of all we need to get the reference of all elements in the div inside the HTML file.
var inputCircle = document.querySelector("#radius");
var buttonPerimeter = document.querySelector("#perimeter");
var buttonArea = document.querySelector("#area");

//Later that is to give the name to the buttons.
var perimeterTextLink = document.createTextNode("Calculate the perimeter");
var areaTextLink = document.createTextNode("Calculate the perimeter");
//And link the name to the button.
buttonArea.appendChild(areaTextLink);
buttonPerimeter.appendChild(perimeterTextLink);

//And to end the "beautifull" part of the program we need to add the placeholder to the input.
inputCircle.setAttribute("placeholder" , "Place the radius here");

//Now we start the real work!
//Create all the function that the program need
//We will nedd the pi value, and in that application will be 3.14
const PI = 3.14                     //Put the name of const to facilitate the read.

//To calculate the perimeter of the circle, we have to use the same formula of the circumference
// 2 X RADIUS X PI.
function calculatePerimeter(radius){
    var perimeter = 2*radius*PI;
    return perimeter;
}//end of function calculatePerimeter

//To calculate the are of the circle, it's easy , we only need to use the following
//mathematical formula: RADIUS²*PI
function calculateArea(radius){
    var area = radius*radius*PI;
    return area;
}//end of function calculateArea

//The final:
//To the truth end of the program, we need to actived the function when we use the button.

//This function will get the radius of the input, then calculate the area, show the information
//in the screen, the clear the input
buttonArea.onclick = function(){
    var radius = inputCircle.value;
    var area = calculateArea(radius);
    alert("The value of the area of the circle who has "+radius+" of radius is "+area);
    inputCircle.value = "";
}//end of buttonArea.onclick

//This function wil get the radius of the input, the calculate the area, show the information
//in the screen,then clear the input 
buttonPerimeter.onclick = function(){
    var radius = inputCircle.value;
    var perimeter = calculatePerimeter(radius);
    alert("The value of the perimeter of the circle who has "+radius+" of radius is "+perimeter);
    inputCircle.value = "";
}//end of buttonPerimeter.onclick