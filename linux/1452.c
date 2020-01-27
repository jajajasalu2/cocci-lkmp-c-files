cocci_test_suite() {
	struct inode *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 952 */;
	struct file *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 951 */;
	unsigned long long cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 697 */;
	ssize_t cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 628 */;
	loff_t cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 626 */;
	u32 cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 622 */;
	u16 cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 491 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 487 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 443 */;
	unsigned long cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 398 */;
	void *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 396 */;
	enum fsg_state cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 395 */;
	void cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 395 */;
	void (*cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 353 */)(struct fsg_dev *);
	const struct fsg_module_parameters *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3445 */;
	struct fsg_opts *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3412 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3410 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3410 */;
	struct fsg_opts cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3401 */;
	struct fsg_dev cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3400 */;
	const char **cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3372 */;
	const char *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 337 */;
	unsigned cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 337 */;
	struct fsg_common *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 336 */;
	int cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 336 */;
	struct fsg_lun_config cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3348 */;
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3329 */;
	struct configfs_group_operations cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3324 */;
	struct configfs_attribute *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3316 */[];
	struct configfs_item_operations cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3231 */;
	struct config_item *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3224 */;
	struct config_group *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3200 */;
	struct fsg_dev {
		struct usb_function function;
		struct usb_gadget *gadget;
		struct fsg_common *common;
		u16 interface_number;
		unsigned int bulk_in_enabled:1;
		unsigned int bulk_out_enabled:1;
		unsigned long atomic_bitflags;
#define IGNORE_BULK_OUT 0
		struct usb_ep *bulk_in;
		struct usb_ep *bulk_out;
	} cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 319 */;
	u8 cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3148 */;
	struct fsg_lun_opts *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3022 */;
	struct fsg_lun_opts cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 3011 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2898 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2894 */;
	char cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2827 */[8];
	struct fsg_config *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2825 */;
	struct fsg_lun_config *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2738 */;
	const struct attribute_group *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2733 */[];
	const struct attribute_group cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2728 */;
	struct attribute *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2716 */;
	umode_t cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2715 */;
	struct kobject *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2715 */;
	struct attribute *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2708 */[];
	struct usb_string *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2682 */;
	bool cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2680 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2680 */;
	struct fsg_common {
		struct usb_gadget *gadget;
		struct usb_composite_dev *cdev;
		struct fsg_dev *fsg;
		wait_queue_head_t io_wait;
		wait_queue_head_t fsg_wait;
		struct rw_semaphore filesem;
		spinlock_t lock;
		struct usb_ep *ep0;
		struct usb_request *ep0req;
		unsigned int ep0_req_tag;
		struct fsg_buffhd *next_buffhd_to_fill;
		struct fsg_buffhd *next_buffhd_to_drain;
		struct fsg_buffhd *buffhds;
		unsigned int fsg_num_buffers;
		int cmnd_size;
		u8 cmnd[MAX_COMMAND_SIZE];
		unsigned int lun;
		struct fsg_lun *luns[FSG_MAX_LUNS];
		struct fsg_lun *curlun;
		unsigned int bulk_out_maxpacket;
		enum fsg_state state;
		unsigned int exception_req_tag;
		void *exception_arg;
		enum data_direction data_dir;
		u32 data_size;
		u32 data_size_from_cmnd;
		u32 tag;
		u32 residue;
		u32 usb_amount_left;
		unsigned int can_stall:1;
		unsigned int free_storage_on_release:1;
		unsigned int phase_error:1;
		unsigned int short_packet_received:1;
		unsigned int bad_lun_okay:1;
		unsigned int running:1;
		unsigned int sysfs:1;
		struct completion thread_notifier;
		struct task_struct *thread_task;
		void *private_data;
		char inquiry_string[INQUIRY_STRING_LEN];
	} cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 261 */;
	struct fsg_buffhd *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2594 */;
	struct fsg_common cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 258 */;
	size_t cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2547 */;
	struct rw_semaphore *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2524 */;
	char *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2521 */;
	struct device_attribute *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2520 */;
	struct device *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2520 */;
	struct usb_gadget_strings *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 250 */[];
	struct usb_gadget_strings cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 245 */;
	struct usb_string cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 240 */[];
	const char cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 234 */[];
	struct fsg_dev *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2196 */;
	struct usb_request **cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2186 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2185 */;
	struct bulk_cb_wrap *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 2079 */;
	char cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 1802 */[16];
	struct fsg_lun *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 1665 */;
	char cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 1664 */[20];
	const char cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 1663 */[4];
	enum data_direction cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 1658 */;
	unsigned int cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 1658 */;
	struct bulk_cs_wrap *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 1601 */;
	u8 *cocci_id/* drivers/usb/gadget/function/f_mass_storage.c 1063 */;
}