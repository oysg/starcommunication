# ------------------------------------------------------------
# My Test || cmdmessage
# ------------------------------------------------------------

SHELL = /bin/bash

HOMEDIR=/root/starcommunication

ALLLIBS: COMMON STARMSGSERVER

STARMSGSERVER:
	${MAKE} -C $(HOMEDIR)/starmsgserver

COMMON:
	${MAKE} -C $(HOMEDIR)/common

clean:
	@${MAKE} clean -C $(HOMEDIR)/common
	@${MAKE} clean -C $(HOMEDIR)/starmsgserver