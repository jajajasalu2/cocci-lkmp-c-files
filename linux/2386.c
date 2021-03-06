cocci_test_suite() {
	struct device *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 968 */;
	int __maybe_unused cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 968 */;
	struct zynqmp_dma_device *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 941 */;
	struct of_dma *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 939 */;
	struct of_phandle_args *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 938 */;
	struct dma_chan *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 938 */;
	struct zynqmp_dma_desc_ll cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 926 */;
	ulong cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 906 */;
	struct device_node *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 875 */;
	struct resource *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 874 */;
	struct platform_device *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 871 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 800 */;
	unsigned long cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 780 */;
	irqreturn_t cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 703 */;
	void *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 603 */;
	dma_async_tx_callback cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 602 */;
	void cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 597 */;
	struct dma_slave_config *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 559 */;
	u32 cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 537 */;
	struct zynqmp_dma_desc_ll *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 497 */;
	struct zynqmp_dma_desc_sw *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 465 */;
	struct zynqmp_dma_chan *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 464 */;
	int cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 462 */;
	struct list_head *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 448 */;
	dma_cookie_t cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 369 */;
	uintptr_t cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 321 */;
	dma_addr_t cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 304 */;
	size_t cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 304 */;
	u64 cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 257 */;
	struct zynqmp_dma_device {
		struct device *dev;
		struct dma_device common;
		struct zynqmp_dma_chan *chan;
		struct clk *clk_main;
		struct clk *clk_apb;
	} cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 248 */;
	struct zynqmp_dma_chan {
		struct zynqmp_dma_device *zdev;
		void __iomem *regs;
		spinlock_t lock;
		struct list_head pending_list;
		struct list_head free_list;
		struct list_head active_list;
		struct zynqmp_dma_desc_sw *sw_desc_pool;
		struct list_head done_list;
		struct dma_chan common;
		void *desc_pool_v;
		dma_addr_t desc_pool_p;
		u32 desc_free_cnt;
		struct device *dev;
		int irq;
		bool is_dmacoherent;
		struct tasklet_struct tasklet;
		bool idle;
		u32 desc_size;
		bool err;
		u32 bus_width;
		u32 src_burst_len;
		u32 dst_burst_len;
	} cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 215 */;
	struct zynqmp_dma_desc_sw {
		u64 src;
		u64 dst;
		u32 len;
		struct list_head node;
		struct list_head tx_list;
		struct dma_async_tx_descriptor async_tx;
		struct zynqmp_dma_desc_ll *src_v;
		dma_addr_t src_p;
		struct zynqmp_dma_desc_ll *dst_v;
		dma_addr_t dst_p;
	} cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 177 */;
	struct zynqmp_dma_desc_ll {
		u64 addr;
		u32 size;
		u32 ctrl;
		u64 nxtdscraddr;
		u64 rsvd;
	} cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 156 */;
	struct zynqmp_dma_desc_sw cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 145 */;
	struct zynqmp_dma_chan cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 143 */;
	struct platform_driver cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 1144 */;
	const struct of_device_id cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 1138 */[];
	struct dma_device *cocci_id/* drivers/dma/xilinx/zynqmp_dma.c 1036 */;
}
