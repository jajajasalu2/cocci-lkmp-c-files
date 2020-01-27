cocci_test_suite() {
	unsigned char *cocci_id/* drivers/memstick/host/tifm_ms.c 83 */;
	void __exit cocci_id/* drivers/memstick/host/tifm_ms.c 672 */;
	struct tifm_ms {
		struct tifm_dev *dev;
		struct timer_list timer;
		struct memstick_request *req;
		struct tasklet_struct notify;
		unsigned int mode_mask;
		unsigned int block_pos;
		unsigned long timeout_jiffies;
		unsigned char eject:1,use_dma:1;
		unsigned char cmd_flags;
		unsigned char io_pos;
		unsigned int io_word;
	} cocci_id/* drivers/memstick/host/tifm_ms.c 67 */;
	int __init cocci_id/* drivers/memstick/host/tifm_ms.c 667 */;
	struct tifm_driver cocci_id/* drivers/memstick/host/tifm_ms.c 655 */;
	struct tifm_device_id cocci_id/* drivers/memstick/host/tifm_ms.c 651 */[];
	pm_message_t cocci_id/* drivers/memstick/host/tifm_ms.c 628 */;
	enum{CMD_READY=0x01, FIFO_READY=0x02, CARD_INT=0x04,} cocci_id/* drivers/memstick/host/tifm_ms.c 61 */;
	unsigned long cocci_id/* drivers/memstick/host/tifm_ms.c 574 */;
	struct tifm_ms cocci_id/* drivers/memstick/host/tifm_ms.c 564 */;
	struct tifm_ms *cocci_id/* drivers/memstick/host/tifm_ms.c 538 */;
	struct timer_list *cocci_id/* drivers/memstick/host/tifm_ms.c 536 */;
	void cocci_id/* drivers/memstick/host/tifm_ms.c 536 */;
	enum memstick_param cocci_id/* drivers/memstick/host/tifm_ms.c 495 */;
	struct memstick_host *cocci_id/* drivers/memstick/host/tifm_ms.c 424 */;
	int cocci_id/* drivers/memstick/host/tifm_ms.c 421 */;
	unsigned int cocci_id/* drivers/memstick/host/tifm_ms.c 420 */;
	struct tifm_dev *cocci_id/* drivers/memstick/host/tifm_ms.c 417 */;
	bool cocci_id/* drivers/memstick/host/tifm_ms.c 21 */;
	struct page *cocci_id/* drivers/memstick/host/tifm_ms.c 187 */;
	unsigned int *cocci_id/* drivers/memstick/host/tifm_ms.c 101 */;
}
