cocci_test_suite() {
	unsigned long cocci_id/* drivers/mfd/ezx-pcap.c 95 */;
	u8 cocci_id/* drivers/mfd/ezx-pcap.c 93 */;
	u8 *cocci_id/* drivers/mfd/ezx-pcap.c 67 */;
	u32 cocci_id/* drivers/mfd/ezx-pcap.c 63 */;
	struct spi_message cocci_id/* drivers/mfd/ezx-pcap.c 58 */;
	struct spi_transfer cocci_id/* drivers/mfd/ezx-pcap.c 57 */;
	u32 *cocci_id/* drivers/mfd/ezx-pcap.c 55 */;
	void __exit cocci_id/* drivers/mfd/ezx-pcap.c 527 */;
	void cocci_id/* drivers/mfd/ezx-pcap.c 527 */;
	int __init cocci_id/* drivers/mfd/ezx-pcap.c 522 */;
	struct spi_driver cocci_id/* drivers/mfd/ezx-pcap.c 514 */;
	struct pcap_chip *cocci_id/* drivers/mfd/ezx-pcap.c 422 */;
	struct pcap_platform_data *cocci_id/* drivers/mfd/ezx-pcap.c 421 */;
	struct spi_device *cocci_id/* drivers/mfd/ezx-pcap.c 419 */;
	int cocci_id/* drivers/mfd/ezx-pcap.c 419 */;
	struct platform_device *cocci_id/* drivers/mfd/ezx-pcap.c 378 */;
	struct pcap_subdev *cocci_id/* drivers/mfd/ezx-pcap.c 376 */;
	struct device *cocci_id/* drivers/mfd/ezx-pcap.c 369 */;
	struct pcap_adc_sync_request cocci_id/* drivers/mfd/ezx-pcap.c 352 */;
	u16 cocci_id/* drivers/mfd/ezx-pcap.c 350 */[];
	struct pcap_adc_sync_request *cocci_id/* drivers/mfd/ezx-pcap.c 342 */;
	struct pcap_chip {
		struct spi_device *spi;
		u32 buf;
		spinlock_t io_lock;
		unsigned int irq_base;
		u32 msr;
		struct work_struct isr_work;
		struct work_struct msr_work;
		struct workqueue_struct *workqueue;
		struct pcap_adc_request *adc_queue[PCAP_ADC_MAXQ];
		u8 adc_head;
		u8 adc_tail;
		spinlock_t adc_lock;
	} cocci_id/* drivers/mfd/ezx-pcap.c 33 */;
	struct pcap_adc_request cocci_id/* drivers/mfd/ezx-pcap.c 312 */;
	struct pcap_adc_request *cocci_id/* drivers/mfd/ezx-pcap.c 308 */;
	void *cocci_id/* drivers/mfd/ezx-pcap.c 306 */;
	u8 cocci_id/* drivers/mfd/ezx-pcap.c 305 */[];
	struct pcap_adc_sync_request {
		u16 res[2];
		struct completion completion;
	} cocci_id/* drivers/mfd/ezx-pcap.c 28 */;
	u16 cocci_id/* drivers/mfd/ezx-pcap.c 270 */[2];
	irqreturn_t cocci_id/* drivers/mfd/ezx-pcap.c 266 */;
	struct irq_desc *cocci_id/* drivers/mfd/ezx-pcap.c 207 */;
	struct pcap_adc_request {
		u8 bank;
		u8 ch[2];
		u32 flags;
		void (*callback)(void *, u16[]);
		void *data;
	} cocci_id/* drivers/mfd/ezx-pcap.c 20 */;
	struct pcap_chip cocci_id/* drivers/mfd/ezx-pcap.c 178 */;
	struct work_struct *cocci_id/* drivers/mfd/ezx-pcap.c 176 */;
	struct irq_chip cocci_id/* drivers/mfd/ezx-pcap.c 162 */;
	struct irq_data *cocci_id/* drivers/mfd/ezx-pcap.c 146 */;
}
