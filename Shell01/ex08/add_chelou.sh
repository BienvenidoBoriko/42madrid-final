#!/bin/sh
echo $FT_NBR1+$FT_NBR2 | tr "'" "0" | sed 's/\\/1/g' | sed 's/\"/2/g' | sed 's/\?/3/g' | sed 's/\!/4/g' | tr "mrdoc" "01234" | xargs echo 'ibase=5;obase=23;' | bc | tr "0123456789abcd" "gtaio luSnemf"
