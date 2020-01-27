cocci_test_suite() {
	unsigned long cocci_id/* block/blk-flush.c 99 */;
	void cocci_id/* block/blk-flush.c 96 */(struct request_queue *q,
						struct blk_flush_queue *fq,
						unsigned int flags);
	enum{REQ_FSEQ_PREFLUSH=(1 << 0), REQ_FSEQ_DATA=(1 << 1), REQ_FSEQ_POSTFLUSH=(1 << 2), REQ_FSEQ_DONE=(1 << 3), REQ_FSEQ_ACTIONS=REQ_FSEQ_PREFLUSH | REQ_FSEQ_DATA | REQ_FSEQ_POSTFLUSH, FLUSH_PENDING_TIMEOUT=5 * HZ,} cocci_id/* block/blk-flush.c 80 */;
	struct request cocci_id/* block/blk-flush.c 492 */;
	gfp_t cocci_id/* block/blk-flush.c 489 */;
	int cocci_id/* block/blk-flush.c 489 */;
	struct request_queue *cocci_id/* block/blk-flush.c 488 */;
	struct blk_flush_queue *cocci_id/* block/blk-flush.c 488 */;
	struct bio *cocci_id/* block/blk-flush.c 450 */;
	sector_t *cocci_id/* block/blk-flush.c 447 */;
	struct block_device *cocci_id/* block/blk-flush.c 446 */;
	struct blk_mq_ctx *cocci_id/* block/blk-flush.c 344 */;
	struct blk_mq_hw_ctx *cocci_id/* block/blk-flush.c 225 */;
	struct list_head *cocci_id/* block/blk-flush.c 172 */;
	blk_status_t cocci_id/* block/blk-flush.c 169 */;
	unsigned int cocci_id/* block/blk-flush.c 169 */;
	struct hd_struct *cocci_id/* block/blk-flush.c 142 */;
	struct request *cocci_id/* block/blk-flush.c 140 */;
	void cocci_id/* block/blk-flush.c 140 */;
	bool cocci_id/* block/blk-flush.c 135 */;
}
