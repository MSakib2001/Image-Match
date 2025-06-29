################################################
# Auto-generated as part of running getlibs 
################################################

# List of local libraries 
SEARCH_TARGET_ECE353-BSP=./libs/TARGET_ECE353-BSP

# List of shared libraries 
SEARCH_freertos=../mtb_shared/freertos/release-v10.5.002
SEARCH_retarget-io=../mtb_shared/retarget-io/release-v1.5.0
SEARCH_abstraction-rtos=../mtb_shared/abstraction-rtos/release-v1.7.6
SEARCH_capsense=../mtb_shared/capsense/release-v3.0.1
SEARCH_clib-support=../mtb_shared/clib-support/release-v1.4.2
SEARCH_core-lib=../mtb_shared/core-lib/release-v1.4.1
SEARCH_core-make=../mtb_shared/core-make/release-v1.9.1
SEARCH_mtb-hal-cat1=../mtb_shared/mtb-hal-cat1/release-v2.2.0
SEARCH_mtb-pdl-cat1=../mtb_shared/mtb-pdl-cat1/release-v2.4.1
SEARCH_psoc6cm0p=../mtb_shared/psoc6cm0p/release-v2.3.0
SEARCH_recipe-make-cat1a=../mtb_shared/recipe-make-cat1a/release-v1.9.0

# Shared libraries added to build 
SEARCH+=$(SEARCH_freertos)
SEARCH+=$(SEARCH_retarget-io)
SEARCH+=$(SEARCH_abstraction-rtos)
SEARCH+=$(SEARCH_capsense)
SEARCH+=$(SEARCH_clib-support)
SEARCH+=$(SEARCH_core-lib)
SEARCH+=$(SEARCH_core-make)
SEARCH+=$(SEARCH_mtb-hal-cat1)
SEARCH+=$(SEARCH_mtb-pdl-cat1)
SEARCH+=$(SEARCH_psoc6cm0p)
SEARCH+=$(SEARCH_recipe-make-cat1a)
-include $(CY_INTERNAL_APP_PATH)/importedbsp.mk
