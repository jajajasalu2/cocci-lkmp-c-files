cocci_test_suite() {
	unsigned cocci_id/* arch/arm/plat-samsung/adc.c 85 */;
	struct adc_device *cocci_id/* arch/arm/plat-samsung/adc.c 77 */;
	struct adc_device {
		struct platform_device *pdev;
		struct platform_device *owner;
		struct clk *clk;
		struct s3c_adc_client *cur;
		struct s3c_adc_client *ts_pend;
		void __iomem *regs;
		spinlock_t lock;
		unsigned int prescale;
		int irq;
		struct regulator *vdd;
	} cocci_id/* arch/arm/plat-samsung/adc.c 62 */;
	int cocci_id/* arch/arm/plat-samsung/adc.c 505 */;
	int __init cocci_id/* arch/arm/plat-samsung/adc.c 503 */;
	void cocci_id/* arch/arm/plat-samsung/adc.c 503 */;
	struct platform_driver cocci_id/* arch/arm/plat-samsung/adc.c 493 */;
	const struct dev_pm_ops cocci_id/* arch/arm/plat-samsung/adc.c 488 */;
	const struct platform_device_id cocci_id/* arch/arm/plat-samsung/adc.c 467 */[];
	struct s3c_adc_client {
		struct platform_device *pdev;
		struct list_head pend;
		wait_queue_head_t *wait;
		unsigned int nr_samples;
		int result;
		unsigned char is_ts;
		unsigned char channel;
		void (*select_cb)(struct s3c_adc_client *c, unsigned selected);
		void (*convert_cb)(struct s3c_adc_client *c, unsigned val1,
				   unsigned val2, unsigned *samples_left);
	} cocci_id/* arch/arm/plat-samsung/adc.c 46 */;
	u32 cocci_id/* arch/arm/plat-samsung/adc.c 419 */;
	enum s3c_cpu_type{TYPE_ADCV1, TYPE_ADCV11, TYPE_ADCV12, TYPE_ADCV2, TYPE_ADCV3,} cocci_id/* arch/arm/plat-samsung/adc.c 38 */;
	struct resource *cocci_id/* arch/arm/plat-samsung/adc.c 336 */;
	struct device *cocci_id/* arch/arm/plat-samsung/adc.c 334 */;
	struct platform_device *cocci_id/* arch/arm/plat-samsung/adc.c 332 */;
	enum s3c_cpu_type cocci_id/* arch/arm/plat-samsung/adc.c 284 */;
	irqreturn_t cocci_id/* arch/arm/plat-samsung/adc.c 280 */;
	void *cocci_id/* arch/arm/plat-samsung/adc.c 280 */;
	struct s3c_adc_client cocci_id/* arch/arm/plat-samsung/adc.c 266 */;
	struct list_head *cocci_id/* arch/arm/plat-samsung/adc.c 262 */;
	unsigned long cocci_id/* arch/arm/plat-samsung/adc.c 252 */;
	void (*cocci_id/* arch/arm/plat-samsung/adc.c 222 */)(struct s3c_adc_client *client,
							      unsigned d0,
							      unsigned d1,
							      unsigned *samples_left);
	void (*cocci_id/* arch/arm/plat-samsung/adc.c 220 */)(struct s3c_adc_client *client,
							      unsigned int selected);
	struct s3c_adc_client *cocci_id/* arch/arm/plat-samsung/adc.c 214 */;
	unsigned int cocci_id/* arch/arm/plat-samsung/adc.c 187 */;
	unsigned *cocci_id/* arch/arm/plat-samsung/adc.c 181 */;
}
