/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

import UIKit

import PlaygroundSupport

let liveviewFrame = CGRect(x : 100, y : 100, width : 300, height : 300)
let liveView = UIView(frame: liveviewFrame)
liveView.backgroundColor = .red

let smallFrame = CGRect(x: 0, y: 0, width: 100, height: 100)
let square = UIView(frame: smallFrame)

liveView.addSubview(square)


UIView.animate(withDuration : 1.0){
    square.backgroundColor = .blue
    
    let scaleTransf = CGAffineTransform(scaleX: 3.0, y: 3.0)
    let rotateTransf = CGAffineTransform(rotationAngle: .pi)
    let translateTransf = CGAffineTransform(translationX: 150, y: 150)
    
let rotaTrnTrn = scaleTransf.concatenating(rotateTransf).concatenating(translateTransf)
    
        square.transform = rotaTrnTrn
}


PlaygroundPage.current.liveView = liveView
