/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

struct Alumno{
    var nombre:String
    var edad:Int
}

var pedro = Alumno(nombre: "Pedro", edad: 22)

var luis = pedro
var jose = pedro
luis.nombre="Luis"
luis.edad=24
jose.nombre="Jose"
jose.edad=14

print(luis.nombre, luis.edad)
print(pedro.nombre, pedro.edad)
print(jose.nombre, jose.edad)
