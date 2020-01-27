cocci_test_suite() {
	unsigned long cocci_id/* drivers/dma/sun6i-dma.c 996 */;
	struct dma_tx_state *cocci_id/* drivers/dma/sun6i-dma.c 929 */;
	dma_cookie_t cocci_id/* drivers/dma/sun6i-dma.c 928 */;
	enum dma_status cocci_id/* drivers/dma/sun6i-dma.c 927 */;
	struct virt_dma_chan *cocci_id/* drivers/dma/sun6i-dma.c 902 */;
	struct sun6i_vchan *cocci_id/* drivers/dma/sun6i-dma.c 832 */;
	unsigned int cocci_id/* drivers/dma/sun6i-dma.c 776 */;
	size_t cocci_id/* drivers/dma/sun6i-dma.c 764 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/sun6i-dma.c 761 */;
	struct scatterlist *cocci_id/* drivers/dma/sun6i-dma.c 683 */;
	u32 *cocci_id/* drivers/dma/sun6i-dma.c 581 */;
	enum dma_transfer_direction cocci_id/* drivers/dma/sun6i-dma.c 580 */;
	struct dma_slave_config *cocci_id/* drivers/dma/sun6i-dma.c 579 */;
	struct sun6i_dma_dev *cocci_id/* drivers/dma/sun6i-dma.c 578 */;
	int cocci_id/* drivers/dma/sun6i-dma.c 578 */;
	irqreturn_t cocci_id/* drivers/dma/sun6i-dma.c 535 */;
	void *cocci_id/* drivers/dma/sun6i-dma.c 535 */;
	dma_addr_t cocci_id/* drivers/dma/sun6i-dma.c 406 */;
	struct sun6i_desc *cocci_id/* drivers/dma/sun6i-dma.c 403 */;
	struct virt_dma_desc *cocci_id/* drivers/dma/sun6i-dma.c 401 */;
	struct sun6i_dma_lli *cocci_id/* drivers/dma/sun6i-dma.c 388 */;
	enum dma_slave_buswidth cocci_id/* drivers/dma/sun6i-dma.c 290 */;
	u32 cocci_id/* drivers/dma/sun6i-dma.c 274 */;
	s8 cocci_id/* drivers/dma/sun6i-dma.c 274 */;
	phys_addr_t cocci_id/* drivers/dma/sun6i-dma.c 244 */;
	struct sun6i_pchan *cocci_id/* drivers/dma/sun6i-dma.c 242 */;
	void cocci_id/* drivers/dma/sun6i-dma.c 241 */;
	struct sun6i_desc cocci_id/* drivers/dma/sun6i-dma.c 223 */;
	struct dma_device *cocci_id/* drivers/dma/sun6i-dma.c 210 */;
	struct dma_chan *cocci_id/* drivers/dma/sun6i-dma.c 205 */;
	struct device *cocci_id/* drivers/dma/sun6i-dma.c 205 */;
	struct sun6i_dma_dev {
		struct dma_device slave;
		void __iomem *base;
		struct clk *clk;
		struct clk *clk_mbus;
		int irq;
		spinlock_t lock;
		struct reset_control *rstc;
		struct tasklet_struct task;
		atomic_t tasklet_shutdown;
		struct list_head pending;
		struct dma_pool *pool;
		struct sun6i_pchan *pchans;
		struct sun6i_vchan *vchans;
		const struct sun6i_dma_config *cfg;
		u32 num_pchans;
		u32 num_vchans;
		u32 max_request;
	} cocci_id/* drivers/dma/sun6i-dma.c 185 */;
	struct sun6i_vchan {
		struct virt_dma_chan vc;
		struct list_head node;
		struct dma_slave_config cfg;
		struct sun6i_pchan *phy;
		u8 port;
		u8 irq_type;
		bool cyclic;
	} cocci_id/* drivers/dma/sun6i-dma.c 175 */;
	struct sun6i_pchan {
		u32 idx;
		void __iomem *base;
		struct sun6i_vchan *vchan;
		struct sun6i_desc *desc;
		struct sun6i_desc *done;
	} cocci_id/* drivers/dma/sun6i-dma.c 167 */;
	struct sun6i_desc {
		struct virt_dma_desc vd;
		dma_addr_t p_lli;
		struct sun6i_dma_lli *v_lli;
	} cocci_id/* drivers/dma/sun6i-dma.c 161 */;
	struct platform_driver cocci_id/* drivers/dma/sun6i-dma.c 1441 */;
	struct sun6i_dma_lli {
		u32 cfg;
		u32 src;
		u32 dst;
		u32 len;
		u32 para;
		u32 p_lli_next;
		struct sun6i_dma_lli *v_lli_next;
	} cocci_id/* drivers/dma/sun6i-dma.c 144 */;
	struct sun6i_vchan cocci_id/* drivers/dma/sun6i-dma.c 1342 */;
	struct sun6i_pchan cocci_id/* drivers/dma/sun6i-dma.c 1337 */;
	struct sun6i_dma_lli cocci_id/* drivers/dma/sun6i-dma.c 1278 */;
	struct resource *cocci_id/* drivers/dma/sun6i-dma.c 1237 */;
	struct device_node *cocci_id/* drivers/dma/sun6i-dma.c 1235 */;
	struct platform_device *cocci_id/* drivers/dma/sun6i-dma.c 1233 */;
	const struct of_device_id cocci_id/* drivers/dma/sun6i-dma.c 1221 */[];
	struct sun6i_dma_config cocci_id/* drivers/dma/sun6i-dma.c 1159 */;
	struct sun6i_dma_config {
		u32 nr_max_channels;
		u32 nr_max_requests;
		u32 nr_max_vchans;
		void (*clock_autogate_enable)(struct sun6i_dma_dev *);
		void (*set_burst_length)(u32 *p_cfg, s8 src_burst,
					 s8 dst_burst);
		void (*set_drq)(u32 *p_cfg, s8 src_drq, s8 dst_drq);
		void (*set_mode)(u32 *p_cfg, s8 src_mode, s8 dst_mode);
		u32 src_burst_lengths;
		u32 dst_burst_lengths;
		u32 src_addr_widths;
		u32 dst_addr_widths;
		bool has_mbus_clk;
	} cocci_id/* drivers/dma/sun6i-dma.c 113 */;
	struct sun6i_dma_dev cocci_id/* drivers/dma/sun6i-dma.c 104 */;
	u8 cocci_id/* drivers/dma/sun6i-dma.c 1011 */;
	struct of_dma *cocci_id/* drivers/dma/sun6i-dma.c 1006 */;
	struct of_phandle_args *cocci_id/* drivers/dma/sun6i-dma.c 1005 */;
}
