function quadradoArea(lado){        //função para cálcular a área de um quadrado
    var area = lado*lado;
    alert('A área do quadrado de lado ' + lado +  ' é ' + area);
}//end of quadradoArea

function quadradoPerimetro(lado){   //função para cálcular o perímetro de um quadrado
    var perimetro = lado*4;
    alert("O perímetro do quadrado de lado " + lado + " é " + perimetro);
}//end of QuadradoPerimetro

var quadradoInput = document.querySelector("#quadrado");
var quadradoAreaButton = document.querySelector("#quadradoArea");
var quadradoPerimetroButton = document.querySelector("#quadradoPerimetro");

var areaText = document.createTextNode("Cálcular a área do quadrado");
var perimetroText = document.createTextNode("Cálcular o perimetro do quadrado");
quadradoAreaButton.appendChild(areaText);
quadradoPerimetroButton.appendChild(perimetroText);

quadradoInput.setAttribute("placeholder" , "Digite o valor do lado do quadrado");

quadradoPerimetroButton.onclick = function(){
    var lado = quadradoInput.value;
    quadradoPerimetro(lado);
    quadradoInput.value = "";
}//end of onclick Perimetro button

quadradoAreaButton.onclick=function(){
    var lado = quadradoInput.value;
    quadradoArea(lado);
    quadradoInput.value = "";
}//end of onclick area button