cocci_test_suite() {
	u32 cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 854 */;
	enum drv_crypto_direction cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 850 */;
	ssize_t cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 714 */;
	struct crypto_aead *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 642 */;
	enum cc_sg_cpy_direct cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 64 */;
	struct aead_req_ctx *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 639 */;
	struct aead_request *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 635 */;
	struct cc_drvdata *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 634 */;
	int cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 634 */;
	gfp_t cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 590 */;
	enum cc_req_dma_buf_type cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 42 */;
	char *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 42 */;
	struct cipher_req_ctx *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 412 */;
	struct buffer_array {
		unsigned int num_of_buffers;
		union buffer_array_entry entry[MAX_NUM_OF_BUFFERS_IN_MLLI];
		unsigned int offset[MAX_NUM_OF_BUFFERS_IN_MLLI];
		int nents[MAX_NUM_OF_BUFFERS_IN_MLLI];
		int total_data_len[MAX_NUM_OF_BUFFERS_IN_MLLI];
		enum dma_buffer_type type[MAX_NUM_OF_BUFFERS_IN_MLLI];
		bool is_last[MAX_NUM_OF_BUFFERS_IN_MLLI];
		u32 *mlli_nents[MAX_NUM_OF_BUFFERS_IN_MLLI];
	} cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 31 */;
	struct scatterlist *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 269 */;
	union buffer_array_entry {
		struct scatterlist *sgl;
		dma_addr_t buffer_dma;
	} cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 26 */;
	bool cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 250 */;
	u32 *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 250 */;
	dma_addr_t cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 249 */;
	unsigned int cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 249 */;
	struct buffer_array *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 248 */;
	struct device *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 247 */;
	void cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 247 */;
	struct buff_mgr_handle {
		struct dma_pool *mlli_buffs_pool;
	} cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 22 */;
	union buffer_array_entry *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 210 */;
	struct mlli_params *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 189 */;
	s32 cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 167 */;
	enum dma_buffer_type{DMA_NULL_TYPE=-1, DMA_SGL_TYPE=1, DMA_BUFF_TYPE=2,} cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 16 */;
	struct buff_mgr_handle *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 1468 */;
	struct scatterlist cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 1250 */;
	u32 **cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 124 */;
	struct ahash_req_ctx *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 1208 */;
	void *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 118 */;
	u8 *cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 112 */;
	struct buffer_array cocci_id/* drivers/crypto/ccree/cc_buffer_mgr.c 1013 */;
}
