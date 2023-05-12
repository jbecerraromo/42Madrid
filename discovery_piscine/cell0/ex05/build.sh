if [ $# -eq 0 ]
	then echo No se han proporcionado argumentos
else
	for arg in $@
	do
		mkdir ex$arg
	done
fi
