set xr[-1:5]
set yr[-1:1]

plot\
'/Users/jaorduz/Dropbox/2017-a/mtrl-clss/gnuplot-basic/04-gnuplot.dat'\
u 1:(cos($2)) w l title "R@^{/=8{ATLAS}}_{/=8{Max}}"

