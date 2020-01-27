cocci_test_suite() {
	int cocci_id/* fs/befs/btree.c 99 */(struct super_block *sb,
					     const befs_data_stream *ds,
					     struct befs_btree_node *node,
					     befs_off_t node_off);
	int cocci_id/* fs/befs/btree.c 96 */(struct super_block *sb,
					     const befs_data_stream *ds,
					     befs_btree_super *sup);
	int cocci_id/* fs/befs/btree.c 91 */(struct super_block *sb,
					     const befs_data_stream *ds,
					     befs_btree_super *bt_super,
					     struct befs_btree_node *this_node,
					     befs_off_t *node_off);
	const befs_off_t cocci_id/* fs/befs/btree.c 88 */;
	struct befs_btree_node {
		befs_host_btree_nodehead head;
		struct buffer_head *bh;
		befs_btree_nodehead *od_node;
	} cocci_id/* fs/befs/btree.c 81 */;
	const void *cocci_id/* fs/befs/btree.c 712 */;
	fs16 *cocci_id/* fs/befs/btree.c 680 */;
	u16 *cocci_id/* fs/befs/btree.c 676 */;
	int cocci_id/* fs/befs/btree.c 676 */;
	struct super_block *cocci_id/* fs/befs/btree.c 675 */;
	struct befs_btree_node *cocci_id/* fs/befs/btree.c 675 */;
	char *cocci_id/* fs/befs/btree.c 674 */;
	befs_btree_nodehead cocci_id/* fs/befs/btree.c 661 */;
	void *cocci_id/* fs/befs/btree.c 661 */;
	fs16 cocci_id/* fs/befs/btree.c 646 */;
	size_t cocci_id/* fs/befs/btree.c 646 */;
	fs64 *cocci_id/* fs/befs/btree.c 642 */;
	ulong cocci_id/* fs/befs/btree.c 627 */;
	unsigned long int cocci_id/* fs/befs/btree.c 625 */;
	const int cocci_id/* fs/befs/btree.c 624 */;
	long long unsigned int cocci_id/* fs/befs/btree.c 493 */;
	unsigned long long cocci_id/* fs/befs/btree.c 467 */;
	u16 cocci_id/* fs/befs/btree.c 421 */;
	loff_t cocci_id/* fs/befs/btree.c 412 */;
	size_t *cocci_id/* fs/befs/btree.c 412 */;
	struct befs_btree_node cocci_id/* fs/befs/btree.c 261 */;
	befs_btree_super cocci_id/* fs/befs/btree.c 249 */;
	const char *cocci_id/* fs/befs/btree.c 246 */;
	befs_off_t *cocci_id/* fs/befs/btree.c 246 */;
	befs_btree_nodehead *cocci_id/* fs/befs/btree.c 210 */;
	uint cocci_id/* fs/befs/btree.c 194 */;
	befs_off_t cocci_id/* fs/befs/btree.c 192 */;
	const befs_data_stream *cocci_id/* fs/befs/btree.c 191 */;
	befs_disk_btree_super *cocci_id/* fs/befs/btree.c 138 */;
	struct buffer_head *cocci_id/* fs/befs/btree.c 137 */;
	befs_btree_super *cocci_id/* fs/befs/btree.c 135 */;
	int cocci_id/* fs/befs/btree.c 119 */(const void *key1, int keylen1,
					      const void *key2, int keylen2);
	char *cocci_id/* fs/befs/btree.c 115 */(struct super_block *sb,
						struct befs_btree_node *node,
						int index, u16 *keylen);
	int cocci_id/* fs/befs/btree.c 111 */(struct super_block *sb,
					      struct befs_btree_node *node,
					      const char *findkey,
					      befs_off_t *value);
	char *cocci_id/* fs/befs/btree.c 109 */(struct befs_btree_node *node);
	fs64 *cocci_id/* fs/befs/btree.c 107 */(struct befs_btree_node *node);
	fs16 *cocci_id/* fs/befs/btree.c 105 */(struct befs_btree_node *node);
	int cocci_id/* fs/befs/btree.c 103 */(struct befs_btree_node *node);
}
