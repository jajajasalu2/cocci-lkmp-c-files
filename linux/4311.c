cocci_test_suite() {
	void **cocci_id/* drivers/platform/x86/dell_rbu.c 99 */;
	unsigned int cocci_id/* drivers/platform/x86/dell_rbu.c 98 */;
	struct packet_data *cocci_id/* drivers/platform/x86/dell_rbu.c 95 */;
	size_t cocci_id/* drivers/platform/x86/dell_rbu.c 93 */;
	int cocci_id/* drivers/platform/x86/dell_rbu.c 82 */;
	struct platform_device *cocci_id/* drivers/platform/x86/dell_rbu.c 81 */;
	struct packet_data {
		struct list_head list;
		size_t length;
		void *data;
		int ordernum;
	} cocci_id/* drivers/platform/x86/dell_rbu.c 72 */;
	int __init cocci_id/* drivers/platform/x86/dell_rbu.c 673 */;
	unsigned long cocci_id/* drivers/platform/x86/dell_rbu.c 67 */;
	struct bin_attribute cocci_id/* drivers/platform/x86/dell_rbu.c 656 */;
	char cocci_id/* drivers/platform/x86/dell_rbu.c 62 */[MAX_IMAGE_LENGTH + 1];
	const struct firmware *cocci_id/* drivers/platform/x86/dell_rbu.c 522 */;
	void *cocci_id/* drivers/platform/x86/dell_rbu.c 522 */;
	void cocci_id/* drivers/platform/x86/dell_rbu.c 522 */;
	struct bin_attribute *cocci_id/* drivers/platform/x86/dell_rbu.c 504 */;
	struct kobject *cocci_id/* drivers/platform/x86/dell_rbu.c 503 */;
	struct file *cocci_id/* drivers/platform/x86/dell_rbu.c 503 */;
	struct _rbu_data {
		void *image_update_buffer;
		unsigned long image_update_buffer_size;
		unsigned long bios_image_size;
		int image_update_ordernum;
		spinlock_t lock;
		unsigned long packet_read_count;
		unsigned long num_packets;
		unsigned long packetsize;
		unsigned long imagesize;
		int entry_created;
	} cocci_id/* drivers/platform/x86/dell_rbu.c 49 */;
	loff_t cocci_id/* drivers/platform/x86/dell_rbu.c 449 */;
	ssize_t cocci_id/* drivers/platform/x86/dell_rbu.c 449 */;
	size_t *cocci_id/* drivers/platform/x86/dell_rbu.c 292 */;
	u8 *cocci_id/* drivers/platform/x86/dell_rbu.c 273 */;
	int *cocci_id/* drivers/platform/x86/dell_rbu.c 259 */;
	struct list_head *cocci_id/* drivers/platform/x86/dell_rbu.c 258 */;
	char *cocci_id/* drivers/platform/x86/dell_rbu.c 258 */;
	const u8 *cocci_id/* drivers/platform/x86/dell_rbu.c 220 */;
	unsigned char *cocci_id/* drivers/platform/x86/dell_rbu.c 154 */;
	struct packet_data cocci_id/* drivers/platform/x86/dell_rbu.c 113 */;
}
