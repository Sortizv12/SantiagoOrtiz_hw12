graph.png : SO_advection.cpp SO_graphs.py dats.txt
	g++ SO_advection.cpp
	./a.out > dats.txt
	python SO_graphs.py
