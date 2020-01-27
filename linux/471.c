cocci_test_suite() {
	struct disklabel *cocci_id/* block/partitions/osf.c 60 */;
	struct d_partition *cocci_id/* block/partitions/osf.c 54 */;
	struct disklabel {
		__le32 d_magic;
		__le16 d_type,d_subtype;
		u8 d_typename[16];
		u8 d_packname[16];
		__le32 d_secsize;
		__le32 d_nsectors;
		__le32 d_ntracks;
		__le32 d_ncylinders;
		__le32 d_secpercyl;
		__le32 d_secprtunit;
		__le16 d_sparespertrack;
		__le16 d_sparespercyl;
		__le32 d_acylinders;
		__le16 d_rpm,d_interleave,d_trackskew,d_cylskew;
		__le32 d_headswitch,d_trkseek,d_flags;
		__le32 d_drivedata[5];
		__le32 d_spare[5];
		__le32 d_magic2;
		__le16 d_checksum;
		__le16 d_npartitions;
		__le32 d_bbsize,d_sbsize;
		struct d_partition {
			__le32 p_size;
			__le32 p_offset;
			__le32 p_fsize;
			u8 p_fstype;
			u8 p_frag;
			__le16 p_cpg;
		} d_partitions[MAX_OSF_PARTITIONS];
	} *cocci_id/* block/partitions/osf.c 23 */;
	unsigned char *cocci_id/* block/partitions/osf.c 22 */;
	Sector cocci_id/* block/partitions/osf.c 21 */;
	unsigned int cocci_id/* block/partitions/osf.c 20 */;
	struct parsed_partitions *cocci_id/* block/partitions/osf.c 16 */;
	int cocci_id/* block/partitions/osf.c 16 */;
}
