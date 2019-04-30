//: [Previous](@previous)

import Foundation

/*:
Esta es la forma para implementar Markdown,
 se debe ir a editor -> show rendered markup
 
# Función para calcular el módulo de un número
 
 En swift casi todo es estruc y lo único que no tiene
 es herencia.
 */
func esPar(_ num: Int) -> Bool{
    if num % 2 == 0 {
    return true
    }
    else
    {
        return false
    }
}
let ansEve = esPar(2)
let ansOdd = esPar(3)

/*
 La acción de copiar se llama inicializar y
 la copia de un objeto se llama instanciar
 */
let emptyString = String() // "    "
let directString = "Hi! 🤟🏾"
let num = Int();
let boo = Bool();

print(emptyString); // es vacía.
print(num); // es vacía.
print(boo); // es vacía.

let fecha = Date()
let oneHrLtr = Date(timeIntervalSinceNow: 3600)

// Inicialización literal
let intro = "Hi, My name is Javier ... ";

intro.count // Propiedad: caracteristicas, valores, atributos
intro.hasPrefix("hi") // Metodo: acciones, comportamiento

intro.isEmpty
//: [Next](@next)

