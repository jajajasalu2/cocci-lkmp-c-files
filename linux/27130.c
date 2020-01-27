cocci_test_suite() {
	unsigned int cocci_id/* fs/ubifs/replay.c 962 */;
	struct bud_entry cocci_id/* fs/ubifs/replay.c 916 */;
	struct ubifs_bud cocci_id/* fs/ubifs/replay.c 912 */;
	struct bud_entry *cocci_id/* fs/ubifs/replay.c 907 */;
	struct ubifs_bud *cocci_id/* fs/ubifs/replay.c 906 */;
	unsigned long long cocci_id/* fs/ubifs/replay.c 904 */;
	struct ubifs_info *cocci_id/* fs/ubifs/replay.c 903 */;
	int cocci_id/* fs/ubifs/replay.c 903 */;
	const struct ubifs_lprops *cocci_id/* fs/ubifs/replay.c 90 */;
	void cocci_id/* fs/ubifs/replay.c 881 */;
	union ubifs_key cocci_id/* fs/ubifs/replay.c 796 */;
	struct ubifs_trun_node *cocci_id/* fs/ubifs/replay.c 793 */;
	struct ubifs_dent_node *cocci_id/* fs/ubifs/replay.c 779 */;
	struct ubifs_data_node *cocci_id/* fs/ubifs/replay.c 766 */;
	struct ubifs_ino_node *cocci_id/* fs/ubifs/replay.c 754 */;
	u8 cocci_id/* fs/ubifs/replay.c 736 */[UBIFS_HASH_ARR_SZ];
	struct bud_entry {
		struct list_head list;
		struct ubifs_bud *bud;
		unsigned long long sqnum;
		int free;
		int dirty;
	} cocci_id/* fs/ubifs/replay.c 71 */;
	struct ubifs_auth_node *cocci_id/* fs/ubifs/replay.c 621 */;
	u8 *cocci_id/* fs/ubifs/replay.c 604 */;
	struct ubifs_scan_node *cocci_id/* fs/ubifs/replay.c 601 */;
	struct shash_desc *cocci_id/* fs/ubifs/replay.c 598 */;
	struct ubifs_scan_leb *cocci_id/* fs/ubifs/replay.c 597 */;
	uint32_t cocci_id/* fs/ubifs/replay.c 517 */;
	struct ubifs_jhead *cocci_id/* fs/ubifs/replay.c 515 */;
	const struct ubifs_dent_node *cocci_id/* fs/ubifs/replay.c 480 */;
	struct replay_entry {
		int lnum;
		int offs;
		int len;
		u8 hash[UBIFS_HASH_ARR_SZ];
		unsigned int deletion:1;
		unsigned long long sqnum;
		struct list_head list;
		union ubifs_key key;
		union {
			struct fscrypt_name nm;
			struct {
				loff_t old_size;
				loff_t new_size;
			};
		};
	} cocci_id/* fs/ubifs/replay.c 45 */;
	struct replay_entry cocci_id/* fs/ubifs/replay.c 443 */;
	char *cocci_id/* fs/ubifs/replay.c 437 */;
	int *cocci_id/* fs/ubifs/replay.c 434 */;
	const char *cocci_id/* fs/ubifs/replay.c 433 */;
	const u8 *cocci_id/* fs/ubifs/replay.c 432 */;
	union ubifs_key *cocci_id/* fs/ubifs/replay.c 432 */;
	loff_t cocci_id/* fs/ubifs/replay.c 385 */;
	struct list_head *cocci_id/* fs/ubifs/replay.c 301 */;
	void *cocci_id/* fs/ubifs/replay.c 301 */;
	ino_t cocci_id/* fs/ubifs/replay.c 260 */;
	struct replay_entry *cocci_id/* fs/ubifs/replay.c 242 */;
	bool cocci_id/* fs/ubifs/replay.c 213 */;
	unsigned cocci_id/* fs/ubifs/replay.c 183 */;
	unsigned long cocci_id/* fs/ubifs/replay.c 1261 */;
	const struct ubifs_ref_node *cocci_id/* fs/ubifs/replay.c 1097 */;
	struct ubifs_scan_node cocci_id/* fs/ubifs/replay.c 1026 */;
	const struct ubifs_cs_node *cocci_id/* fs/ubifs/replay.c 1003 */;
}
