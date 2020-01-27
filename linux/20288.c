cocci_test_suite() {
	bootblock cocci_id/* arch/alpha/boot/tools/mkbb.c 88 */;
	char **cocci_id/* arch/alpha/boot/tools/mkbb.c 86 */;
	int cocci_id/* arch/alpha/boot/tools/mkbb.c 86 */;
	union __bootblock {
		struct {
			char __pad1[64];
			struct disklabel __label;
		} __u1;
		struct {
			unsigned long __pad2[63];
			unsigned long __checksum;
		} __u2;
		char bootblock_bytes[512];
		unsigned long bootblock_quadwords[64];
	} cocci_id/* arch/alpha/boot/tools/mkbb.c 70 */;
	struct disklabel {
		u32 d_magic;
		u16 d_type,d_subtype;
		u8 d_typename[16];
		u8 d_packname[16];
		u32 d_secsize;
		u32 d_nsectors;
		u32 d_ntracks;
		u32 d_ncylinders;
		u32 d_secpercyl;
		u32 d_secprtunit;
		u16 d_sparespertrack;
		u16 d_sparespercyl;
		u32 d_acylinders;
		u16 d_rpm,d_interleave,d_trackskew,d_cylskew;
		u32 d_headswitch,d_trkseek,d_flags;
		u32 d_drivedata[5];
		u32 d_spare[5];
		u32 d_magic2;
		u16 d_checksum;
		u16 d_npartitions;
		u32 d_bbsize,d_sbsize;
		struct d_partition {
			u32 p_size;
			u32 p_offset;
			u32 p_fsize;
			u8 p_fstype;
			u8 p_frag;
			u16 p_cpg;
		} d_partitions[MAXPARTITIONS];
	} cocci_id/* arch/alpha/boot/tools/mkbb.c 37 */;
	unsigned int cocci_id/* arch/alpha/boot/tools/mkbb.c 34 */;
	unsigned short cocci_id/* arch/alpha/boot/tools/mkbb.c 30 */;
	unsigned char cocci_id/* arch/alpha/boot/tools/mkbb.c 26 */;
}
