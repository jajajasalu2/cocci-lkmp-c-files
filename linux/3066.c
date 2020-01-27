cocci_test_suite() {
	u32 *cocci_id/* drivers/block/rsxx/cregs.c 79 */;
	struct rsxx_reg_access cocci_id/* drivers/block/rsxx/cregs.c 667 */;
	struct rsxx_reg_access __user *cocci_id/* drivers/block/rsxx/cregs.c 664 */;
	struct rsxx_reg_access *cocci_id/* drivers/block/rsxx/cregs.c 654 */;
	char cocci_id/* drivers/block/rsxx/cregs.c 531 */;
	const char *cocci_id/* drivers/block/rsxx/cregs.c 529 */;
	u64 cocci_id/* drivers/block/rsxx/cregs.c 503 */;
	u64 *cocci_id/* drivers/block/rsxx/cregs.c 493 */;
	char *cocci_id/* drivers/block/rsxx/cregs.c 460 */;
	u32 cocci_id/* drivers/block/rsxx/cregs.c 439 */;
	unsigned long cocci_id/* drivers/block/rsxx/cregs.c 381 */;
	struct creg_completion cocci_id/* drivers/block/rsxx/cregs.c 380 */;
	unsigned int *cocci_id/* drivers/block/rsxx/cregs.c 377 */;
	void *cocci_id/* drivers/block/rsxx/cregs.c 375 */;
	unsigned int cocci_id/* drivers/block/rsxx/cregs.c 372 */;
	struct rsxx_cardinfo *cocci_id/* drivers/block/rsxx/cregs.c 371 */;
	int cocci_id/* drivers/block/rsxx/cregs.c 371 */;
	struct creg_completion *cocci_id/* drivers/block/rsxx/cregs.c 361 */;
	struct creg_completion {
		struct completion *cmd_done;
		int st;
		u32 creg_status;
	} cocci_id/* drivers/block/rsxx/cregs.c 351 */;
	struct kmem_cache *cocci_id/* drivers/block/rsxx/cregs.c 34 */;
	struct rsxx_cardinfo cocci_id/* drivers/block/rsxx/cregs.c 228 */;
	struct creg_cmd *cocci_id/* drivers/block/rsxx/cregs.c 225 */;
	struct work_struct *cocci_id/* drivers/block/rsxx/cregs.c 222 */;
	void cocci_id/* drivers/block/rsxx/cregs.c 222 */;
	struct creg_cmd {
		struct list_head list;
		creg_cmd_cb cb;
		void *cb_private;
		unsigned int op;
		unsigned int addr;
		int cnt8;
		void *buf;
		unsigned int stream;
		unsigned int status;
	} cocci_id/* drivers/block/rsxx/cregs.c 22 */;
	struct timer_list *cocci_id/* drivers/block/rsxx/cregs.c 192 */;
	void (*cocci_id/* drivers/block/rsxx/cregs.c 18 */)(struct rsxx_cardinfo *card,
							    struct creg_cmd *cmd,
							    int st);
	creg_cmd_cb cocci_id/* drivers/block/rsxx/cregs.c 153 */;
	struct creg_cmd cocci_id/* drivers/block/rsxx/cregs.c 131 */;
}
