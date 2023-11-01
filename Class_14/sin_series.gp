#!/usr/bin/gnuplot --persist

set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
set output 'sin_series.png'

set key outside right top vertical Right noreverse enhanced autotitle nobox
unset parametric
set title "plot with filledcurve [options]" 
set xrange [ * : * ] noreverse writeback
set x2range [ * : * ] noreverse writeback
set yrange [ * : * ] noreverse writeback
set y2range [ * : * ] noreverse writeback
set zrange [ * : * ] noreverse writeback
set cbrange [ * : * ] noreverse writeback
set rrange [ * : * ] noreverse writeback
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
a0(x) = (-1)**0 * (x)**(2*0+1) / (1)
a1(x) = (-1)**1 * (x)**(2*1+1) / (1*2*3)
a2(x) = (-1)**2 * (x)**(2*2+1) / (1*2*3*4*5)

plot [-10:10] [-5:5] sin(x) with lines,\
                      a0(x) with lines,\
                a0(x)+a1(x) with lines,\
          a0(x)+a1(x)+a2(x) with lines
