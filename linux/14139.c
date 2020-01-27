cocci_test_suite() {
	struct vdoa_ctx {
		struct vdoa_data *vdoa;
		struct completion completion;
		struct vdoa_q_data q_data[2];
		unsigned int submitted_job;
		unsigned int completed_job;
	} cocci_id/* drivers/media/platform/coda/imx-vdoa.c 92 */;
	struct vdoa_q_data {
		unsigned int width;
		unsigned int height;
		unsigned int bytesperline;
		unsigned int sizeimage;
		u32 pixelformat;
	} cocci_id/* drivers/media/platform/coda/imx-vdoa.c 84 */;
	struct vdoa_data {
		struct vdoa_ctx *curr_ctx;
		struct device *dev;
		struct clk *vdoa_clk;
		void __iomem *regs;
	} cocci_id/* drivers/media/platform/coda/imx-vdoa.c 77 */;
	enum{V4L2_M2M_SRC=0, V4L2_M2M_DST=1,} cocci_id/* drivers/media/platform/coda/imx-vdoa.c 72 */;
	struct platform_driver cocci_id/* drivers/media/platform/coda/imx-vdoa.c 336 */;
	const struct of_device_id cocci_id/* drivers/media/platform/coda/imx-vdoa.c 330 */[];
	struct resource *cocci_id/* drivers/media/platform/coda/imx-vdoa.c 287 */;
	struct platform_device *cocci_id/* drivers/media/platform/coda/imx-vdoa.c 284 */;
	struct vdoa_q_data *cocci_id/* drivers/media/platform/coda/imx-vdoa.c 239 */;
	u32 cocci_id/* drivers/media/platform/coda/imx-vdoa.c 237 */;
	unsigned int cocci_id/* drivers/media/platform/coda/imx-vdoa.c 236 */;
	struct vdoa_ctx *cocci_id/* drivers/media/platform/coda/imx-vdoa.c 235 */;
	int cocci_id/* drivers/media/platform/coda/imx-vdoa.c 235 */;
	void cocci_id/* drivers/media/platform/coda/imx-vdoa.c 221 */;
	struct vdoa_data *cocci_id/* drivers/media/platform/coda/imx-vdoa.c 199 */;
	dma_addr_t cocci_id/* drivers/media/platform/coda/imx-vdoa.c 148 */;
	irqreturn_t cocci_id/* drivers/media/platform/coda/imx-vdoa.c 100 */;
	void *cocci_id/* drivers/media/platform/coda/imx-vdoa.c 100 */;
}
