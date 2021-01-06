SRC = main.c
EXE = ./main
SRC_CORRECT = main_correct.c
EXE_CORRECT = ./main_correct
-include Makefile.src

LIBS = 
-include Makefile.libs


all: $(SRC)
	gcc -std=c99 -o $(EXE) $(SRC) $(LIBS)
correct: $(SRC_CORRECT)
	gcc -std=c99 -o $(EXE_CORRECT) $(SRC_CORRECT) $(LIBS)
clean:
	rm -f $(EXE)

debug: $(SRC)
	gcc -std=c99 -o $(EXE) $(SRC) $(LIBS) -DDEBUG
correct_debug: $(SRC_CORRECT)
	gcc -std=c99 -o $(EXE_CORRECT) $(SRC_CORRECT) $(LIBS) -DDEBUG


gen:
	@python checki.py


test: all
	python check.py $(EXE_CORRECT) $(EXE)
test_correct: correct 
	python check.py $(EXE_CORRECT) $(EXE_CORRECT)



FORMATTER = $(shell which clang-format)
ifeq ($(strip $(FORMATTER)),)
	CLANG_VER = -3.5
else
	CLANG_VER = 
endif


format:
	clang-format$(CLANG_VER) -i -style=Chromium $(SRC)
format_correct:
	clang-format$(CLANG_VER) -i -style=Chromium $(SRC_CORRECT)


doc:
	@cat Doxyfile.in | sed -e "s/@name@/$$USER/g" > Doxyfile
	@doxygen Doxyfile
	@sed -i -e "s/ps2pdf/dvipdfmx/g" latex/refman.tex
#	@cd latex; make; dvipdfmx refman.dvi
	@cd latex; platex refman.tex; platex refman.tex; dvipdfmx refman.dvi
	@cp latex/refman.pdf ./report_$(USER).pdf

cleandoc:
	@rm -rf Doxyfile html/ latex/

cleanall: clean cleandoc
	@rm -rf __pycache__/ ./report_$(USER).pdf

remove: cleanall
	@rm -f check.py Doxyfile.in Makefile *~ *.pyc $(EXE_CORRECT) .clang-format
