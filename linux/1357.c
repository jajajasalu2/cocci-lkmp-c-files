cocci_test_suite() {
	const struct usb_device_id cocci_id/* drivers/usb/misc/ftdi-elan.c 85 */[];
	void (*cocci_id/* drivers/usb/misc/ftdi-elan.c 840 */)(void *,
							       struct urb *,
							       u8 *, int, int,
							       int, int, int,
							       int, int, int,
							       int);
	char cocci_id/* drivers/usb/misc/ftdi-elan.c 800 */[40 * 3 + 4];
	struct urb *cocci_id/* drivers/usb/misc/ftdi-elan.c 777 */;
	u8 *cocci_id/* drivers/usb/misc/ftdi-elan.c 742 */;
	struct u132_command *cocci_id/* drivers/usb/misc/ftdi-elan.c 739 */;
	char *cocci_id/* drivers/usb/misc/ftdi-elan.c 732 */;
	struct usb_ftdi *cocci_id/* drivers/usb/misc/ftdi-elan.c 731 */;
	int cocci_id/* drivers/usb/misc/ftdi-elan.c 731 */;
	struct list_head cocci_id/* drivers/usb/misc/ftdi-elan.c 66 */;
	loff_t *cocci_id/* drivers/usb/misc/ftdi-elan.c 658 */;
	size_t cocci_id/* drivers/usb/misc/ftdi-elan.c 658 */;
	char __user *cocci_id/* drivers/usb/misc/ftdi-elan.c 657 */;
	ssize_t cocci_id/* drivers/usb/misc/ftdi-elan.c 657 */;
	struct mutex cocci_id/* drivers/usb/misc/ftdi-elan.c 64 */;
	struct inode *cocci_id/* drivers/usb/misc/ftdi-elan.c 614 */;
	struct file *cocci_id/* drivers/usb/misc/ftdi-elan.c 614 */;
	struct platform_driver cocci_id/* drivers/usb/misc/ftdi-elan.c 59 */;
	bool cocci_id/* drivers/usb/misc/ftdi-elan.c 55 */;
	struct usb_ftdi cocci_id/* drivers/usb/misc/ftdi-elan.c 461 */;
	struct work_struct *cocci_id/* drivers/usb/misc/ftdi-elan.c 458 */;
	struct u132_target *cocci_id/* drivers/usb/misc/ftdi-elan.c 345 */;
	struct u132_respond *cocci_id/* drivers/usb/misc/ftdi-elan.c 331 */;
	int cocci_id/* drivers/usb/misc/ftdi-elan.c 296 */(struct usb_ftdi *ftdi);
	void cocci_id/* drivers/usb/misc/ftdi-elan.c 293 */(struct usb_ftdi *ftdi);
	void cocci_id/* drivers/usb/misc/ftdi-elan.c 291 */(struct usb_ftdi *ftdi,
							    struct u132_target *target,
							    u8 *buffer,
							    int length);
	struct device *cocci_id/* drivers/usb/misc/ftdi-elan.c 286 */;
	void __exit cocci_id/* drivers/usb/misc/ftdi-elan.c 2774 */;
	struct platform_device *cocci_id/* drivers/usb/misc/ftdi-elan.c 277 */;
	int __init cocci_id/* drivers/usb/misc/ftdi-elan.c 2760 */;
	struct usb_class_driver *cocci_id/* drivers/usb/misc/ftdi-elan.c 2729 */;
	struct usb_interface *cocci_id/* drivers/usb/misc/ftdi-elan.c 2723 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/misc/ftdi-elan.c 2643 */;
	struct usb_host_interface *cocci_id/* drivers/usb/misc/ftdi-elan.c 2642 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/ftdi-elan.c 2640 */;
	void cocci_id/* drivers/usb/misc/ftdi-elan.c 252 */;
	unsigned int cocci_id/* drivers/usb/misc/ftdi-elan.c 246 */;
	u32 cocci_id/* drivers/usb/misc/ftdi-elan.c 2197 */;
	struct ohci_regs cocci_id/* drivers/usb/misc/ftdi-elan.c 2186 */;
	u8 cocci_id/* drivers/usb/misc/ftdi-elan.c 2160 */;
	unsigned char cocci_id/* drivers/usb/misc/ftdi-elan.c 1996 */;
	struct kref *cocci_id/* drivers/usb/misc/ftdi-elan.c 193 */;
	struct usb_driver cocci_id/* drivers/usb/misc/ftdi-elan.c 192 */;
	char cocci_id/* drivers/usb/misc/ftdi-elan.c 1825 */;
	char cocci_id/* drivers/usb/misc/ftdi-elan.c 1626 */[30 * 3 + 4];
	u16 cocci_id/* drivers/usb/misc/ftdi-elan.c 1624 */;
	void (*cocci_id/* drivers/usb/misc/ftdi-elan.c 1552 */)(void *endp,
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
	void *cocci_id/* drivers/usb/misc/ftdi-elan.c 1551 */;
	struct usb_ftdi {
		struct list_head ftdi_list;
		struct mutex u132_lock;
		int command_next;
		int command_head;
		struct u132_command command[COMMAND_SIZE];
		int respond_next;
		int respond_head;
		struct u132_respond respond[RESPOND_SIZE];
		struct u132_target target[4];
		char device_name[16];
		unsigned synchronized:1;
		unsigned enumerated:1;
		unsigned registered:1;
		unsigned initialized:1;
		unsigned card_ejected:1;
		int function;
		int sequence_num;
		int disconnected;
		int gone_away;
		int stuck_status;
		int status_queue_delay;
		struct semaphore sw_lock;
		struct usb_device *udev;
		struct usb_interface *interface;
		struct usb_class_driver *class;
		struct delayed_work status_work;
		struct delayed_work command_work;
		struct delayed_work respond_work;
		struct u132_platform_data platform_data;
		struct resource resources[0];
		struct platform_device platform_dev;
		unsigned char *bulk_in_buffer;
		size_t bulk_in_size;
		size_t bulk_in_last;
		size_t bulk_in_left;
		__u8 bulk_in_endpointAddr;
		__u8 bulk_out_endpointAddr;
		struct kref kref;
		u32 controlreg;
		u8 response[4 + 1024];
		int expected;
		int received;
		int ed_found;
	} cocci_id/* drivers/usb/misc/ftdi-elan.c 144 */;
	u32 *cocci_id/* drivers/usb/misc/ftdi-elan.c 1329 */;
	struct u132_target {
		void *endp;
		struct urb *urb;
		int toggle_bits;
		int error_count;
		int condition_code;
		int repeat_number;
		int halted;
		int skipped;
		int actual;
		int non_null;
		int active;
		int abandoning;
		void (*callback)(void *endp, struct urb *urb, u8 *buf,
				 int len, int toggle_bits, int error_count,
				 int condition_code, int repeat_number,
				 int halted, int skipped, int actual,
				 int non_null);
	} cocci_id/* drivers/usb/misc/ftdi-elan.c 125 */;
	struct u132_respond {
		u8 header;
		u8 address;
		u32 *value;
		int *result;
		struct completion wait_completion;
	} cocci_id/* drivers/usb/misc/ftdi-elan.c 118 */;
	struct usb_class_driver cocci_id/* drivers/usb/misc/ftdi-elan.c 1145 */;
	const struct file_operations cocci_id/* drivers/usb/misc/ftdi-elan.c 1132 */;
	const char __user *cocci_id/* drivers/usb/misc/ftdi-elan.c 1081 */;
	struct u132_command {
		u8 header;
		u16 length;
		u8 address;
		u8 width;
		u32 value;
		int follows;
		void *buffer;
	} cocci_id/* drivers/usb/misc/ftdi-elan.c 106 */;
}
