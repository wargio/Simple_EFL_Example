LIBS		=	`pkg-config ecore ecore-evas edje --libs`
CFLAGS		=	`pkg-config ecore ecore-evas edje --cflags` -Wall

CC		=	g++
EDJECC		=	edje_cc

MAIN		=	main
FILES		=	core font image edje

EDC_FILES	=	edje_example
EDJ		=	$(addsuffix .edj, $(EDC_FILES))

OBJS		=	$(addsuffix .o, $(FILES)) $(addsuffix .o, $(PSC))
DEPS		=	$(addsuffix .h, $(FILES)) color.h

all: $(MAIN)

$(MAIN): %: %.o $(OBJS) $(EDJ) $(DEPS)
	$(CC) -o $@ $(OBJS) $(CFLAGS) $(LIBS)

$(OBJS): %.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EDJ): %.edj: %.edc
	$(EDJECC) $<

clean:
	@echo "Clean.."
	@rm -rf *.o main *.edj

.PHONY: all clean
