set o '04-gnuplot0.eps'
set t post enhanced color solid

set xr[0:6]
set yr[-1:11]

plot '04-gnuplot.dat' u 1:2 w l title "R@^{/=8{ATLAS}}_{/=8{min}}"
