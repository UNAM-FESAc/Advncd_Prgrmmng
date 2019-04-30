set t post enhanced color solid
set t postscript
set o '/Users/jaorduz/Dropbox/2017-a/mtrl-clss/gnuplot-basic/02-gnuplot.eps'

set xr[-5:5]
set yr[-1:1]

f(m, n)= m*sin(n)

set style line 1 lc rgb 'red10'
set style line 2 lc rgb 'green10'
set style line 3 lc rgb 'blue10'
set style line 4 lc rgb 'magenta10'


plot f(1, x) ls 1, f(2, x) ls 2, f(3, x) ls 3, f(4, x) ls 4
