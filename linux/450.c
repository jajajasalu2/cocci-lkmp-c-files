cocci_test_suite() {
	struct compat_cdrom_read_audio {
		union cdrom_addr addr;
		u8 addr_format;
		compat_int_t nframes;
		compat_caddr_t buf;
	} cocci_id/* block/compat_ioctl.c 99 */;
	unsigned int __user *cocci_id/* block/compat_ioctl.c 91 */;
	unsigned long __user *cocci_id/* block/compat_ioctl.c 84 */;
	struct hd_geometry cocci_id/* block/compat_ioctl.c 55 */;
	struct compat_hd_geometry __user *cocci_id/* block/compat_ioctl.c 53 */;
	struct compat_hd_geometry {
		unsigned char heads;
		unsigned char sectors;
		unsigned short cylinders;
		u32 start;
	} cocci_id/* block/compat_ioctl.c 45 */;
	compat_u64 __user *cocci_id/* block/compat_ioctl.c 42 */;
	u64 cocci_id/* block/compat_ioctl.c 40 */;
	compat_ulong_t __user *cocci_id/* block/compat_ioctl.c 37 */;
	compat_ulong_t cocci_id/* block/compat_ioctl.c 35 */;
	unsigned int cocci_id/* block/compat_ioctl.c 324 */;
	loff_t cocci_id/* block/compat_ioctl.c 323 */;
	struct gendisk *cocci_id/* block/compat_ioctl.c 321 */;
	compat_long_t __user *cocci_id/* block/compat_ioctl.c 32 */;
	struct inode *cocci_id/* block/compat_ioctl.c 319 */;
	struct file *cocci_id/* block/compat_ioctl.c 316 */;
	long cocci_id/* block/compat_ioctl.c 316 */;
	compat_uint_t __user *cocci_id/* block/compat_ioctl.c 27 */;
	compat_int_t __user *cocci_id/* block/compat_ioctl.c 22 */;
	unsigned long cocci_id/* block/compat_ioctl.c 211 */;
	unsigned cocci_id/* block/compat_ioctl.c 211 */;
	fmode_t cocci_id/* block/compat_ioctl.c 210 */;
	struct block_device *cocci_id/* block/compat_ioctl.c 210 */;
	int cocci_id/* block/compat_ioctl.c 210 */;
	compat_int_t cocci_id/* block/compat_ioctl.c 189 */;
	compat_caddr_t cocci_id/* block/compat_ioctl.c 188 */;
	struct blkpg_ioctl_arg __user *cocci_id/* block/compat_ioctl.c 187 */;
	struct compat_blkpg_ioctl_arg __user *cocci_id/* block/compat_ioctl.c 185 */;
	struct compat_blkpg_ioctl_arg {
		compat_int_t op;
		compat_int_t flags;
		compat_int_t datalen;
		compat_caddr_t data;
	} cocci_id/* block/compat_ioctl.c 177 */;
	unsigned short __user *cocci_id/* block/compat_ioctl.c 17 */;
	unsigned char cocci_id/* block/compat_ioctl.c 151 */;
	u32 cocci_id/* block/compat_ioctl.c 150 */;
	unsigned short cocci_id/* block/compat_ioctl.c 15 */;
	struct compat_cdrom_generic_command __user *cocci_id/* block/compat_ioctl.c 149 */;
	struct cdrom_generic_command __user *cocci_id/* block/compat_ioctl.c 148 */;
	void __user *cocci_id/* block/compat_ioctl.c 124 */;
	__u32 cocci_id/* block/compat_ioctl.c 123 */;
	struct compat_cdrom_read_audio __user *cocci_id/* block/compat_ioctl.c 122 */;
	struct cdrom_read_audio __user *cocci_id/* block/compat_ioctl.c 121 */;
	struct compat_cdrom_generic_command {
		unsigned char cmd[CDROM_PACKET_SIZE];
		compat_caddr_t buffer;
		compat_uint_t buflen;
		compat_int_t stat;
		compat_caddr_t sense;
		unsigned char data_direction;
		compat_int_t quiet;
		compat_int_t timeout;
		compat_caddr_t reserved[1];
	} cocci_id/* block/compat_ioctl.c 106 */;
}
