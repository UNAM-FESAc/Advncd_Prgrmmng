#!/bin/bash 
 
latex 02graph-latex.tex
latex 02graph-latex.tex

dvipdf 02graph-latex.dvi
dvipdf 02graph-latex.dvi

rm *.aux *.log *.dvi

# 
echo "" 
echo " See 02graph-latex.pdf" 
echo "" 
