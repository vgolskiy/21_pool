#!/bin/bash
id -nG $FT_USER | tr ' ' ',' | cat -e
