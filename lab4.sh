#!/bin/bash

# #1) Use the command chmod to modify the permissions to files and directries for owner, gorup, and others
# Create a shell script that give the current user full permissoin, and everyone else read and execute permission only. 

chmod 733 myfile.txt

# #2) Create a FAT, NTFS, and EXT3 filesystem. Mount it in three separate subdirectories
# inside /mnt/(myFat, myNTFS, and myEXT3)

dd if=/dev/zero of=fat-image.dd bs=1M count=10

sudo mkdir /mnt/myFat

mount fat-image.dd /mnt/my-fat-fs

umount /mnt/my-fat-fs

dd if=/dev/zero of=ntfs-image.dd bs=1M count=10
mkfs.ntfs ntfs-image.dd --force

sudo mkdir /mnt/myNTFS

mount ntfs-image.dd /mnt/myNTFS

umount /mnt/myNTFS

dd if=/dev/zero of=myEXT3.dd bs=1M count=10

sudo mkdir /mnt/myEXT3

mount myEXT3.dd /mnt/myEXT3

umount /mnt/myEXT3

#3) Check w/ df Comand

df -h 

#4) create 3 different users called 'testuser1', 'testuser2', and 'testuser3'.

adduser testuser
adduser testuser2
adduser testuser3

#5) create a group called 'myfsuser'
groupadd myfsuser




#6) Add all those 3 user to 'myfsuser' group
usermod -a -G myfsuser testuser
usermod -a -G myfsuser testuser2
usermod -a -G myfsuser testuser3

#7)Set the permission of the ‘myFat’ directory so that only the members of
#‘myfsuser’ group can access it.

chown :myfsuser /mnt/myFat
chmod g=rwx /mnt/myFat



#8) Now write a program (shell script) that will check if the current user has write
#permission to myFat, myNTFS and myEXT3. In three separate print statements let the
#user know about it. For example, if the user has write permission to ‘myFat’ print a
#message ‘you have permission to write in myFat. Otherwise, print a
#message ‘you do not have permission to write in myFat. And so on

if [ "$(stat -c "%a" /mnt/myFat)" = "777" ]; 
then
	echo 'you have permmision to write in myFat'
else
	echo 'you do not have permmision to write in myFat'
	
fi

if [ "$(stat -c "%a" /mnt/myEXT3)" = "777"  ]; 
then
	echo 'you have permmision to write in myEXT3'
else
	echo 'you do not have permmision to write in myEXT3'
fi


if [ "$(stat -c "%a" /mnt/myNTFS)" = "777"  ];
then
	echo 'you have permmision to write in myNTFS'
else
	echo 'you do not have permmision to write in myNTFS'
fi

#9)Now modify the ~./bashrc file so that the user will automatically get the
#message right after login.

 #vim .bashrc
 #add an echo statement near the top
 #save and exit
 
 
 #below is the modify bashrc file
 
 ################################################################################
 
 echo "Welcome and Welcome!"

# ~/.bashrc: executed by bash(1) for non-login shells.
# see /usr/share/doc/bash/examples/startup-files (in the package bash-doc)
# for examples

# If not running interactively, don't do anything
case $- in
    *i*) ;;
      *) return;;
esac

# don't put duplicate lines or lines starting with space in the history.
# See bash(1) for more options
HISTCONTROL=ignoreboth

# append to the history file, don't overwrite it
shopt -s histappend

# for setting history length see HISTSIZE and HISTFILESIZE in bash(1)
HISTSIZE=1000
HISTFILESIZE=2000

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# If set, the pattern "**" used in a pathname expansion context will
# match all files and zero or more directories and subdirectories.
#shopt -s globstar

# make less more friendly for non-text input files, see lesspipe(1)
#[ -x /usr/bin/lesspipe ] && eval "$(SHELL=/bin/sh lesspipe)"

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "${debian_chroot:-}" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, unless we know we "want" color)
case "$TERM" in
    xterm-color|*-256color) color_prompt=yes;;
esac

# uncomment for a colored prompt, if the terminal has the capability; turned
# off by default to not distract the user: the focus in a terminal window
# should be on the output of commands, not on the prompt
force_color_prompt=yes

if [ -n "$force_color_prompt" ]; then
    if [ -x /usr/bin/tput ] && tput setaf 1 >&/dev/null; then
        # We have color support; assume it's compliant with Ecma-48
        # (ISO/IEC-6429). (Lack of such support is extremely rare, and such
        # a case would tend to support setf rather than setaf.)
        color_prompt=yes
    else
        color_prompt=
    fi
fi

# The following block is surrounded by two delimiters.
# These delimiters must not be modified. Thanks.
# START KALI CONFIG VARIABLES
PROMPT_ALTERNATIVE=twoline
NEWLINE_BEFORE_PROMPT=yes
# STOP KALI CONFIG VARIABLES

if [ "$color_prompt" = yes ]; then
    # override default virtualenv indicator in prompt
    VIRTUAL_ENV_DISABLE_PROMPT=1

    prompt_color='\[\033[;32m\]'
    info_color='\[\033[1;34m\]'
    prompt_symbol=㉿
    if [ "$EUID" -eq 0 ]; then # Change prompt colors for root user
        prompt_color='\[\033[;94m\]'
        info_color='\[\033[1;31m\]'
        prompt_symbol=💀
    fi
    case "$PROMPT_ALTERNATIVE" in
        twoline)
            PS1=$prompt_color'┌──${debian_chroot:+($debian_chroot)──}${VIRTUAL_ENV:+(\[\033[0;1m\]$(basename $VIRTUAL_ENV)'$prompt_color')}('$info_color'\u${prompt_symbol}\h'$prompt_color')-[\[\033[0;1m\]\w'$prompt_color']\n'$prompt_color'└─'$info_color'\$\[\033[0m\] ';;
        oneline)
            PS1='${VIRTUAL_ENV:+($(basename $VIRTUAL_ENV)) }${debian_chroot:+($debian_chroot)}'$info_color'\u@\h\[\033[00m\]:'$prompt_color'\[\033[01m\]\w\[\033[00m\]\$ ';;
        backtrack)
            PS1='${VIRTUAL_ENV:+($(basename $VIRTUAL_ENV)) }${debian_chroot:+($debian_chroot)}\[\033[01;31m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ ';;
    esac
else
    PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '
fi
unset color_prompt force_color_prompt

# If this is an xterm set the title to user@host:dir
case "$TERM" in
xterm*|rxvt*|Eterm|aterm|kterm|gnome*|alacritty)
    PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u@\h: \w\a\]$PS1"
    ;;
*)
    ;;
esac

[ "$NEWLINE_BEFORE_PROMPT" = yes ] && PROMPT_COMMAND="PROMPT_COMMAND=echo"

# enable color support of ls, less and man, and also add handy aliases
if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
    #alias dir='dir --color=auto'
    #alias vdir='vdir --color=auto'

    alias grep='grep --color=auto'
    alias fgrep='fgrep --color=auto'
    alias egrep='egrep --color=auto'
    alias diff='diff --color=auto'
    alias ip='ip --color=auto'

    export LESS_TERMCAP_mb=$'\E[1;31m'     # begin blink
    export LESS_TERMCAP_md=$'\E[1;36m'     # begin bold
    export LESS_TERMCAP_me=$'\E[0m'        # reset bold/blink
    export LESS_TERMCAP_so=$'\E[01;33m'    # begin reverse video
    export LESS_TERMCAP_se=$'\E[0m'        # reset reverse video
    export LESS_TERMCAP_us=$'\E[1;32m'     # begin underline
    export LESS_TERMCAP_ue=$'\E[0m'        # reset underline
fi

# colored GCC warnings and errors
#export GCC_COLORS='error=01;31:warning=01;35:note=01;36:caret=01;32:locus=01:quote=01'

# some more ls aliases
alias ll='ls -l'
alias la='ls -A'
alias l='ls -CF'

# Alias definitions.
# You may want to put all your additions into a separate file like
# ~/.bash_aliases, instead of adding them here directly.
# See /usr/share/doc/bash-doc/examples in the bash-doc package.

if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi

# enable programmable completion features (you don't need to enable
# this, if it's already enabled in /etc/bash.bashrc and /etc/profile
# sources /etc/bash.bashrc).
if ! shopt -oq posix; then
  if [ -f /usr/share/bash-completion/bash_completion ]; then
    . /usr/share/bash-completion/bash_completion
  elif [ -f /etc/bash_completion ]; then
    . /etc/bash_completion
  fi
fi





