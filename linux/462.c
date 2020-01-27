cocci_test_suite() {
	char cocci_id/* block/partitions/sun.c 61 */[BDEVNAME_SIZE];
	unsigned long cocci_id/* block/partitions/sun.c 60 */;
	struct sun_partition *cocci_id/* block/partitions/sun.c 59 */;
	struct sun_disklabel {
		unsigned char info[128];
		struct sun_vtoc {
			__be32 version;
			char volume[8];
			__be16 nparts;
			struct sun_info {
				__be16 id;
				__be16 flags;
			} infos[8];
			__be16 padding;
			__be32 bootinfo[3];
			__be32 sanity;
			__be32 reserved[10];
			__be32 timestamp[8];
		} vtoc;
		__be32 write_reinstruct;
		__be32 read_reinstruct;
		unsigned char spare[148];
		__be16 rspeed;
		__be16 pcylcount;
		__be16 sparecyl;
		__be16 obs1;
		__be16 obs2;
		__be16 ilfact;
		__be16 ncyl;
		__be16 nacyl;
		__be16 ntrks;
		__be16 nsect;
		__be16 obs3;
		__be16 obs4;
		struct sun_partition {
			__be32 start_cylinder;
			__be32 num_sectors;
		} partitions[8];
		__be16 magic;
		__be16 csum;
	} *cocci_id/* block/partitions/sun.c 21 */;
	Sector cocci_id/* block/partitions/sun.c 20 */;
	__be16 *cocci_id/* block/partitions/sun.c 19 */;
	__be16 cocci_id/* block/partitions/sun.c 17 */;
	struct parsed_partitions *cocci_id/* block/partitions/sun.c 14 */;
	int cocci_id/* block/partitions/sun.c 14 */;
	unsigned int cocci_id/* block/partitions/sun.c 104 */;
}
