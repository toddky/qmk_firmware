#!/usr/bin/env bash
#qmk_bin=$HOME/.local/bin
#export PATH="$PATH:$qmk_bin"
which qmk || exit $?

qmk_firmware="$HOME/qmk"

keymap='toddyamakawa'
build="$qmk_firmware/.build"

#qmk compile -kb kyria -km "$keymap" || exit $?
qmk compile -kb splitkb/kyria/rev1 -km "$keymap" || exit $?
#qmk compile -kb kyria -km default

hexfile="$build/splitkb_kyria_rev1_$keymap.hex"

#dest="$HOME/.config/links/downloads"
dest="$HOME/Downloads"

echo
echo "\$ cp "$hexfile" "$dest""
cp "$hexfile" "$dest"

