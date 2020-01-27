cocci_test_suite() {
	__be64 *cocci_id/* fs/jbd2/recovery.c 844 */;
	jbd2_journal_revoke_header_t cocci_id/* fs/jbd2/recovery.c 822 */;
	jbd2_journal_revoke_header_t *cocci_id/* fs/jbd2/recovery.c 815 */;
	tid_t cocci_id/* fs/jbd2/recovery.c 813 */;
	struct buffer_head *cocci_id/* fs/jbd2/recovery.c 74 */[MAXBUF];
	unsigned cocci_id/* fs/jbd2/recovery.c 696 */;
	struct commit_header *cocci_id/* fs/jbd2/recovery.c 694 */;
	__be32 *cocci_id/* fs/jbd2/recovery.c 628 */;
	unsigned long long cocci_id/* fs/jbd2/recovery.c 578 */;
	struct buffer_head *cocci_id/* fs/jbd2/recovery.c 47 */[];
	void cocci_id/* fs/jbd2/recovery.c 47 */;
	__u32 cocci_id/* fs/jbd2/recovery.c 428 */;
	journal_header_t *cocci_id/* fs/jbd2/recovery.c 423 */;
	journal_superblock_t *cocci_id/* fs/jbd2/recovery.c 422 */;
	unsigned int cocci_id/* fs/jbd2/recovery.c 419 */;
	enum passtype cocci_id/* fs/jbd2/recovery.c 417 */;
	struct recovery_info *cocci_id/* fs/jbd2/recovery.c 417 */;
	int cocci_id/* fs/jbd2/recovery.c 41 */(journal_t *,
						struct buffer_head *, tid_t,
						struct recovery_info *);
	__u8 *cocci_id/* fs/jbd2/recovery.c 407 */;
	__be32 cocci_id/* fs/jbd2/recovery.c 401 */;
	journal_block_tag3_t *cocci_id/* fs/jbd2/recovery.c 399 */;
	int cocci_id/* fs/jbd2/recovery.c 39 */(journal_t *journal,
						struct recovery_info *info,
						enum passtype pass);
	enum passtype{PASS_SCAN, PASS_REVOKE, PASS_REPLAY,} cocci_id/* fs/jbd2/recovery.c 38 */;
	void *cocci_id/* fs/jbd2/recovery.c 359 */;
	unsigned long cocci_id/* fs/jbd2/recovery.c 354 */;
	__u32 *cocci_id/* fs/jbd2/recovery.c 351 */;
	unsigned long *cocci_id/* fs/jbd2/recovery.c 351 */;
	journal_t *cocci_id/* fs/jbd2/recovery.c 350 */;
	struct buffer_head *cocci_id/* fs/jbd2/recovery.c 350 */;
	int cocci_id/* fs/jbd2/recovery.c 350 */;
	u64 cocci_id/* fs/jbd2/recovery.c 342 */;
	struct recovery_info {
		tid_t start_transaction;
		tid_t end_transaction;
		int nr_replays;
		int nr_revokes;
		int nr_revoke_hits;
	} cocci_id/* fs/jbd2/recovery.c 28 */;
	struct recovery_info cocci_id/* fs/jbd2/recovery.c 249 */;
	journal_header_t cocci_id/* fs/jbd2/recovery.c 207 */;
	struct jbd2_journal_block_tail cocci_id/* fs/jbd2/recovery.c 205 */;
	journal_block_tag_t *cocci_id/* fs/jbd2/recovery.c 200 */;
	char *cocci_id/* fs/jbd2/recovery.c 199 */;
	struct jbd2_journal_block_tail *cocci_id/* fs/jbd2/recovery.c 176 */;
	struct buffer_head **cocci_id/* fs/jbd2/recovery.c 129 */;
}
