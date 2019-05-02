set o '02-gnuplot0.eps'
set t post 'Helvetica' 12 enhanced color solid

set xr[-5:5]
set yr[-1:1]

f(m, n)= m*sin(n)

set style line 1 lc rgb 'red10'
set style line 2 lc rgb 'green10'
set style line 3 lc rgb 'blue10'
set style line 4 lc rgb 'magenta10'


plot f(1, x) ls 1, f(2, x) ls 2, f(3, x) ls 3, f(4, x) ls 4
