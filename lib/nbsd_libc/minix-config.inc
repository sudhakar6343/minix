NETBSDSRCDIR=	${MINIXSRCDIR}
NETBSDINCLUDES= /usr/netbsd/include/
MACHINE_ARCH?= 	i386
LIBDIR= /usr/netbsd/lib

CPPFLAGS+= -nostdinc -O -D__minix -D_POSIX_SOURCE -I${NETBSDINCLUDES}  -D_NETBSD_SOURCE -D__NBSD_LIBC
AFLAGS+= -nostdinc -D__minix -I${NETBSDINCLUDES}



CITRUS=yes 
USE_INET6=no

MKYP=no #requires RPC
USE_JEMALLOC=no
USE_FORT=no
USE_LIBTRE=no
