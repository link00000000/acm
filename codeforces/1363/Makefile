
###########################
# BUILD
###########################
A : A.cpp
	g++ -std=c++14 -o $@ -g $^

B : B.cpp
	g++ -std=c++14 -o $@ -g $^

C : C.cpp
	g++ -std=c++14 -o $@ -g $^

D : D.cpp
	g++ -std=c++14 -o $@ -g $^

E : E.cpp
	g++ -std=c++14 -o $@ -g $^

F : F.cpp
	g++ -std=c++14 -o $@ -g $^


###########################
# RUN
###########################
.PHONY : run-A
run-A : A A-1.in A-1.out
	./A < A-1.in | diff - A-1.out

.PHONY : run-B
run-B : B B-1.in B-1.out
	./B < B-1.in | diff - B-1.out

.PHONY : run-C
run-C : C C-1.in C-1.out C-2.in C-2.out
	./C < C-1.in | diff - C-1.out
	./C < C-2.in | diff - C-2.out

.PHONY : run-D
run-D : D D-1.in D-1.out
	./D < D-1.in | diff - D-1.out

.PHONY : run-E
run-E : E E-1.in E-1.out E-2.in E-2.out E-3.in E-3.out
	./E < E-1.in | diff - E-1.out
	./E < E-2.in | diff - E-2.out
	./E < E-3.in | diff - E-3.out

.PHONY : run-F
run-F : F F-1.in F-1.out
	./F < F-1.in | diff - F-1.out
