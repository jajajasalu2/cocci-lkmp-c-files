cocci_test_suite() {
	void *cocci_id/* arch/powerpc/boot/mktree.c 93 */;
	boot_block_t cocci_id/* arch/powerpc/boot/mktree.c 48 */;
	struct stat cocci_id/* arch/powerpc/boot/mktree.c 47 */;
	unsigned int cocci_id/* arch/powerpc/boot/mktree.c 46 */;
	char *cocci_id/* arch/powerpc/boot/mktree.c 42 */[];
	int cocci_id/* arch/powerpc/boot/mktree.c 42 */;
	unsigned int cocci_id/* arch/powerpc/boot/mktree.c 40 */[IMGBLK / sizeof(unsigned int)];
	struct boot_block {
		uint32_t bb_magic;
		uint32_t bb_dest;
		uint32_t bb_num_512blocks;
		uint32_t bb_debug_flag;
		uint32_t bb_entry_point;
		uint32_t bb_checksum;
		uint32_t reserved[2];
	} cocci_id/* arch/powerpc/boot/mktree.c 29 */;
}
