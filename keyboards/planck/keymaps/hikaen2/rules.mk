ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif
KEY_OVERRIDE_ENABLE = yes
