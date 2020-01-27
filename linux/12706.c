cocci_test_suite() {
	struct address_handler_resource {
		struct client_resource resource;
		struct fw_address_handler handler;
		__u64 closure;
		struct client *client;
	} cocci_id/* drivers/firewire/core-cdev.c 97 */;
	fw_iso_callback_t cocci_id/* drivers/firewire/core-cdev.c 960 */;
	struct fw_iso_context *cocci_id/* drivers/firewire/core-cdev.c 959 */;
	struct fw_cdev_create_iso_context *cocci_id/* drivers/firewire/core-cdev.c 958 */;
	enum dma_data_direction cocci_id/* drivers/firewire/core-cdev.c 948 */;
	struct iso_interrupt_mc_event *cocci_id/* drivers/firewire/core-cdev.c 934 */;
	dma_addr_t cocci_id/* drivers/firewire/core-cdev.c 931 */;
	struct client_resource {
		client_resource_release_fn_t release;
		int handle;
	} cocci_id/* drivers/firewire/core-cdev.c 92 */;
	struct iso_interrupt_event *cocci_id/* drivers/firewire/core-cdev.c 915 */;
	void (*cocci_id/* drivers/firewire/core-cdev.c 90 */)(struct client *,
							      struct client_resource *);
	struct client_resource cocci_id/* drivers/firewire/core-cdev.c 89 */;
	struct descriptor_resource *cocci_id/* drivers/firewire/core-cdev.c 862 */;
	struct fw_cdev_add_descriptor *cocci_id/* drivers/firewire/core-cdev.c 861 */;
	union ioctl_arg *cocci_id/* drivers/firewire/core-cdev.c 859 */;
	struct descriptor_resource cocci_id/* drivers/firewire/core-cdev.c 853 */;
	struct inbound_transaction_resource cocci_id/* drivers/firewire/core-cdev.c 819 */;
	struct fw_cdev_send_response *cocci_id/* drivers/firewire/core-cdev.c 810 */;
	struct client cocci_id/* drivers/firewire/core-cdev.c 78 */;
	struct fw_address_region cocci_id/* drivers/firewire/core-cdev.c 765 */;
	struct fw_cdev_allocate *cocci_id/* drivers/firewire/core-cdev.c 763 */;
	struct kref *cocci_id/* drivers/firewire/core-cdev.c 76 */;
	struct address_handler_resource cocci_id/* drivers/firewire/core-cdev.c 755 */;
	struct fw_cdev_event_request2 *cocci_id/* drivers/firewire/core-cdev.c 721 */;
	void cocci_id/* drivers/firewire/core-cdev.c 71 */;
	struct fw_cdev_event_request *cocci_id/* drivers/firewire/core-cdev.c 708 */;
	struct inbound_transaction_event *cocci_id/* drivers/firewire/core-cdev.c 672 */;
	struct inbound_transaction_resource *cocci_id/* drivers/firewire/core-cdev.c 671 */;
	struct address_handler_resource *cocci_id/* drivers/firewire/core-cdev.c 670 */;
	unsigned long long cocci_id/* drivers/firewire/core-cdev.c 667 */;
	struct fw_request *cocci_id/* drivers/firewire/core-cdev.c 665 */;
	struct fw_cdev_send_request *cocci_id/* drivers/firewire/core-cdev.c 576 */;
	typeof(*rsp) cocci_id/* drivers/firewire/core-cdev.c 564 */;
	struct fw_cdev_event_response *cocci_id/* drivers/firewire/core-cdev.c 539 */;
	struct outbound_transaction_event *cocci_id/* drivers/firewire/core-cdev.c 538 */;
	void *cocci_id/* drivers/firewire/core-cdev.c 536 */;
	size_t cocci_id/* drivers/firewire/core-cdev.c 536 */;
	struct fw_card *cocci_id/* drivers/firewire/core-cdev.c 535 */;
	struct client_resource **cocci_id/* drivers/firewire/core-cdev.c 504 */;
	client_resource_release_fn_t cocci_id/* drivers/firewire/core-cdev.c 503 */;
	unsigned long cocci_id/* drivers/firewire/core-cdev.c 477 */;
	bool cocci_id/* drivers/firewire/core-cdev.c 476 */;
	gfp_t cocci_id/* drivers/firewire/core-cdev.c 474 */;
	struct client_resource *cocci_id/* drivers/firewire/core-cdev.c 474 */;
	struct client *cocci_id/* drivers/firewire/core-cdev.c 473 */;
	int cocci_id/* drivers/firewire/core-cdev.c 473 */;
	struct client {
		u32 version;
		struct fw_device *device;
		spinlock_t lock;
		bool in_shutdown;
		struct idr resource_idr;
		struct list_head event_list;
		wait_queue_head_t wait;
		wait_queue_head_t tx_flush_wait;
		u64 bus_reset_closure;
		struct fw_iso_context *iso_context;
		u64 iso_closure;
		struct fw_iso_buffer buffer;
		unsigned long vm_start;
		bool buffer_is_mapped;
		struct list_head phy_receiver_link;
		u64 phy_receiver_closure;
		struct list_head link;
		struct kref kref;
	} cocci_id/* drivers/firewire/core-cdev.c 46 */;
	struct fw_cdev_event_bus_reset cocci_id/* drivers/firewire/core-cdev.c 434 */;
	struct fw_cdev_get_info *cocci_id/* drivers/firewire/core-cdev.c 433 */;
	union ioctl_arg {
		struct fw_cdev_get_info get_info;
		struct fw_cdev_send_request send_request;
		struct fw_cdev_allocate allocate;
		struct fw_cdev_deallocate deallocate;
		struct fw_cdev_send_response send_response;
		struct fw_cdev_initiate_bus_reset initiate_bus_reset;
		struct fw_cdev_add_descriptor add_descriptor;
		struct fw_cdev_remove_descriptor remove_descriptor;
		struct fw_cdev_create_iso_context create_iso_context;
		struct fw_cdev_queue_iso queue_iso;
		struct fw_cdev_start_iso start_iso;
		struct fw_cdev_stop_iso stop_iso;
		struct fw_cdev_get_cycle_timer get_cycle_timer;
		struct fw_cdev_allocate_iso_resource allocate_iso_resource;
		struct fw_cdev_send_stream_packet send_stream_packet;
		struct fw_cdev_get_cycle_timer2 get_cycle_timer2;
		struct fw_cdev_send_phy_packet send_phy_packet;
		struct fw_cdev_receive_phy_packets receive_phy_packets;
		struct fw_cdev_set_iso_channels set_iso_channels;
		struct fw_cdev_flush_iso flush_iso;
	} cocci_id/* drivers/firewire/core-cdev.c 408 */;
	struct bus_reset_event *cocci_id/* drivers/firewire/core-cdev.c 377 */;
	void (*cocci_id/* drivers/firewire/core-cdev.c 358 */)(struct client *client);
	struct fw_device *cocci_id/* drivers/firewire/core-cdev.c 357 */;
	struct fw_cdev_event_bus_reset *cocci_id/* drivers/firewire/core-cdev.c 338 */;
	loff_t *cocci_id/* drivers/firewire/core-cdev.c 331 */;
	ssize_t cocci_id/* drivers/firewire/core-cdev.c 330 */;
	struct event cocci_id/* drivers/firewire/core-cdev.c 309 */;
	struct event *cocci_id/* drivers/firewire/core-cdev.c 294 */;
	char __user *cocci_id/* drivers/firewire/core-cdev.c 292 */;
	struct inode *cocci_id/* drivers/firewire/core-cdev.c 236 */;
	u64 cocci_id/* drivers/firewire/core-cdev.c 209 */;
	struct inbound_phy_packet_event {
		struct event event;
		struct fw_cdev_event_phy_packet phy_packet;
	} cocci_id/* drivers/firewire/core-cdev.c 203 */;
	struct outbound_phy_packet_event {
		struct event event;
		struct client *client;
		struct fw_packet p;
		struct fw_cdev_event_phy_packet phy_packet;
	} cocci_id/* drivers/firewire/core-cdev.c 196 */;
	struct iso_resource_event {
		struct event event;
		struct fw_cdev_event_iso_resource iso_resource;
	} cocci_id/* drivers/firewire/core-cdev.c 191 */;
	struct iso_interrupt_mc_event {
		struct event event;
		struct fw_cdev_event_iso_interrupt_mc interrupt;
	} cocci_id/* drivers/firewire/core-cdev.c 186 */;
	struct iso_interrupt_event {
		struct event event;
		struct fw_cdev_event_iso_interrupt interrupt;
	} cocci_id/* drivers/firewire/core-cdev.c 181 */;
	const struct file_operations cocci_id/* drivers/firewire/core-cdev.c 1782 */;
	__poll_t cocci_id/* drivers/firewire/core-cdev.c 1767 */;
	poll_table *cocci_id/* drivers/firewire/core-cdev.c 1767 */;
	struct inbound_transaction_event {
		struct event event;
		union {
			struct fw_cdev_event_request request;
			struct fw_cdev_event_request2 request2;
		} req;
	} cocci_id/* drivers/firewire/core-cdev.c 173 */;
	struct outbound_transaction_event {
		struct event event;
		struct client *client;
		struct outbound_transaction_resource r;
		struct fw_cdev_event_response response;
	} cocci_id/* drivers/firewire/core-cdev.c 166 */;
	struct vm_area_struct *cocci_id/* drivers/firewire/core-cdev.c 1649 */;
	struct file *cocci_id/* drivers/firewire/core-cdev.c 1643 */;
	long cocci_id/* drivers/firewire/core-cdev.c 1643 */;
	union ioctl_arg cocci_id/* drivers/firewire/core-cdev.c 1615 */;
	void __user *cocci_id/* drivers/firewire/core-cdev.c 1613 */;
	unsigned int cocci_id/* drivers/firewire/core-cdev.c 1613 */;
	struct bus_reset_event {
		struct event event;
		struct fw_cdev_event_bus_reset reset;
	} cocci_id/* drivers/firewire/core-cdev.c 161 */;
	int (*cocci_id/* drivers/firewire/core-cdev.c 1584 */[])(struct client *,
								 union ioctl_arg *);
	struct inbound_phy_packet_event *cocci_id/* drivers/firewire/core-cdev.c 1561 */;
	struct event {
		struct {
			void *data;
			size_t size;
		} v[2];
		struct list_head link;
	} cocci_id/* drivers/firewire/core-cdev.c 156 */;
	struct fw_packet *cocci_id/* drivers/firewire/core-cdev.c 1558 */;
	struct fw_cdev_receive_phy_packets *cocci_id/* drivers/firewire/core-cdev.c 1541 */;
	struct outbound_phy_packet_event *cocci_id/* drivers/firewire/core-cdev.c 1510 */;
	struct fw_cdev_send_phy_packet *cocci_id/* drivers/firewire/core-cdev.c 1508 */;
	struct outbound_phy_packet_event cocci_id/* drivers/firewire/core-cdev.c 1484 */;
	struct fw_cdev_send_request cocci_id/* drivers/firewire/core-cdev.c 1460 */;
	struct fw_cdev_send_stream_packet *cocci_id/* drivers/firewire/core-cdev.c 1459 */;
	void cocci_id/* drivers/firewire/core-cdev.c 136 */(struct client *,
							    struct client_resource *);
	struct iso_resource *cocci_id/* drivers/firewire/core-cdev.c 1349 */;
	struct iso_resource_event *cocci_id/* drivers/firewire/core-cdev.c 1348 */;
	struct fw_cdev_allocate_iso_resource *cocci_id/* drivers/firewire/core-cdev.c 1346 */;
	struct iso_resource cocci_id/* drivers/firewire/core-cdev.c 1238 */;
	struct work_struct *cocci_id/* drivers/firewire/core-cdev.c 1234 */;
	struct iso_resource {
		struct client_resource resource;
		struct client *client;
		struct delayed_work work;
		enum{ISO_RES_ALLOC, ISO_RES_REALLOC, ISO_RES_DEALLOC, ISO_RES_ALLOC_ONCE, ISO_RES_DEALLOC_ONCE,} todo;
		int generation;
		u64 channels;
		s32 bandwidth;
		struct iso_resource_event *e_alloc,*e_dealloc;
	} cocci_id/* drivers/firewire/core-cdev.c 123 */;
	struct fw_cdev_get_cycle_timer2 cocci_id/* drivers/firewire/core-cdev.c 1223 */;
	struct fw_cdev_get_cycle_timer *cocci_id/* drivers/firewire/core-cdev.c 1222 */;
	u32 cocci_id/* drivers/firewire/core-cdev.c 1196 */;
	struct timespec64 cocci_id/* drivers/firewire/core-cdev.c 1195 */;
	struct fw_cdev_get_cycle_timer2 *cocci_id/* drivers/firewire/core-cdev.c 1193 */;
	struct fw_cdev_flush_iso *cocci_id/* drivers/firewire/core-cdev.c 1183 */;
	struct fw_cdev_stop_iso *cocci_id/* drivers/firewire/core-cdev.c 1173 */;
	struct descriptor_resource {
		struct client_resource resource;
		struct fw_descriptor descriptor;
		u32 data[0];
	} cocci_id/* drivers/firewire/core-cdev.c 117 */;
	struct fw_cdev_start_iso *cocci_id/* drivers/firewire/core-cdev.c 1151 */;
	struct inbound_transaction_resource {
		struct client_resource resource;
		struct fw_card *card;
		struct fw_request *request;
		void *data;
		size_t length;
	} cocci_id/* drivers/firewire/core-cdev.c 109 */;
	struct {
		struct fw_iso_packet packet;
		u8 header[256];
	} cocci_id/* drivers/firewire/core-cdev.c 1055 */;
	struct fw_cdev_iso_packet __user *cocci_id/* drivers/firewire/core-cdev.c 1050 */;
	struct fw_cdev_queue_iso *cocci_id/* drivers/firewire/core-cdev.c 1049 */;
	struct outbound_transaction_resource {
		struct client_resource resource;
		struct fw_transaction transaction;
	} cocci_id/* drivers/firewire/core-cdev.c 104 */;
	struct fw_cdev_set_iso_channels *cocci_id/* drivers/firewire/core-cdev.c 1030 */;
}
