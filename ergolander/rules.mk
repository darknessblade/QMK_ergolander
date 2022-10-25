# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = halfkay


# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no   # Enable Bootmagic Lite
MOUSEKEY_ENABLE  = yes  # Mouse keys
EXTRAKEY_ENABLE  = yes  # Audio control and System control
CONSOLE_ENABLE   = no   # Console for debug
COMMAND_ENABLE   = no   # Commands for debug and configuration
CUSTOM_MATRIX    = lite # Custom matrix file for the ErgoDox EZ
NKRO_ENABLE      = yes           # Enable N-Key Rollover
UNICODE_ENABLE   = no  # Unicode
SWAP_HANDS_ENABLE= no   # Allow swapping hands of keyboard

SPLIT_KEYBOARD = yes
POINTING_DEVICE_ENABLE = no
POINTING_DEVICE_DRIVER = adns5050
