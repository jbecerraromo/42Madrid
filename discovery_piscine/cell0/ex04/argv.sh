if [ "$#" -eq 0 ]; then
	echo "No has proporcionado argumentos";
fi
if [ "$#" -gt 3 ]; then
	echo "Proporcionar máximo 3 argumentos";
else for arg in "$@"; do
	echo "$arg";
done
fi
