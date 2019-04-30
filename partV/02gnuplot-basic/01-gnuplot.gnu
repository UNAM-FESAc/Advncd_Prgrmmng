set xr[-5:5]
set yr[-1:1]

f(m, n)= m*sin(n)

set style line 1 lc rgb 'red90'
set style line 2 lc rgb 'green60'
set style line 3 lc rgb 'blue30'
set style line 4 lc rgb 'black10'


plot f(1, x) ls 1, f(1, 2*x) ls 2, f(2, x) ls 3, f(2, 2*x) ls 4
