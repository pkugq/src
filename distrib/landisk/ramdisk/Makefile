#	$OpenBSD: Makefile,v 1.29 2019/05/01 22:55:06 deraadt Exp $

FS=		miniroot${OSrev}.fs
FSSIZE=		5120
FSDISKTYPE=	miniroot2.5M
MOUNT_POINT=	/mnt
MTREE=		${UTILS}/mtree.conf

LISTS=		${.CURDIR}/list
UTILS=		${.CURDIR}/../../miniroot

MRDISKTYPE=	rdroot2.5M
MRMAKEFSARGS=	-o disklabel=${MRDISKTYPE},minfree=0,density=4096

# minfree, opt, b/i  trks, sects, cpg
NEWFSARGS= -m 0 -o space -i 4096

all: ${FS}

${FS}: bsd.rd
	dd if=/dev/zero of=${FS} bs=512 count=${FSSIZE}
	vnconfig -v -t ${FSDISKTYPE} ${FS} > vnd
	fdisk -i -y `cat vnd`
	fdisk -u -y -f ${DESTDIR}/usr/mdec/mbr `cat vnd`
	disklabel -w `cat vnd` ${FSDISKTYPE}
	newfs ${NEWFSARGS} /dev/r`cat vnd`a
	mount /dev/`cat vnd`a ${MOUNT_POINT}
	installboot -vr ${MOUNT_POINT} `cat vnd` \
	    ${DESTDIR}/usr/mdec/xxboot ${DESTDIR}/usr/mdec/boot
	gzip -c < ${.OBJDIR}/bsd.rd > ${MOUNT_POINT}/bsd.rd
	ln ${MOUNT_POINT}/bsd.rd ${MOUNT_POINT}/bsd
	df -i ${MOUNT_POINT}
	umount ${MOUNT_POINT}
	vnconfig -u `cat vnd`
	rm -f vnd

bsd.rd: mr.fs bsd
	cp bsd bsd.rd
	rdsetroot bsd.rd mr.fs

mr.fs: instbin
	rm -rf $@.d
	install -d -o root -g wheel $@.d
	mtree -def ${MTREE} -p $@.d -u
	CURDIR=${.CURDIR} OBJDIR=${.OBJDIR} OSrev=${OSrev} \
	    TARGDIR=$@.d UTILS=${UTILS} RELEASEDIR=${RELEASEDIR} \
	    sh ${UTILS}/runlist.sh ${LISTS}
	rm $@.d/instbin
	makefs ${MRMAKEFSARGS} $@ $@.d

bsd:
	cd ${.CURDIR}/../../../sys/arch/landisk/compile/RAMDISK && \
	    su ${BUILDUSER} -c '${MAKE} config && ${MAKE} clean && exec ${MAKE}'
	cp -p ${.CURDIR}/../../../sys/arch/landisk/compile/RAMDISK/obj/bsd bsd

instbin.mk instbin.cache instbin.c: instbin.conf
	crunchgen -E -D ${.CURDIR}/../../.. -L ${DESTDIR}/usr/lib \
	    -c instbin.c -e instbin -m instbin.mk instbin.conf

instbin: instbin.mk instbin.cache instbin.c
	${MAKE} -f instbin.mk SRCLIBDIR=${.CURDIR}/../../../lib all

instbin.conf: ${LISTS}
	awk -f ${UTILS}/makeconf.awk  ${LISTS} > instbin.conf

unconfig:
	-umount -f ${MOUNT_POINT}
	-[ -f vnd ] && vnconfig -u `cat vnd` && rm -f vnd

.ifdef RELEASEDIR
install:
	cp bsd.rd ${RELEASEDIR}/bsd.rd
	chmod a+r ${RELEASEDIR}/bsd.rd
	cp ${FS} ${RELEASEDIR}
.endif

clean cleandir:
	rm -f *.core mr.fs instbin instbin.mk instbin.cache \
	    lib*.a lib*.olist instbin.map *.o *.lo *.c bsd bsd.rd
	rm -f instbin.conf
	rm -rf cd-dir mr.fs.d

.include <bsd.obj.mk>
