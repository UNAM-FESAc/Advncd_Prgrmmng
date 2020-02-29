#!/bin/bash

# upGit.sh
# Actualiza tu repositorio Git
# (CC) 2020 Javier Orduz
# Bajo licencia GNU/GPL

# hay un repo
if [!-d '.git']; then 
    echo 'No hay un archivo git'
    exit -1
fi


git add .
    echo "Introduce un mensaje:"
    read TXT
git commit -m "$TXT"
git push