SRC = project_main_new.c

PROJECT_NAME = project.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) -o $(PROJECT_NAME)

run: $(PROJECT_NAME)
	./$(PROJECT_NAME)

clean:
	rm -rf $(PROJECT_NAME)
