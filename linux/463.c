cocci_test_suite() {
	char cocci_id/* block/partitions/sysv68.c 58 */[64];
	struct slice *cocci_id/* block/partitions/sysv68.c 57 */;
	struct dkblk0 *cocci_id/* block/partitions/sysv68.c 56 */;
	unsigned char *cocci_id/* block/partitions/sysv68.c 55 */;
	Sector cocci_id/* block/partitions/sysv68.c 54 */;
	struct parsed_partitions *cocci_id/* block/partitions/sysv68.c 50 */;
	int cocci_id/* block/partitions/sysv68.c 50 */;
	struct slice {
		__be32 nblocks;
		__be32 blkoff;
	} cocci_id/* block/partitions/sysv68.c 44 */;
	struct dkblk0 {
		struct volumeid dk_vid;
		struct dkconfig dk_ios;
	} cocci_id/* block/partitions/sysv68.c 35 */;
	struct dkconfig {
		u8 ios_unused0[128];
		__be32 ios_slcblk;
		__be16 ios_slccnt;
		u8 ios_unused1[122];
	} cocci_id/* block/partitions/sysv68.c 24 */;
	struct volumeid {
		u8 vid_unused[248];
		u8 vid_mac[8];
	} cocci_id/* block/partitions/sysv68.c 15 */;
}
