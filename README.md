# dwmblocks

Modular status bar for dwm written in c.

## dwrik's build

This is my build of [torrinfail's dwmblocks](https://github.com/torrinfail/dwmblocks). It uses my custom scripts for populating the status bar. The scripts can be found in the dotfiles repo under `.local/bin/statusbar`. In case you use these scripts, make sure they're on your $PATH.

# Using signals to update

dwmblocks is able to handle signals by default. Inorder to signal a change, one can use the `kill -l 44 $(pidof dwmblocks)` or the `pkill -RTMIN+10 dwmblocks` command to signal dwmblocks and it will update the specific block accordingly. The `kill` command requires 34 to be added to the signal number.

Using signals is more efficient for handling changes such as volume, brightness etc. as the blocks don't need to run after every fixed interval. They only update when dwmblocks receive the corresponding signal.

# Usage

To use dwmblocks first run `make` and then install it with `sudo make install`.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.

# Customization

The statusbar is made from text output from commandline programs. Blocks are added and removed by editing the blocks.h header file.
