ACLOCAL_AMFLAGS = -I m4

SUBDIRS =									\
				src								\
				src/example				\
				$(NULL)

EXTRA_DIST = 							\
				Makefile.dist			\
				configure.ac 			\
				$(NULL)

CLEANFILES = *~

MAINTAINERCLEANFILES = 		\
				aclocal.m4 				\
				compile						\
				configure 				\
				config.cache 			\
				config.h					\
				config.h.in 			\
				config.guess			\
				config.sub				\
				depcomp 					\
        install-sh				\
				m4								\
				Makefile.in				\
			  missing						\
				ltmain.sh  				\
				stamp-h.in 				\
        ylwrap						\
				$(NULL)

maintainer-clean-local:
				-rm -rf m4
