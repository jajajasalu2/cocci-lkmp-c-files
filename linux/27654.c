cocci_test_suite() {
	struct kmem_cache *cocci_id/* fs/jbd2/revoke.c 95 */;
	jbd2_journal_revoke_header_t *cocci_id/* fs/jbd2/revoke.c 645 */;
	int cocci_id/* fs/jbd2/revoke.c 643 */;
	struct buffer_head *cocci_id/* fs/jbd2/revoke.c 642 */;
	void cocci_id/* fs/jbd2/revoke.c 641 */;
	__be32 *cocci_id/* fs/jbd2/revoke.c 627 */;
	__be64 *cocci_id/* fs/jbd2/revoke.c 624 */;
	jbd2_journal_revoke_header_t cocci_id/* fs/jbd2/revoke.c 619 */;
	struct jbd2_journal_block_tail cocci_id/* fs/jbd2/revoke.c 594 */;
	int *cocci_id/* fs/jbd2/revoke.c 574 */;
	struct buffer_head **cocci_id/* fs/jbd2/revoke.c 573 */;
	transaction_t *cocci_id/* fs/jbd2/revoke.c 530 */;
	struct jbd2_revoke_table_s *cocci_id/* fs/jbd2/revoke.c 486 */;
	handle_t *cocci_id/* fs/jbd2/revoke.c 423 */;
	struct journal_head *cocci_id/* fs/jbd2/revoke.c 423 */;
	struct block_device *cocci_id/* fs/jbd2/revoke.c 331 */;
	struct list_head cocci_id/* fs/jbd2/revoke.c 234 */;
	int __init cocci_id/* fs/jbd2/revoke.c 193 */;
	struct list_head *cocci_id/* fs/jbd2/revoke.c 163 */;
	unsigned long long cocci_id/* fs/jbd2/revoke.c 161 */;
	journal_t *cocci_id/* fs/jbd2/revoke.c 160 */;
	struct jbd2_revoke_record_s *cocci_id/* fs/jbd2/revoke.c 160 */;
	gfp_t cocci_id/* fs/jbd2/revoke.c 141 */;
	tid_t cocci_id/* fs/jbd2/revoke.c 137 */;
	void cocci_id/* fs/jbd2/revoke.c 126 */(journal_t *,
						struct buffer_head *, int);
	void cocci_id/* fs/jbd2/revoke.c 122 */(transaction_t *,
						struct list_head *,
						struct buffer_head **, int *,
						struct jbd2_revoke_record_s *);
	struct jbd2_revoke_table_s {
		int hash_size;
		int hash_shift;
		struct list_head *hash_table;
	} cocci_id/* fs/jbd2/revoke.c 111 */;
	struct jbd2_revoke_record_s {
		struct list_head hash;
		tid_t sequence;
		unsigned long long blocknr;
	} cocci_id/* fs/jbd2/revoke.c 102 */;
}
