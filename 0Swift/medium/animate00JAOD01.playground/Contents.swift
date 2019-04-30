/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigosimport UIKit
import UIKit
import PlaygroundSupport

let liveviewFrame =
    CGRect(x : 100, y : 100, width : 200, height : 200)
let liveView = UIView(frame: liveviewFrame)
liveView.backgroundColor = .red


let smallFrame =
    CGRect(x: 0, y: 0, width: 100, height: 100)
let square = UIView(frame: smallFrame)
square.backgroundColor = .blue


liveView.addSubview(square)
PlaygroundPage.current.liveView = liveView
