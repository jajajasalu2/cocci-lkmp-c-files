cocci_test_suite() {
	struct caam_rng_ctx {
		struct device *jrdev;
		dma_addr_t sh_desc_dma;
		u32 sh_desc[DESC_RNG_LEN];
		unsigned int cur_buf_idx;
		int current_buf;
		struct buf_data bufs[2];
	} cocci_id/* drivers/crypto/caam/caamrng.c 72 */;
	struct buf_data {
		u8 buf[RN_BUF_SIZE]____cacheline_aligned;
		dma_addr_t addr;
		struct completion filled;
		u32 hw_desc[DESC_JOB_O_LEN];
#define BUF_NOT_EMPTY 0
#define BUF_EMPTY 1
#define BUF_PENDING 2
		atomic_t empty;
	} cocci_id/* drivers/crypto/caam/caamrng.c 60 */;
	struct caam_drv_private *cocci_id/* drivers/crypto/caam/caamrng.c 317 */;
	u32 cocci_id/* drivers/crypto/caam/caamrng.c 316 */;
	struct hwrng cocci_id/* drivers/crypto/caam/caamrng.c 297 */;
	struct device *cocci_id/* drivers/crypto/caam/caamrng.c 277 */;
	struct caam_rng_ctx *cocci_id/* drivers/crypto/caam/caamrng.c 261 */;
	struct buf_data *cocci_id/* drivers/crypto/caam/caamrng.c 250 */;
	int cocci_id/* drivers/crypto/caam/caamrng.c 249 */;
	struct hwrng *cocci_id/* drivers/crypto/caam/caamrng.c 247 */;
	void cocci_id/* drivers/crypto/caam/caamrng.c 247 */;
	u32 *cocci_id/* drivers/crypto/caam/caamrng.c 227 */;
	bool cocci_id/* drivers/crypto/caam/caamrng.c 144 */;
	void *cocci_id/* drivers/crypto/caam/caamrng.c 144 */;
	size_t cocci_id/* drivers/crypto/caam/caamrng.c 144 */;
	struct buf_data cocci_id/* drivers/crypto/caam/caamrng.c 111 */;
}
