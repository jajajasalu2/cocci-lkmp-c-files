cocci_test_suite() {
	const struct sh_cmt_info *cocci_id/* drivers/clocksource/sh_cmt.c 979 */;
	const struct platform_device_id *cocci_id/* drivers/clocksource/sh_cmt.c 977 */;
	struct sh_timer_config *cocci_id/* drivers/clocksource/sh_cmt.c 976 */;
	unsigned int cocci_id/* drivers/clocksource/sh_cmt.c 965 */;
	const struct of_device_id cocci_id/* drivers/clocksource/sh_cmt.c 924 */[]__maybe_unused;
	const struct platform_device_id cocci_id/* drivers/clocksource/sh_cmt.c 917 */[];
	struct resource *cocci_id/* drivers/clocksource/sh_cmt.c 900 */;
	struct sh_cmt_channel {
		struct sh_cmt_device *cmt;
		unsigned int index;
		unsigned int hwidx;
		void __iomem *iostart;
		void __iomem *ioctrl;
		unsigned int timer_bit;
		unsigned long flags;
		u32 match_value;
		u32 next_match_value;
		u32 max_match_value;
		raw_spinlock_t lock;
		struct clock_event_device ced;
		struct clocksource cs;
		u64 total_cycles;
		bool cs_enabled;
	} cocci_id/* drivers/clocksource/sh_cmt.c 90 */;
	struct sh_cmt_device *cocci_id/* drivers/clocksource/sh_cmt.c 898 */;
	bool cocci_id/* drivers/clocksource/sh_cmt.c 823 */;
	const char *cocci_id/* drivers/clocksource/sh_cmt.c 822 */;
	int cocci_id/* drivers/clocksource/sh_cmt.c 745 */;
	struct sh_cmt_info {
		enum sh_cmt_model model;
		unsigned int channels_mask;
		unsigned long width;
		u32 overflow_bit;
		u32 clear_bits;
		u32 (*read_control)(void __iomem *base, unsigned long offs);
		void (*write_control)(void __iomem *base, unsigned long offs,
				      u32 value);
		u32 (*read_count)(void __iomem *base, unsigned long offs);
		void (*write_count)(void __iomem *base, unsigned long offs,
				    u32 value);
	} cocci_id/* drivers/clocksource/sh_cmt.c 71 */;
	struct sh_cmt_channel cocci_id/* drivers/clocksource/sh_cmt.c 699 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/sh_cmt.c 697 */;
	enum sh_cmt_model{SH_CMT_16BIT, SH_CMT_32BIT, SH_CMT_48BIT, SH_CMT0_RCAR_GEN2, SH_CMT1_RCAR_GEN2,} cocci_id/* drivers/clocksource/sh_cmt.c 63 */;
	u64 cocci_id/* drivers/clocksource/sh_cmt.c 608 */;
	struct clocksource *cocci_id/* drivers/clocksource/sh_cmt.c 603 */;
	irqreturn_t cocci_id/* drivers/clocksource/sh_cmt.c 512 */;
	void *cocci_id/* drivers/clocksource/sh_cmt.c 512 */;
	struct sh_cmt_channel *cocci_id/* drivers/clocksource/sh_cmt.c 493 */;
	unsigned long cocci_id/* drivers/clocksource/sh_cmt.c 493 */;
	void cocci_id/* drivers/clocksource/sh_cmt.c 493 */;
	u32 cocci_id/* drivers/clocksource/sh_cmt.c 410 */;
	struct sh_cmt_device cocci_id/* drivers/clocksource/sh_cmt.c 32 */;
	u32 *cocci_id/* drivers/clocksource/sh_cmt.c 279 */;
	const struct sh_cmt_info cocci_id/* drivers/clocksource/sh_cmt.c 178 */[];
	void __iomem *cocci_id/* drivers/clocksource/sh_cmt.c 158 */;
	void __exit cocci_id/* drivers/clocksource/sh_cmt.c 1111 */;
	struct sh_cmt_device {
		struct platform_device *pdev;
		const struct sh_cmt_info *info;
		void __iomem *mapbase;
		struct clk *clk;
		unsigned long rate;
		raw_spinlock_t lock;
		struct sh_cmt_channel *channels;
		unsigned int num_channels;
		unsigned int hw_channels;
		bool has_clockevent;
		bool has_clocksource;
	} cocci_id/* drivers/clocksource/sh_cmt.c 111 */;
	int __init cocci_id/* drivers/clocksource/sh_cmt.c 1106 */;
	struct platform_driver cocci_id/* drivers/clocksource/sh_cmt.c 1096 */;
	struct platform_device *cocci_id/* drivers/clocksource/sh_cmt.c 1054 */;
}
