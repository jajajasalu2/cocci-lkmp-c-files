cocci_test_suite() {
	struct dim2_hdm {
		struct device dev;
		struct hdm_channel hch[DMA_CHANNELS];
		struct most_channel_capability capabilities[DMA_CHANNELS];
		struct most_interface most_iface;
		char name[16 + sizeof "dim2-"];
		void __iomem *io_base;
		u8 clk_speed;
		struct clk *clk;
		struct clk *clk_pll;
		struct task_struct *netinfo_task;
		wait_queue_head_t netinfo_waitq;
		int deliver_netinfo;
		unsigned char mac_addrs[6];
		unsigned char link_state;
		int atx_idx;
		struct medialb_bus bus;
		void (*on_netinfo)(struct most_interface *most_iface,
				   unsigned char link_state,
				   unsigned char *addrs);
		void (*disable_platform)(struct platform_device *);
	} cocci_id/* drivers/staging/most/dim2/dim2.c 85 */;
	long cocci_id/* drivers/staging/most/dim2/dim2.c 838 */;
	long long cocci_id/* drivers/staging/most/dim2/dim2.c 836 */;
	struct hdm_channel *cocci_id/* drivers/staging/most/dim2/dim2.c 816 */;
	struct most_channel_capability *cocci_id/* drivers/staging/most/dim2/dim2.c 815 */;
	enum{MLB_INT_IDX, AHB0_INT_IDX,} cocci_id/* drivers/staging/most/dim2/dim2.c 735 */;
	struct resource *cocci_id/* drivers/staging/most/dim2/dim2.c 730 */;
	const char *cocci_id/* drivers/staging/most/dim2/dim2.c 728 */;
	const struct of_device_id *cocci_id/* drivers/staging/most/dim2/dim2.c 727 */;
	const struct dim2_platform_data *cocci_id/* drivers/staging/most/dim2/dim2.c 726 */;
	struct platform_device *cocci_id/* drivers/staging/most/dim2/dim2.c 724 */;
	u8 *cocci_id/* drivers/staging/most/dim2/dim2.c 704 */;
	struct {
		const char *clock_speed;
		u8 clk_speed;
	} cocci_id/* drivers/staging/most/dim2/dim2.c 681 */[];
	const struct of_device_id cocci_id/* drivers/staging/most/dim2/dim2.c 679 */[];
	struct device *cocci_id/* drivers/staging/most/dim2/dim2.c 667 */;
	u32 cocci_id/* drivers/staging/most/dim2/dim2.c 665 */;
	struct hdm_channel {
		char name[sizeof "caNNN"];
		bool is_initialized;
		struct dim_channel ch;
		u16 *reset_dbr_size;
		struct list_head pending_list;
		struct list_head started_list;
		enum most_channel_direction direction;
		enum most_channel_data_type data_type;
	} cocci_id/* drivers/staging/most/dim2/dim2.c 61 */;
	void (*cocci_id/* drivers/staging/most/dim2/dim2.c 590 */)(struct most_interface *,
								   unsigned char,
								   unsigned char *);
	void cocci_id/* drivers/staging/most/dim2/dim2.c 49 */(unsigned long data);
	struct hdm_channel *constcocci_id/* drivers/staging/most/dim2/dim2.c 450 */;
	const int cocci_id/* drivers/staging/most/dim2/dim2.c 449 */;
	u8 cocci_id/* drivers/staging/most/dim2/dim2.c 448 */;
	u16 cocci_id/* drivers/staging/most/dim2/dim2.c 446 */;
	const u16 cocci_id/* drivers/staging/most/dim2/dim2.c 444 */;
	const bool cocci_id/* drivers/staging/most/dim2/dim2.c 443 */;
	struct dim2_hdm *cocci_id/* drivers/staging/most/dim2/dim2.c 442 */;
	struct most_channel_config *cocci_id/* drivers/staging/most/dim2/dim2.c 440 */;
	struct most_interface *cocci_id/* drivers/staging/most/dim2/dim2.c 439 */;
	int cocci_id/* drivers/staging/most/dim2/dim2.c 439 */;
	struct mbo cocci_id/* drivers/staging/most/dim2/dim2.c 420 */;
	struct mbo *cocci_id/* drivers/staging/most/dim2/dim2.c 411 */;
	unsigned long cocci_id/* drivers/staging/most/dim2/dim2.c 410 */;
	struct list_head *cocci_id/* drivers/staging/most/dim2/dim2.c 408 */;
	void cocci_id/* drivers/staging/most/dim2/dim2.c 408 */;
	struct dim_channel *cocci_id/* drivers/staging/most/dim2/dim2.c 389 */[DMA_CHANNELS + 1];
	irqreturn_t cocci_id/* drivers/staging/most/dim2/dim2.c 386 */;
	struct dim_channel **cocci_id/* drivers/staging/most/dim2/dim2.c 321 */;
	const u32 cocci_id/* drivers/staging/most/dim2/dim2.c 304 */;
	struct dim_ch_state_t cocci_id/* drivers/staging/most/dim2/dim2.c 253 */;
	void *cocci_id/* drivers/staging/most/dim2/dim2.c 201 */;
	bool cocci_id/* drivers/staging/most/dim2/dim2.c 119 */;
	struct dim2_hdm cocci_id/* drivers/staging/most/dim2/dim2.c 112 */;
	struct platform_driver cocci_id/* drivers/staging/most/dim2/dim2.c 1076 */;
	struct dim2_platform_data {
		int (*enable)(struct platform_device *);
		void (*disable)(struct platform_device *);
	} cocci_id/* drivers/staging/most/dim2/dim2.c 107 */;
	struct dim2_platform_data cocci_id/* drivers/staging/most/dim2/dim2.c 1046 */[];
	enum dim2_platforms{FSL_MX6, RCAR_H2, RCAR_M3,} cocci_id/* drivers/staging/most/dim2/dim2.c 1044 */;
}
