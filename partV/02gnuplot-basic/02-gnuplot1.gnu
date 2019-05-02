set o '02-gnuplot1.eps'
set t post 'Helvetica' 12 enhanced color solid

set xr[-5:5]
set yr[-1:1]

f(m, n)= m*sin(n)

set style line 1 lc rgb 'red10'
set style line 2 lc rgb 'green10'
set style line 3 lc rgb 'blue10'
set style line 4 lc rgb 'magenta10'

plot for[i=1:4] f(i, i*x) ls i
