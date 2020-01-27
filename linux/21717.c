cocci_test_suite() {
	struct fadvise64_64_args {
		int fd;
		long long offset;
		long long len;
		int advice;
	} cocci_id/* arch/s390/kernel/compat_linux.c 257 */;
	struct mmap_arg_struct_emu31 {
		compat_ulong_t addr;
		compat_ulong_t len;
		compat_ulong_t prot;
		compat_ulong_t flags;
		compat_ulong_t fd;
		compat_ulong_t offset;
	} cocci_id/* arch/s390/kernel/compat_linux.c 195 */;
	unsigned int cocci_id/* arch/s390/kernel/compat_linux.c 136 */;
	u32 cocci_id/* arch/s390/kernel/compat_linux.c 134 */;
	struct stat64_emu31 cocci_id/* arch/s390/kernel/compat_linux.c 128 */;
	struct stat64_emu31 __user *cocci_id/* arch/s390/kernel/compat_linux.c 126 */;
	struct kstat *cocci_id/* arch/s390/kernel/compat_linux.c 126 */;
	int cocci_id/* arch/s390/kernel/compat_linux.c 126 */;
	struct stat64_emu31 {
		unsigned long long st_dev;
		unsigned int __pad1;
#define STAT64_HAS_BROKEN_ST_INO 1
		u32 __st_ino;
		unsigned int st_mode;
		unsigned int st_nlink;
		u32 st_uid;
		u32 st_gid;
		unsigned long long st_rdev;
		unsigned int __pad3;
		long st_size;
		u32 st_blksize;
		unsigned char __pad4[4];
		u32 __pad5;
		u32 st_blocks;
		u32 st_atime;
		u32 __pad6;
		u32 st_mtime;
		u32 __pad7;
		u32 st_ctime;
		u32 __pad8;
		unsigned long st_ino;
	} cocci_id/* arch/s390/kernel/compat_linux.c 101 */;
}
