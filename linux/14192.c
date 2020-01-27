cocci_test_suite() {
	struct vpu_regs {
		void __iomem *tcm;
		void __iomem *cfg;
		int irq;
	} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 95 */;
	struct platform_driver cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 942 */;
	const struct of_device_id cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 915 */[];
	struct vpu_ipi_desc cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 904 */;
	struct vpu_mem {
		void *va;
		dma_addr_t pa;
	} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 83 */;
	struct resource *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 772 */;
	struct device *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 771 */;
	struct platform_device *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 768 */;
	struct dentry *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 766 */;
	irqreturn_t cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 734 */;
	struct share_obj cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 728 */;
	enum vpu_fw_type{P_FW, D_FW,} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 71 */;
	struct vpu_ipi_desc *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 704 */;
	struct share_obj *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 703 */;
	unsigned long long cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 695 */;
	u32 cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 671 */;
	const struct file_operations cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 656 */;
	unsigned int cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 620 */;
	char cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 619 */[256];
	loff_t *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 617 */;
	struct file *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 616 */;
	char __user *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 616 */;
	ssize_t cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 616 */;
	struct vpu_run *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 606 */;
	void *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 483 */;
	const struct firmware *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 480 */;
	char *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 479 */;
	size_t cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 477 */;
	u8 cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 475 */;
	struct mtk_vpu *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 474 */;
	int cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 474 */;
	struct device_node *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 453 */;
	struct vpu_wdt_handler *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 392 */;
	enum rst_id cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 389 */;
	void cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 388 */(void *);
	struct mtk_vpu cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 363 */;
	struct vpu_wdt cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 362 */;
	struct vpu_wdt *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 362 */;
	struct work_struct *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 360 */;
	unsigned long cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 296 */;
	const char *cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 266 */;
	ipi_handler_t cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 265 */;
	enum ipi_id cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 265 */;
	bool cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 228 */;
	void cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 218 */;
	struct mtk_vpu {
		struct vpu_mem extmem[2];
		struct vpu_regs reg;
		struct vpu_run run;
		struct vpu_wdt wdt;
		struct vpu_ipi_desc ipi_desc[IPI_MAX];
		struct share_obj *recv_buf;
		struct share_obj *send_buf;
		struct device *dev;
		struct clk *clk;
		bool fw_loaded;
		bool enable_4GB;
		struct mutex vpu_mutex;
		u32 wdt_refcnt;
		wait_queue_head_t ack_wq;
		bool ipi_id_ack[IPI_MAX];
	} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 200 */;
	struct share_obj {
		s32 id;
		u32 len;
		unsigned char share_buf[SHARE_BUF_SIZE];
	} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 165 */;
	struct vpu_ipi_desc {
		ipi_handler_t handler;
		const char *name;
		void *priv;
	} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 151 */;
	struct vpu_run {
		u32 signaled;
		char fw_ver[VPU_FW_VER_LEN];
		unsigned int dec_capability;
		unsigned int enc_capability;
		wait_queue_head_t wq;
	} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 136 */;
	struct vpu_wdt {
		struct vpu_wdt_handler handler[VPU_RST_MAX];
		struct work_struct ws;
		struct workqueue_struct *wq;
	} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 119 */;
	struct vpu_wdt_handler {
		void (*reset_func)(void *);
		void *priv;
	} cocci_id/* drivers/media/platform/mtk-vpu/mtk_vpu.c 107 */;
}
