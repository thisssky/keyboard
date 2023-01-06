# MCU name
MCU = atmega32u4
BOOTLOADER = caterina


# Build Options
#   comment out to disable the options.
#
COMMAND_ENABLE ?= yes
CONSOLE_ENABLE ?= yes
EXTRAKEY_ENABLE ?= yes	# Audio control and System control(+450)
MOUSEKEY_ENABLE ?= yes	# Mouse keys(+4700)
NKRO_ENABLE ?= yes
TAP_DANCE_ENABLE = yes
