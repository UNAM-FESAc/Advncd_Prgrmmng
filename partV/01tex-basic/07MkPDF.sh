#!/bin/bash 
 
latex 07graph-latex.tex

latex 07graph-latex.tex


dvipdf 07graph-latex.dvi

dvipdf 07graph-latex.dvi

rm *.aux *.log *.dvi

# 
echo "" 
echo " See 07graph-latex.pdf" 
echo "" 
