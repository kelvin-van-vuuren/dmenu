<div align="center">
Custom build of <a href="https://tools.suckless.org/dmenu/">dmenu</a>, an efficient dynamic menu for <a href="https://www.x.org/wiki/">X</a>.
</div>
<p></p>
<div align="center">
    	<a href="https://github.com/kelvin-van-vuuren/dmenu#about">About</a>
  <span> • </span>
       	<a href="https://github.com/kelvin-van-vuuren/dmenu#features">Features</a>
  <span> • </span>
	<a href="https://github.com/kelvin-van-vuuren/dmenu#install">Install</a>
    <span> • </span>
	<a href="https://github.com/kelvin-van-vuuren/dmenu#usage">Usage</a>
  <p></p>
</div>

![dmenu](https://user-images.githubusercontent.com/54939625/226602334-55e5a03c-c3e2-497c-af0e-260198ef7891.jpg)

### About 
[dmenu](https://suckless.org) is a fast and lightweight dynamic menu for [X](https://www.x.org/wiki/). It reads arbitrary text from stdin, and creates a menu with one item for each line. The user can then select an item and the line is printed to stdout. The software is written by [suckless](https://suckless.org) and adheres to the [suckless philosophy](https://suckless.org/philosophy). As a result, the base distribution of this software comes with a very minimal set of features. This fork extends the functionality and appearance of the program through the use of [patches](https://tools.suckless.org/dmenu/patches/) and [other changes to the codebase](https://github.com/kelvin-van-vuuren/dmenu/commits/main).

### Features
* [**Center**](https://tools.suckless.org/dmenu/patches/center/): center dmenu in screen with -c flag.
* [**Border**](https://tools.suckless.org/dmenu/patches/border/): set dmenu border width with -bw flag.
* [**Alpha**](https://tools.suckless.org/dmenu/patches/alpha/): change dmenu background opacity.
* [**Mouse support**](https://tools.suckless.org/dmenu/patches/mouse-support/): basic mouse support (scroll, left click to select, right click to close).
* [**Numbers**](https://tools.suckless.org/dmenu/patches/numbers/): display number of matched and total items in the top right corner of dmenu.
* [**Case insensitive**](https://tools.suckless.org/dmenu/patches/case-insensitive/): case insensitive item matching (-s to enable case sensitivity).
* [**Fuzzy matching**](https://tools.suckless.org/dmenu/patches/fuzzymatch/): allows user to type non-consecutive portions of the string to be matched (-f flag).
* [**Fuzzy highlighting**](https://tools.suckless.org/dmenu/patches/fuzzyhighlight/): highlight fuzzy-matched text.
* [**Xresources**](https://tools.suckless.org/dmenu/patches/xresources-alt/): configure dmenu via [Xresources](https://en.wikipedia.org/wiki/X_resources). See my [dotfiles](https://github.com/kelvin-van-vuuren/dotfiles/blob/main/.config/x11/xresources) for an example of how this can be used.

### Install
Clone this repo and install with ``rm -rf config.h && sudo make clean install``. Configuration is done via [config.def.h](https://github.com/kelvin-van-vuuren/dmenu/blob/main/config.def.h) so any changes will require the program to be recompiled and installed to take effect.

### Usage
See the man page for details. Or take a look at some of my other forks of related [suckless](https://suckless.org) software, such as [dwm](https://github.com/kelvin-van-vuuren/dwm), which contains a [keybind to a useful dmenu command](https://github.com/kelvin-van-vuuren/dwm/blob/main/config.def.h#L123).
