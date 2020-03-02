#!/bin/bash

# upGit.sh
# Actualiza tu repositorio Git
# (CC) 2020 Javier Orduz
# Bajo licencia GNU/GPL

git add .
    echo "Introduce un mensaje:"
    read COMMIT
git commit -m "$COMMIT"
git push