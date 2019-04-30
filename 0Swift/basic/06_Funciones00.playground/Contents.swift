/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
func area(_ base:Double, b : inout Double) -> Double{
    let area = base * b;
    return area;
}

var b = 2.0
let respuesta = area(12.5, b: &b);
print(respuesta);


