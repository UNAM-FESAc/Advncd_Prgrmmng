#!/bin/bash

# UpToGit 0.1
# Actualiza facilmente tu repositorio Git
# (CC) 2011 Alfonso Saavedra "Son Link"
# http://sonlinkblog.blogspot.com
# Bajo licencia GNU/GPL

# Modo de uso: copia o mueve este script a /usr/bin o /usr/local/bin y desde el directorio donde se encuentre la copia de un repo git, ejecútalo de esta manera:
# uptogit <ficheros>

# Comprobamos si el directorio en el que estamos es de un repositorio git
if [ ! -d '.git' ]; then
    echo 'Esta carpeta no contiene un repositorio Git'
    exit -1
fi

# Ahora comprobamos si se le paso algun parametro
if [ $# == 0 ]; then
    echo "UpToGit: ¡Error! No se le a pasado ningún parámetro"
    echo "uptogit fichero1 fichero2 ... ficheroN"
    exit -1
else
    # Recorremos los parametros para comprobar si son ficheros o directorios
    for file in $*; do
	if [ ! -e $file ]; then
	    echo "UpToGit: El archivo o directorio $file no existe"
	    exit -1
	    fi
	done
    
    # Si llegamos hasta aquí, indicamos a Git los archivos a subir
    git add $*
    
    # Esto nos pedira el mensaje del commit
    echo "Introduce el mensaje del commit:"
    read TXT
    git commit -m "$TXT"

    # Y terminamos subiendo los archivos
    git push origin master

fi