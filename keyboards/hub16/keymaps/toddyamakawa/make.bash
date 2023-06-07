#!/usr/bin/env bash
#qmk_bin=$HOME/.local/bin
#export PATH="$PATH:$qmk_bin"
which qmk || exit $?

qmk_firmware="$HOME/qmk_firmware"

keyboard='hub16'
keymap='toddyamakawa'
#keymap='default'
build="$qmk_firmware/.build"

qmk compile -kb hub16 -km "$keymap" || exit $?

hexfile="$build/${keyboard}_${keymap}.hex"
dest="$HOME/.config/links/downloads"

echo
echo "\$ cp "$hexfile" "$dest""
cp "$hexfile" "$dest"

