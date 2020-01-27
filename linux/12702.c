cocci_test_suite() {
	struct pcilynx cocci_id/* drivers/firewire/nosy.c 95 */;
	struct kref *cocci_id/* drivers/firewire/nosy.c 93 */;
	struct pci_driver cocci_id/* drivers/firewire/nosy.c 696 */;
	struct pci_device_id cocci_id/* drivers/firewire/nosy.c 684 */[];
	struct pcilynx {
		struct pci_dev *pci_device;
	__iomem
		char *registers;
		struct pcl *rcv_start_pcl,*rcv_pcl;
		__le32 *rcv_buffer;
		dma_addr_t rcv_start_pcl_bus,rcv_pcl_bus,rcv_buffer_bus;
		spinlock_t client_list_lock;
		struct list_head client_list;
		struct miscdevice misc;
		struct list_head link;
		struct kref kref;
	} cocci_id/* drivers/firewire/nosy.c 67 */;
	struct packet_buffer {
		char *data;
		size_t capacity;
		long total_packet_count,lost_packet_count;
		atomic_t size;
		struct packet *head,*tail;
		wait_queue_head_t wait;
	} cocci_id/* drivers/firewire/nosy.c 58 */;
	struct pcl cocci_id/* drivers/firewire/nosy.c 563 */;
	struct packet {
		unsigned int length;
		char data[0];
	} cocci_id/* drivers/firewire/nosy.c 53 */;
	u32 cocci_id/* drivers/firewire/nosy.c 527 */;
	struct pcilynx *cocci_id/* drivers/firewire/nosy.c 526 */;
	const struct pci_device_id *cocci_id/* drivers/firewire/nosy.c 524 */;
	struct pci_dev *cocci_id/* drivers/firewire/nosy.c 524 */;
	int cocci_id/* drivers/firewire/nosy.c 523 */;
	void *cocci_id/* drivers/firewire/nosy.c 451 */;
	irqreturn_t cocci_id/* drivers/firewire/nosy.c 450 */;
	struct timespec64 cocci_id/* drivers/firewire/nosy.c 436 */;
	struct client *cocci_id/* drivers/firewire/nosy.c 435 */;
	void cocci_id/* drivers/firewire/nosy.c 432 */;
	__le32 cocci_id/* drivers/firewire/nosy.c 415 */;
	struct pcl {
		__le32 next;
		__le32 async_error_next;
		u32 user_data;
		__le32 pcl_status;
		__le32 remaining_transfer_count;
		__le32 next_data_buffer;
		struct {
			__le32 control;
			__le32 pointer;
		} buffer[13];
	} cocci_id/* drivers/firewire/nosy.c 40 */;
	const struct file_operations cocci_id/* drivers/firewire/nosy.c 389 */;
	char cocci_id/* drivers/firewire/nosy.c 37 */[];
	void __user *cocci_id/* drivers/firewire/nosy.c 357 */;
	struct nosy_stats cocci_id/* drivers/firewire/nosy.c 348 */;
	spinlock_t *cocci_id/* drivers/firewire/nosy.c 347 */;
	struct file *cocci_id/* drivers/firewire/nosy.c 344 */;
	unsigned long cocci_id/* drivers/firewire/nosy.c 344 */;
	unsigned int cocci_id/* drivers/firewire/nosy.c 344 */;
	long cocci_id/* drivers/firewire/nosy.c 343 */;
	loff_t *cocci_id/* drivers/firewire/nosy.c 336 */;
	char __user *cocci_id/* drivers/firewire/nosy.c 336 */;
	size_t cocci_id/* drivers/firewire/nosy.c 336 */;
	ssize_t cocci_id/* drivers/firewire/nosy.c 335 */;
	poll_table *cocci_id/* drivers/firewire/nosy.c 319 */;
	__poll_t cocci_id/* drivers/firewire/nosy.c 318 */;
	struct inode *cocci_id/* drivers/firewire/nosy.c 264 */;
	dma_addr_t cocci_id/* drivers/firewire/nosy.c 236 */;
	struct packet cocci_id/* drivers/firewire/nosy.c 175 */;
	struct packet *cocci_id/* drivers/firewire/nosy.c 159 */;
	char *cocci_id/* drivers/firewire/nosy.c 141 */;
	struct packet_buffer *cocci_id/* drivers/firewire/nosy.c 131 */;
	struct client {
		struct pcilynx *lynx;
		u32 tcode_mask;
		struct packet_buffer buffer;
		struct list_head link;
	} cocci_id/* drivers/firewire/nosy.c 104 */;
}
