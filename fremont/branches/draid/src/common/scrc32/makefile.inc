
$(NDAS_INC_PATH)\scrc32.h: scrc32.h
	echo BUILDMSG: publishing header: $** -^> $@
	echo. > $@
	echo /* !!! DO NOT EDIT THIS FILE HERE !!! */ >> $@
	echo /* This is a copied header from the project */ >> $@
	echo /* Any modification will be overwritten by the project compilation */ >> $@
	echo. >> $@
	type $** >> $@
