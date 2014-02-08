#!/bin/sh
# AUTO-GENERATED FILE, DO NOT EDIT!
if [ -f $1.org ]; then
  sed -e 's!^G:/cygwin/lib!/usr/lib!ig;s! G:/cygwin/lib! /usr/lib!ig;s!^G:/cygwin/bin!/usr/bin!ig;s! G:/cygwin/bin! /usr/bin!ig;s!^G:/cygwin/!/!ig;s! G:/cygwin/! /!ig;s!^H:!/cygdrive/h!ig;s! H:! /cygdrive/h!ig;s!^G:!/cygdrive/g!ig;s! G:! /cygdrive/g!ig;s!^F:!/cygdrive/f!ig;s! F:! /cygdrive/f!ig;s!^C:!/cygdrive/c!ig;s! C:! /cygdrive/c!ig;' $1.org > $1 && rm -f $1.org
fi
