

ODIR=build
IN=$(basename $(wildcard *.skp))

ifeq ($(OS),Windows_NT)
	MK=../bin/sketchup2room.exe
else
	MK=../bin/sketchup2room
endif

FLAGS=--out build

.SUFFIXES: .skp .html

TARGETS = $(addprefix $(ODIR)/, $(addsuffix .html, $(IN)))

all: $(TARGETS)


clean:
	rm -Rf $(ODIR) 

$(ODIR)/%.html: %.skp %.skp.config
	$(MK) $(FLAGS) $(shell cat $<.config) --html $(@F) $<

$(ODIR)/%.html: %.skp
	$(MK) $(FLAGS) --html $(@F) $^