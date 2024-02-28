#!/usr/bin/env bash
#qmk_bin=$HOME/.local/bin
#export PATH="$PATH:$qmk_bin"
which qmk || exit $?

# brew install avr-gcc
which avr-gcc || exit $?

keymap='toddyamakawa'
#keymap='default'

print-run qmk compile -kb boardsource/microdox/v2 -km "$keymap" || exit $?

top="$(git top 2>/dev/null)"
build="$top/.build"
hexfile="$build/boardsource_microdox_v2_$keymap.hex"
dest="$HOME/.config/links/downloads"
[[ -d "$HOME/Downloads" ]] && dest="$HOME/Downloads"

echo
echo "\$ cp "$hexfile" "$dest""
cp "$hexfile" "$dest"

