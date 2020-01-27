cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/rtc/rtc-s3c.c 820 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-s3c.c 799 */[];
	const struct s3c_rtc_data cocci_id/* drivers/rtc/rtc-s3c.c 752 */;
	struct seq_file *cocci_id/* drivers/rtc/rtc-s3c.c 695 */;
	unsigned int cocci_id/* drivers/rtc/rtc-s3c.c 641 */;
	struct s3c_rtc *cocci_id/* drivers/rtc/rtc-s3c.c 639 */;
	int cocci_id/* drivers/rtc/rtc-s3c.c 639 */;
	void cocci_id/* drivers/rtc/rtc-s3c.c 639 */;
	struct s3c_rtc_data {
		int max_user_freq;
		bool needs_src_clk;
		void (*irq_handler)(struct s3c_rtc *info, int mask);
		void (*set_freq)(struct s3c_rtc *info, int freq);
		void (*enable_tick)(struct s3c_rtc *info,
				    struct seq_file *seq);
		void (*select_tick_clk)(struct s3c_rtc *info);
		void (*save_tick_cnt)(struct s3c_rtc *info);
		void (*restore_tick_cnt)(struct s3c_rtc *info);
		void (*enable)(struct s3c_rtc *info);
		void (*disable)(struct s3c_rtc *info);
	} cocci_id/* drivers/rtc/rtc-s3c.c 55 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-s3c.c 446 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-s3c.c 443 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-s3c.c 368 */;
	struct s3c_rtc {
		struct device *dev;
		struct rtc_device *rtc;
		void __iomem *base;
		struct clk *rtc_clk;
		struct clk *rtc_src_clk;
		bool alarm_enabled;
		const struct s3c_rtc_data *data;
		int irq_alarm;
		int irq_tick;
		spinlock_t pie_lock;
		spinlock_t alarm_lock;
		int ticnt_save;
		int ticnt_en_save;
		bool wake_en;
	} cocci_id/* drivers/rtc/rtc-s3c.c 33 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-s3c.c 252 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-s3c.c 249 */;
	struct device *cocci_id/* drivers/rtc/rtc-s3c.c 249 */;
	unsigned long cocci_id/* drivers/rtc/rtc-s3c.c 119 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-s3c.c 105 */;
	void *cocci_id/* drivers/rtc/rtc-s3c.c 105 */;
}
