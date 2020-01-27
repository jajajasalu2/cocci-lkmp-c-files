cocci_test_suite() {
	char cocci_id/* block/partitions/sgi.c 41 */[BDEVNAME_SIZE];
	struct sgi_partition *cocci_id/* block/partitions/sgi.c 40 */;
	struct sgi_disklabel *cocci_id/* block/partitions/sgi.c 39 */;
	Sector cocci_id/* block/partitions/sgi.c 38 */;
	__be32 *cocci_id/* block/partitions/sgi.c 37 */;
	unsigned int cocci_id/* block/partitions/sgi.c 36 */;
	__be32 cocci_id/* block/partitions/sgi.c 34 */;
	struct parsed_partitions *cocci_id/* block/partitions/sgi.c 31 */;
	int cocci_id/* block/partitions/sgi.c 31 */;
	struct sgi_disklabel {
		__be32 magic_mushroom;
		__be16 root_part_num;
		__be16 swap_part_num;
		s8 boot_file[16];
		u8 _unused0[48];
		struct sgi_volume {
			s8 name[8];
			__be32 block_num;
			__be32 num_bytes;
		} volume[15];
		struct sgi_partition {
			__be32 num_blocks;
			__be32 first_block;
			__be32 type;
		} partitions[16];
		__be32 csum;
		__be32 _unused1;
	} cocci_id/* block/partitions/sgi.c 11 */;
}
