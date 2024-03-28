# Respuestas del TP

## Punto 2

### Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

* El archivo **'.gitignore'** sirve para excluir archivos o carpetas completas del seguimiento de github, no se registran sus modificaciones, no se agregan a los commits ni se suben al repo remoto.

* Es conveniente incluirlo para no realizar seguimientos ni subir al repositorio remoto archivos que no nos interesan, como por ejemplo los archivos *.exe* que genera el compilador de C.

* Se debe hacer cuando tengamos archivos innecesarios que prefieramos ignorar.

* Primero cree el archivo con el comando *'echo'* en el git bash. Posteriormente usé la página [TopTal](https://www.toptal.com/developers/gitignore/api/executable,visualstudiocode,c++,git) para ayudarme con la inclusión de otros archivos propios de VS Code, git, el mismo lenguaje c++ y ejecutables.

## Punto 3 

### Revise los archivos subidos en su repositorio de github. ¿Qué archivos vé?¿Cuál cree que no hace falta que esté?

* Veo todos los archivos que previamente estaban en la carpeta en la que estaba trabajando.

* Creo que los *.exe* no es necesario que estén, así también otros archivos que usa C para su ejecución (supongo) como el *'tempCodeRunner.c'*

### Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?

* Porque un puntero es una variable que almacena una dirección de memoria, entonces, como le asignamos la *variable*, guarda su dirección de memoria y su valor.

* En el punto 4 se obtiene la dirección de memoria de *la variable puntero*, distinta a la dirección de memoria de la variable que *almacena el puntero*.
