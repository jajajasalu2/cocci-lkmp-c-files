cocci_test_suite() {
	struct omap_des_dev cocci_id/* drivers/crypto/omap-des.c 960 */;
	struct resource *cocci_id/* drivers/crypto/omap-des.c 956 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/omap-des.c 955 */;
	struct omap_des_reqctx {
		unsigned long mode;
	} cocci_id/* drivers/crypto/omap-des.c 94 */;
	struct device *cocci_id/* drivers/crypto/omap-des.c 936 */;
	struct platform_device *cocci_id/* drivers/crypto/omap-des.c 923 */;
	const struct of_device_id cocci_id/* drivers/crypto/omap-des.c 913 */[];
	struct omap_des_ctx {
		struct crypto_engine_ctx enginectx;
		struct omap_des_dev *dd;
		int keylen;
		u32 key[(3 * DES_KEY_SIZE) / sizeof(u32)];
		unsigned long flags;
	} cocci_id/* drivers/crypto/omap-des.c 85 */;
	u32 *cocci_id/* drivers/crypto/omap-des.c 833 */;
	irqreturn_t cocci_id/* drivers/crypto/omap-des.c 829 */;
	const struct omap_des_pdata cocci_id/* drivers/crypto/omap-des.c 809 */;
	struct omap_des_algs_info cocci_id/* drivers/crypto/omap-des.c 801 */[];
	struct omap_des_ctx cocci_id/* drivers/crypto/omap-des.c 736 */;
	struct skcipher_alg cocci_id/* drivers/crypto/omap-des.c 728 */[];
	struct omap_des_reqctx cocci_id/* drivers/crypto/omap-des.c 717 */;
	int cocci_id/* drivers/crypto/omap-des.c 708 */(struct crypto_engine *engine,
							void *areq);
	struct skcipher_request *cocci_id/* drivers/crypto/omap-des.c 701 */;
	struct omap_des_ctx *cocci_id/* drivers/crypto/omap-des.c 671 */;
	unsigned int cocci_id/* drivers/crypto/omap-des.c 669 */;
	const u8 *cocci_id/* drivers/crypto/omap-des.c 668 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/omap-des.c 668 */;
	int cocci_id/* drivers/crypto/omap-des.c 668 */;
	struct omap_des_dev *cocci_id/* drivers/crypto/omap-des.c 628 */;
	struct omap_des_reqctx *cocci_id/* drivers/crypto/omap-des.c 627 */;
	unsigned long cocci_id/* drivers/crypto/omap-des.c 623 */;
	struct skcipher_request cocci_id/* drivers/crypto/omap-des.c 586 */;
	void *cocci_id/* drivers/crypto/omap-des.c 584 */;
	struct crypto_engine *cocci_id/* drivers/crypto/omap-des.c 583 */;
	u16 cocci_id/* drivers/crypto/omap-des.c 535 */;
	struct dma_slave_config cocci_id/* drivers/crypto/omap-des.c 384 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/crypto/omap-des.c 383 */;
	struct scatterlist *cocci_id/* drivers/crypto/omap-des.c 378 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/omap-des.c 377 */;
	void cocci_id/* drivers/crypto/omap-des.c 368 */;
	u32 cocci_id/* drivers/crypto/omap-des.c 303 */;
	struct omap_des_dev {
		struct list_head list;
		unsigned long phys_base;
		void __iomem *io_base;
		struct omap_des_ctx *ctx;
		struct device *dev;
		unsigned long flags;
		int err;
		struct tasklet_struct done_task;
		struct skcipher_request *req;
		struct crypto_engine *engine;
		size_t total;
		size_t total_save;
		struct scatterlist *in_sg;
		struct scatterlist *out_sg;
		struct scatterlist in_sgl;
		struct scatterlist out_sgl;
		struct scatterlist *orig_out;
		struct scatter_walk in_walk;
		struct scatter_walk out_walk;
		struct dma_chan *dma_lch_in;
		struct dma_chan *dma_lch_out;
		int in_sg_len;
		int out_sg_len;
		int pio_only;
		const struct omap_des_pdata *pdata;
	} cocci_id/* drivers/crypto/omap-des.c 132 */;
	struct platform_driver cocci_id/* drivers/crypto/omap-des.c 1132 */;
	struct omap_des_pdata {
		struct omap_des_algs_info *algs_info;
		unsigned int algs_info_size;
		void (*trigger)(struct omap_des_dev *dd, int length);
		u32 key_ofs;
		u32 iv_ofs;
		u32 ctrl_ofs;
		u32 data_ofs;
		u32 rev_ofs;
		u32 mask_ofs;
		u32 irq_enable_ofs;
		u32 irq_status_ofs;
		u32 dma_enable_in;
		u32 dma_enable_out;
		u32 dma_start;
		u32 major_mask;
		u32 major_shift;
		u32 minor_mask;
		u32 minor_shift;
	} cocci_id/* drivers/crypto/omap-des.c 107 */;
	struct omap_des_algs_info {
		struct skcipher_alg *algs_list;
		unsigned int size;
		unsigned int registered;
	} cocci_id/* drivers/crypto/omap-des.c 101 */;
}