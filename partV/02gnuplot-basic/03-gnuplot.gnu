set t post enhanced color solid
set t postscript
set o '/Users/jaorduz/Dropbox/2017-a/mtrl-clss/gnuplot-basic/03-gnuplot.eps'

set xr[-5:5]
set yr[-1:1]

f(m, n)= m*sin(n)

set style line 1 lc rgb 'red10'
set style line 2 lc rgb 'green10'
set style line 3 lc rgb 'blue10'
set style line 4 lc rgb 'magenta10'


plot for[i=1:4] for[j=1:2] f(i, j*x) ls i
