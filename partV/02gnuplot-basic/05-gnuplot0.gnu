rzzmax  = 1.57	# atlas
rzzmin  = 1.03	# atlas
raamax  = 0.94	# cms
raamin  = 0.66	# cms
rzzCms  = 1.3	# atlas
raaCms  = 0.8	# cms


set o '05-gnuplot0.eps'
set t post 'Helvetica' 12 enhanced color solid



set xr [0:4]
set yr [0:3]

set key at 3.8, 1.9 maxrows 3 maxcols 2 spacing 3.5 samplen 2
set grid front


set mxtics; set mytics  
#set grid xtics
#set grid ytics
set tics scale 2,1
set xtics -5, 1, 5
set ytics 0, 1,3.5

set style fill transparent solid 0.5
set xlabel "{/=21{tan {/Symbol b}}}"
set ylabel "{/=21{{/Symbol a}}}"
set format x "%g"
set format y "%g"

alpha(rhAA, vv) 	= abs(asin(rhAA) + atan(vv))
cossin(rhAA, vv)	= abs(cos(alpha(rhAA, vv))/sin(atan(vv)))
coscos(rhAA, vv)	= abs(cos(alpha(rhAA, vv))/cos(atan(vv)))
sincos(rhAA, vv)	= abs(-sin(alpha(rhAA, vv))/cos(atan(vv)))
sinsin(rhAA, vv)	= abs(-sin(alpha(rhAA, vv))/sin(atan(vv)))


#set label "R_{ZZ} = 1.2" 				at 1, 2.7,1.0
#set label "R_{ZZ} = 0.76" 				at 3, 2,1.0
set label "c_s" 					at 1.8, 1.,1.0
set label "c_c" 					at 0.4, 0.5,1.0
set label "s_c" 					at 1.8, 0.55,1.0
set label "s_s" 					at 1.8, 0.2,1.0


set style line 1  	lw 3.5 lc rgb "orange90"
set style line 2 	lw 1.5 lc rgb "orange5"
set style line 3 	lw 3.5 lc rgb "blue90"
set style line 4 	lw 1.5 lc rgb "blue5"
set style line 5 	lw 3.5 lc rgb "magenta90"
set style line 6 	ps 1.5 lc rgb "magenta5"
set style line 7 	ps 0.5 lc rgb "gray50"
set style line 8 	ps 0.5 lc rgb "gray5"
set style line 9 	pt 2 ps 0.5 lc rgb "red90"
set style line 10	pt 4 ps 0.3 lc rgb "red5"
 

plot 	\
	'+' using 1:(alpha(rzzmin, $1)):(alpha(raamax, $1)) \
		w filledcurves lc rgb "red90" notitle "Inter",\
	alpha(rzzmax, x)  ls 1 title "R@^{/=8{ATLAS}}_{/=8{Max}}  = 1.57", \
	alpha(rzzmin, x) ls 2 title "R@^{/=8{ATLAS}}_{/=8{Min}}   = 1.03", \
	alpha(raamax, x) ls 3 title "R@^{/=8{CMS}}_{/=8{Max}}     = 0.94", \
	alpha(raamin, x)  ls 4 title "R@^{/=8{CMS}}_{/=8{Min}}    = 0.66", \
	cossin(rzzmax, x) ls 5 notitle "c_s",\
	coscos(rzzmax, x) ls 6 notitle "c_c",\
	sincos(rzzmax, x) ls 7 notitle "s_c",\
	sinsin(rzzmax, x) ls 8 notitle "s_s",\
	alpha(rzzCms, x) w p ls 9 title "R@^{/=8{ATLAS}}_{ Z Z }  = 1.3",\
	alpha(raaCms, x)  w p ls 10 title "R@^{/=8{CMS}}_{{/Symbol g} {/Symbol g}}  = 0.8"
