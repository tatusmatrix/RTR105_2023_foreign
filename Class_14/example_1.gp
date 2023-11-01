#!/usr/bin/gnuplot --persist

# https://gnuplot.sourceforge.net/demo/fillcrvs.html

set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
set output 'fillcrvs.1.png'

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
plot [-10:10] [-5:3] 1.5+sin(x)/x with filledcurve x2, \
                         sin(x)/x with filledcurve, \
                       1+sin(x)/x with lines, \
                      -1+sin(x)/x with filledcurve y1=-2, \
                    -2.5+sin(x)/x with filledcurve xy=-5,-4., \
                    -4.3+sin(x)/x with filledcurve x1, \
            (x>3.5 ? x/3-3 : 1/0) with filledcurve y2
