
function changeColor() {

    let simbolos, color

    color = "#";
    simbolos = "0123456789ABCDEF"
    //BUCLE QUE RECORRE LOS SIMBOLOS HASTA LOS 6 NECESARIOS PARA EL CODIGO DE FONDO
    
    for (i = 0; i < 6; i++) {
        color = color + simbolos[Math.floor(Math.random() * 16)]
        console.log(color)
    }

    
    document.body.style.background = color

    
}

