#!/bin/bash

if [ "$EUID" -ne 0 ]; then
   echo "он не будет без рут прав работать, запустите с судо"
   exit 1
fi


is_work=false

echo "Скрипт без судо прав не заработает"

apt update && apt upgrade -y
apt install nginx git curl wget python3-pip
apt install fastfetch    #для ларпа 
echo "Добавить нового пользователя?"
read answer

while [ "$is_work" = false ]; do

if [ "$answer" = "yes" ] || [ "$answer" = "y" ]; then
	echo "Пользователь user будет сделан с правами video, audio, wheel"
	useradd -m -G wheel,audio,video -s /bin/bash user
	echo "Введите пароль"
	passwd
	is_work=true
elif [ "$answer" = "no"] || [ "$answer" = "n" ]; then
	is_work=true
	echo "Операция отменена"
	exit 0

