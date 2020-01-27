cocci_test_suite() {
	const char *cocci_id/* drivers/usb/host/u132-hcd.c 94 */[16];
	struct workqueue_struct *cocci_id/* drivers/usb/host/u132-hcd.c 88 */;
	struct list_head cocci_id/* drivers/usb/host/u132-hcd.c 84 */;
	struct mutex cocci_id/* drivers/usb/host/u132-hcd.c 81 */;
	void *cocci_id/* drivers/usb/host/u132-hcd.c 769 */;
	bool cocci_id/* drivers/usb/host/u132-hcd.c 72 */;
	void (*cocci_id/* drivers/usb/host/u132-hcd.c 575 */)(void *endp,
							      struct urb *urb,
							      u8 *buf,
							      int len,
							      int toggle_bits,
							      int error_count,
							      int condition_code,
							      int repeat_number,
							      int halted,
							      int skipped,
							      int actual,
							      int non_null);
	u32 cocci_id/* drivers/usb/host/u132-hcd.c 423 */;
	unsigned int cocci_id/* drivers/usb/host/u132-hcd.c 386 */;
	struct list_head *cocci_id/* drivers/usb/host/u132-hcd.c 340 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/host/u132-hcd.c 338 */;
	struct kref *cocci_id/* drivers/usb/host/u132-hcd.c 329 */;
	void __exit cocci_id/* drivers/usb/host/u132-hcd.c 3214 */;
	int __init cocci_id/* drivers/usb/host/u132-hcd.c 3192 */;
	struct platform_driver cocci_id/* drivers/usb/host/u132-hcd.c 3183 */;
	pm_message_t cocci_id/* drivers/usb/host/u132-hcd.c 3118 */;
	struct u132_port *cocci_id/* drivers/usb/host/u132-hcd.c 3028 */;
	const struct hc_driver cocci_id/* drivers/usb/host/u132-hcd.c 2940 */;
	unsigned cocci_id/* drivers/usb/host/u132-hcd.c 2892 */;
	__le32 *cocci_id/* drivers/usb/host/u132-hcd.c 2858 */;
	struct usb_hub_descriptor *cocci_id/* drivers/usb/host/u132-hcd.c 2851 */;
	u16 *cocci_id/* drivers/usb/host/u132-hcd.c 2621 */;
	struct platform_device *cocci_id/* drivers/usb/host/u132-hcd.c 253 */;
	const char cocci_id/* drivers/usb/host/u132-hcd.c 246 */[];
	struct urb **cocci_id/* drivers/usb/host/u132-hcd.c 2447 */;
	u16 cocci_id/* drivers/usb/host/u132-hcd.c 2444 */;
	struct u132_udev cocci_id/* drivers/usb/host/u132-hcd.c 244 */;
	struct u132 cocci_id/* drivers/usb/host/u132-hcd.c 242 */;
	struct usb_hcd *cocci_id/* drivers/usb/host/u132-hcd.c 2392 */;
	struct u132_urbq *cocci_id/* drivers/usb/host/u132-hcd.c 2388 */;
	char cocci_id/* drivers/usb/host/u132-hcd.c 2338 */[30 * 3 + 4];
	struct usb_hcd cocci_id/* drivers/usb/host/u132-hcd.c 233 */;
	u8 *cocci_id/* drivers/usb/host/u132-hcd.c 2180 */;
	struct u132_addr *cocci_id/* drivers/usb/host/u132-hcd.c 2160 */;
	struct ohci_regs cocci_id/* drivers/usb/host/u132-hcd.c 211 */;
	struct u132_urbq cocci_id/* drivers/usb/host/u132-hcd.c 2032 */;
	struct u132_endp cocci_id/* drivers/usb/host/u132-hcd.c 1958 */;
	struct u132_endp *cocci_id/* drivers/usb/host/u132-hcd.c 1958 */;
	unsigned long cocci_id/* drivers/usb/host/u132-hcd.c 1955 */;
	struct u132_ring *cocci_id/* drivers/usb/host/u132-hcd.c 1954 */;
	gfp_t cocci_id/* drivers/usb/host/u132-hcd.c 1951 */;
	u8 cocci_id/* drivers/usb/host/u132-hcd.c 1950 */;
	struct usb_device *cocci_id/* drivers/usb/host/u132-hcd.c 1950 */;
	struct urb *cocci_id/* drivers/usb/host/u132-hcd.c 1949 */;
	struct u132_udev *cocci_id/* drivers/usb/host/u132-hcd.c 1949 */;
	struct u132 *cocci_id/* drivers/usb/host/u132-hcd.c 1948 */;
	int cocci_id/* drivers/usb/host/u132-hcd.c 1948 */;
	struct u132_platform_data *cocci_id/* drivers/usb/host/u132-hcd.c 1800 */;
	struct u132 {
		struct kref kref;
		struct list_head u132_list;
		struct mutex sw_lock;
		struct mutex scheduler_lock;
		struct u132_platform_data *board;
		struct platform_device *platform_dev;
		struct u132_ring ring[MAX_U132_RINGS];
		int sequence_num;
		int going;
		int power;
		int reset;
		int num_ports;
		u32 hc_control;
		u32 hc_fminterval;
		u32 hc_roothub_status;
		u32 hc_roothub_a;
		u32 hc_roothub_portstatus[MAX_ROOT_PORTS];
		int flags;
		unsigned long next_statechange;
		struct delayed_work monitor;
		int num_endpoints;
		struct u132_addr addr[MAX_U132_ADDRS];
		struct u132_udev udev[MAX_U132_UDEVS];
		struct u132_port port[MAX_U132_PORTS];
		struct u132_endp *endp[MAX_U132_ENDPS];
	} cocci_id/* drivers/usb/host/u132-hcd.c 178 */;
	struct u132_ring {
		unsigned in_use:1;
		unsigned length:7;
		u8 number;
		struct u132 *u132;
		struct u132_endp *curr_endp;
		struct delayed_work scheduler;
	} cocci_id/* drivers/usb/host/u132-hcd.c 170 */;
	char *cocci_id/* drivers/usb/host/u132-hcd.c 1541 */;
	void cocci_id/* drivers/usb/host/u132-hcd.c 1502 */;
	struct u132_endp {
		struct kref kref;
		u8 udev_number;
		u8 endp_number;
		u8 usb_addr;
		u8 usb_endp;
		struct u132 *u132;
		struct list_head endp_ring;
		struct u132_ring *ring;
		unsigned toggle_bits:2;
		unsigned active:1;
		unsigned delayed:1;
		unsigned input:1;
		unsigned output:1;
		unsigned pipetype:2;
		unsigned dequeueing:1;
		unsigned edset_flush:1;
		unsigned spare_bits:14;
		unsigned long jiffies;
		struct usb_host_endpoint *hep;
		struct u132_spin queue_lock;
		u16 queue_size;
		u16 queue_last;
		u16 queue_next;
		struct urb *urb_list[ENDP_QUEUE_SIZE];
		struct list_head urb_more;
		struct delayed_work scheduler;
	} cocci_id/* drivers/usb/host/u132-hcd.c 142 */;
	struct u132_spin {
		spinlock_t slock;
	} cocci_id/* drivers/usb/host/u132-hcd.c 139 */;
	struct work_struct *cocci_id/* drivers/usb/host/u132-hcd.c 1355 */;
	struct u132_urbq {
		struct list_head urb_more;
		struct urb *urb;
	} cocci_id/* drivers/usb/host/u132-hcd.c 135 */;
	struct u132_ring cocci_id/* drivers/usb/host/u132-hcd.c 1300 */;
	struct u132_udev {
		struct kref kref;
		struct usb_device *usb_device;
		u8 enumeration;
		u8 udev_number;
		u8 usb_addr;
		u8 portnumber;
		u8 endp_number_in[16];
		u8 endp_number_out[16];
	} cocci_id/* drivers/usb/host/u132-hcd.c 122 */;
	struct u132_addr {
		u8 address;
	} cocci_id/* drivers/usb/host/u132-hcd.c 119 */;
	struct u132_port {
		struct u132 *u132;
		int reset;
		int enable;
		int power;
		int Status;
	} cocci_id/* drivers/usb/host/u132-hcd.c 112 */;
}
