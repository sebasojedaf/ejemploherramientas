fig: fig.pdf
sumas.x: sumas.cpp

%.x: %.cpp
	g++ $< -o $@
datossumas.txt:sumas.x
	./$< > $@
fig.pdf:plot.gp datossumas.txt
	gnuplot $<
