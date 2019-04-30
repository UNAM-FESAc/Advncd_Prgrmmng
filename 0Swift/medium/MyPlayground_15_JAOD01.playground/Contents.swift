/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

class Profesor{
    var nombre: String
    var edad: Int
    
    init(nombre: String, edad: Int){
        self.nombre = nombre
        self.edad = edad
    }
    
}

let paty = Profesor(nombre: "Paty", edad: 27)
print(paty.nombre, paty.edad)

let javier = paty

javier.nombre = "Javier"
print(javier.nombre,javier.edad)

