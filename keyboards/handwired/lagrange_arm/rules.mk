# MCU name
MCU = STM32F411

# Address of the bootloader in system memory
STM32_BOOTLOADER_ADDRESS = 0x1FFF0000
BOOTLOADER = stm32-dfu
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = yes           # Audio output

SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart
KEYBOARD_SHARED_EP = yes
EEPROM_DRIVER = spi
AUDIO_DRIVER = pwm_hardware

# Enter lower-power sleep mode when on the ChibiOS idle thread
#OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE