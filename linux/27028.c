cocci_test_suite() {
	struct xfs_bmbt_irec cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 989 */;
	xfs_fileoff_t *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 963 */;
	enum{NODE_SIZE=256, KEYS_PER_NODE=NODE_SIZE / (sizeof(uint64_t) + sizeof(void *)), RECS_PER_LEAF=(NODE_SIZE - (2 * sizeof(struct xfs_iext_leaf *))) / sizeof(struct xfs_iext_rec),} cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 88 */;
	struct xfs_bmbt_irec *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 73 */;
	int *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 674 */;
	struct xfs_inode *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 626 */;
	int64_t cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 599 */;
	struct xfs_iext_rec cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 586 */;
	struct xfs_ifork *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 581 */;
	void cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 579 */;
	const int cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 546 */;
	uint64_t cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 495 */;
	struct xfs_iext_node **cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 452 */;
	struct xfs_iext_leaf *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 405 */;
	struct xfs_iext_rec {
		uint64_t lo;
		uint64_t hi;
	} cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 32 */;
	xfs_fileoff_t cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 306 */;
	uint32_t cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 294 */;
	void *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 157 */;
	struct xfs_iext_rec *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 140 */;
	struct xfs_iext_cursor *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 140 */;
	xfs_extnum_t cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 128 */;
	struct xfs_iext_leaf {
		struct xfs_iext_rec recs[RECS_PER_LEAF];
		struct xfs_iext_leaf *prev;
		struct xfs_iext_leaf *next;
	} cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 122 */;
	struct xfs_iext_node {
		uint64_t keys[KEYS_PER_NODE];
#define XFS_IEXT_KEY_INVALID (1ULL << 63)
			void *ptrs[KEYS_PER_NODE];
	} cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 116 */;
	int cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 1026 */;
	struct xfs_iext_node *cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 1025 */;
	bool cocci_id/* fs/xfs/libxfs/xfs_iext_tree.c 1007 */;
}
