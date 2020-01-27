cocci_test_suite() {
	char cocci_id/* drivers/misc/sgi-gru/grukservices.c 999 */[GRU_CACHE_LINE_BYTES];
	struct gru_message_queue_desc cocci_id/* drivers/misc/sgi-gru/grukservices.c 996 */;
	unsigned int cocci_id/* drivers/misc/sgi-gru/grukservices.c 928 */;
	unsigned long cocci_id/* drivers/misc/sgi-gru/grukservices.c 927 */;
	unsigned long *cocci_id/* drivers/misc/sgi-gru/grukservices.c 904 */;
	union gru_mesqhead cocci_id/* drivers/misc/sgi-gru/grukservices.c 639 */;
	struct message_header cocci_id/* drivers/misc/sgi-gru/grukservices.c 585 */;
	const struct message_header cocci_id/* drivers/misc/sgi-gru/grukservices.c 581 */;
	struct message_queue *cocci_id/* drivers/misc/sgi-gru/grukservices.c 547 */;
	struct gru_message_queue_desc *cocci_id/* drivers/misc/sgi-gru/grukservices.c 544 */;
	struct message_header *cocci_id/* drivers/misc/sgi-gru/grukservices.c 530 */;
	void *cocci_id/* drivers/misc/sgi-gru/grukservices.c 528 */;
	int cocci_id/* drivers/misc/sgi-gru/grukservices.c 528 */;
	char cocci_id/* drivers/misc/sgi-gru/grukservices.c 502 */[GRU_EXC_STR_SIZE];
	char *cocci_id/* drivers/misc/sgi-gru/grukservices.c 500 */;
	void cocci_id/* drivers/misc/sgi-gru/grukservices.c 500 */;
	struct gru_control_block_status *cocci_id/* drivers/misc/sgi-gru/grukservices.c 477 */;
	struct control_block_extended_exc_detail cocci_id/* drivers/misc/sgi-gru/grukservices.c 428 */;
	struct gru_control_block_extended *cocci_id/* drivers/misc/sgi-gru/grukservices.c 389 */;
	struct control_block_extended_exc_detail *cocci_id/* drivers/misc/sgi-gru/grukservices.c 387 */;
	struct completion *cocci_id/* drivers/misc/sgi-gru/grukservices.c 290 */;
	void **cocci_id/* drivers/misc/sgi-gru/grukservices.c 254 */;
	struct gru_thread_state *cocci_id/* drivers/misc/sgi-gru/grukservices.c 189 */;
	struct gru_blade_state *cocci_id/* drivers/misc/sgi-gru/grukservices.c 188 */;
	struct gru_state *cocci_id/* drivers/misc/sgi-gru/grukservices.c 141 */;
	struct message_queue cocci_id/* drivers/misc/sgi-gru/grukservices.c 133 */;
	struct message_header {
		char present;
		char present2;
		char lines;
		char fill;
	} cocci_id/* drivers/misc/sgi-gru/grukservices.c 126 */;
	struct message_queue {
		union gru_mesqhead head __gru_cacheline_aligned__;
		int qlines;
		long hstatus[2];
		void *next __gru_cacheline_aligned__;
		void *limit;
		void *start;
		void *start2;
		char data ____cacheline_aligned;
	} cocci_id/* drivers/misc/sgi-gru/grukservices.c 114 */;
	char cocci_id/* drivers/misc/sgi-gru/grukservices.c 1106 */[BUFSIZE];
}
