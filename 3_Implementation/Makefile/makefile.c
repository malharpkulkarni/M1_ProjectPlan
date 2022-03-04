
Project_Name = ATM 


Build = build


SRC = main.c
src/balance.c
src/deposit.c
src/exit.c
src/Menu.c
src/withdraw.c



ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif



PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out


DOCUMENTATION_OUTPUT = documentation/html


$(PROJECT_NAME):all


.PHONY: run clean test doc all



run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out



	make -C ./documentation


clean:
	$(RM) $(call FixPath,$(BUILD))


$(BUILD):
	mkdir build