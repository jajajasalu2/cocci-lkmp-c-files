cocci_test_suite() {
	u16 cocci_id/* fs/ocfs2/slot_map.c 99 */;
	int cocci_id/* fs/ocfs2/slot_map.c 46 */(struct ocfs2_slot_info *si,
						 unsigned int node_num);
	struct inode *cocci_id/* fs/ocfs2/slot_map.c 404 */;
	struct ocfs2_extended_slot cocci_id/* fs/ocfs2/slot_map.c 359 */;
	struct ocfs2_slot_info {
		int si_extended;
		int si_slots_per_block;
		struct inode *si_inode;
		unsigned int si_blocks;
		struct buffer_head **si_bh;
		unsigned int si_num_slots;
		struct ocfs2_slot si_slots[];
	} cocci_id/* fs/ocfs2/slot_map.c 35 */;
	struct buffer_head *cocci_id/* fs/ocfs2/slot_map.c 344 */;
	unsigned long long cocci_id/* fs/ocfs2/slot_map.c 342 */;
	u64 cocci_id/* fs/ocfs2/slot_map.c 341 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/slot_map.c 323 */;
	unsigned int cocci_id/* fs/ocfs2/slot_map.c 304 */;
	void cocci_id/* fs/ocfs2/slot_map.c 302 */;
	struct ocfs2_slot {
		int sl_valid;
		unsigned int sl_node_num;
	} cocci_id/* fs/ocfs2/slot_map.c 30 */;
	unsigned int *cocci_id/* fs/ocfs2/slot_map.c 286 */;
	struct ocfs2_slot_info *cocci_id/* fs/ocfs2/slot_map.c 251 */;
	int cocci_id/* fs/ocfs2/slot_map.c 251 */;
	unsigned long long *cocci_id/* fs/ocfs2/slot_map.c 212 */;
	struct ocfs2_slot_map *cocci_id/* fs/ocfs2/slot_map.c 172 */;
	struct ocfs2_slot_map_extended *cocci_id/* fs/ocfs2/slot_map.c 155 */;
	struct buffer_head **cocci_id/* fs/ocfs2/slot_map.c 151 */;
}
