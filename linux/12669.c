cocci_test_suite() {
	struct ipu_cpmem *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 954 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 952 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 952 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 892 */;
	struct v4l2_pix_format *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 766 */;
	struct ipu_image *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 764 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 607 */;
	const struct ipu_rgb cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 564 */;
	unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 473 */;
	const struct ipu_rgb *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 368 */;
	enum ipu_rotate_mode cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 359 */;
	dma_addr_t cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 272 */;
	void __iomem *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 231 */;
	struct ipu_cpmem {
		struct ipu_ch_param __iomem *base;
		u32 module;
		spinlock_t lock;
		int use_count;
		struct ipu_soc *ipu;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 22 */;
	struct ipu_ch_param {
		struct ipu_cpmem_word word[2];
	} cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 18 */;
	struct ipu_cpmem_word {
		u32 data[5];
		u32 res[3];
	} cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 13 */;
	struct ipu_ch_param __iomem *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 128 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 126 */;
	struct ipuv3_channel *cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 126 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-cpmem.c 100 */;
}
