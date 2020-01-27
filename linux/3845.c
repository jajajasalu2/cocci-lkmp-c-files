cocci_test_suite() {
	enum cc_cpp_alg cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 79 */;
	int cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 79 */;
	void cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 76 */(struct work_struct *work);
	void cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 74 */(unsigned long devarg);
	u32 cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 623 */;
	struct cc_drvdata *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 623 */;
	unsigned int *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 578 */;
	struct cc_drvdata cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 566 */;
	struct work_struct *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 563 */;
	const u32 cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 55 */[CC_CPP_NUM_ALGS][CC_CPP_NUM_SLOTS];
	struct cc_bl_item {
		struct cc_crypto_req creq;
		struct cc_hw_desc desc[CC_MAX_DESC_SEQ_LEN];
		unsigned int len;
		struct list_head list;
		bool notif;
	} cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 47 */;
	gfp_t cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 420 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 414 */;
	struct cc_bl_item cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 362 */;
	void *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 355 */;
	struct cc_bl_item *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 337 */;
	void cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 336 */;
	struct device *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 288 */;
	struct cc_req_mgr_handle *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 285 */;
	bool cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 283 */;
	struct cc_hw_desc *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 282 */;
	unsigned int cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 282 */;
	struct cc_crypto_req *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 281 */;
	unsigned long cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 229 */;
	struct completion *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 220 */;
	void __iomem *cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 190 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 186 */[];
	struct cc_req_mgr_handle {
		unsigned int hw_queue_size;
		unsigned int min_free_hw_slots;
		unsigned int max_used_sw_slots;
		struct cc_crypto_req req_queue[MAX_REQUEST_QUEUE_SIZE];
		u32 req_queue_head;
		u32 req_queue_tail;
		u32 axi_completed;
		u32 q_free_slots;
		spinlock_t hw_lock;
		struct cc_hw_desc compl_desc;
		u8 *dummy_comp_buff;
		dma_addr_t dummy_comp_buff_dma;
		struct list_head backlog;
		unsigned int bl_len;
		spinlock_t bl_lock;
#ifdef COMP_IN_WQ
		struct workqueue_struct *workq;
		struct delayed_work compwork;
#else
		struct tasklet_struct comptask;
#endif
		bool is_runtime_suspended;
	} cocci_id/* drivers/crypto/ccree/cc_request_mgr.c 15 */;
}
