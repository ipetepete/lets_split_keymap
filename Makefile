BACKLIGHT_ENABLE = no        # Enable WS2812 RGB underlight.  Do not enable this with audio at the same time.
RGBLIGHT_ENABLE = yes
AUDIO_ENABLE = no

ifndef QUANTUM_DIR
	include ../../../../Makefile
endif
