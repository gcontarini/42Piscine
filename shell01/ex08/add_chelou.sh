#!/bin/bash

echo "ibase=5; obase=D; $(echo $FT_NBR1 | tr "'\"?\!" "0234" | sed 's/\\/1/g') + $(echo $FT_NBR2 | tr "mrdoc" "01234")" | bc | tr '0123456789ABC' 'gtaio luSnemf'
