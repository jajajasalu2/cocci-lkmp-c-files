cocci_test_suite() {
	struct dmi_sysfs_attribute cocci_id/* drivers/firmware/dmi-sysfs.c 95 */;
	struct dmi_sysfs_entry cocci_id/* drivers/firmware/dmi-sysfs.c 90 */;
	void __exit cocci_id/* drivers/firmware/dmi-sysfs.c 686 */;
	struct dmi_sysfs_mapped_attribute {
		struct attribute attr;
		ssize_t (*show)(struct dmi_sysfs_entry *entry,
				const struct dmi_header *dh, char *buf);
	} cocci_id/* drivers/firmware/dmi-sysfs.c 67 */;
	int cocci_id/* drivers/firmware/dmi-sysfs.c 652 */;
	int __init cocci_id/* drivers/firmware/dmi-sysfs.c 650 */;
	struct dmi_sysfs_entry *cocci_id/* drivers/firmware/dmi-sysfs.c 641 */;
	void cocci_id/* drivers/firmware/dmi-sysfs.c 639 */;
	int *cocci_id/* drivers/firmware/dmi-sysfs.c 583 */;
	void __init cocci_id/* drivers/firmware/dmi-sysfs.c 579 */;
	int __initdata cocci_id/* drivers/firmware/dmi-sysfs.c 577 */;
	int __initdata cocci_id/* drivers/firmware/dmi-sysfs.c 574 */[MAX_ENTRY_TYPE + 1];
	struct kset *cocci_id/* drivers/firmware/dmi-sysfs.c 571 */;
	struct kobj_type cocci_id/* drivers/firmware/dmi-sysfs.c 565 */;
	const struct bin_attribute cocci_id/* drivers/firmware/dmi-sysfs.c 550 */;
	struct dmi_read_state cocci_id/* drivers/firmware/dmi-sysfs.c 541 */;
	loff_t cocci_id/* drivers/firmware/dmi-sysfs.c 538 */;
	struct bin_attribute *cocci_id/* drivers/firmware/dmi-sysfs.c 537 */;
	struct file *cocci_id/* drivers/firmware/dmi-sysfs.c 535 */;
	struct dmi_read_state *cocci_id/* drivers/firmware/dmi-sysfs.c 526 */;
	struct dmi_sysfs_attribute {
		struct attribute attr;
		ssize_t (*show)(struct dmi_sysfs_entry *entry, char *buf);
	} cocci_id/* drivers/firmware/dmi-sysfs.c 52 */;
	struct attribute *cocci_id/* drivers/firmware/dmi-sysfs.c 513 */[];
	struct bin_attribute cocci_id/* drivers/firmware/dmi-sysfs.c 444 */;
	struct dmi_system_event_log cocci_id/* drivers/firmware/dmi-sysfs.c 404 */;
	u8 __iomem *cocci_id/* drivers/firmware/dmi-sysfs.c 382 */;
	sel_io_reader cocci_id/* drivers/firmware/dmi-sysfs.c 367 */;
	const struct dmi_system_event_log *cocci_id/* drivers/firmware/dmi-sysfs.c 362 */;
	sel_io_reader cocci_id/* drivers/firmware/dmi-sysfs.c 355 */[];
	u16 cocci_id/* drivers/firmware/dmi-sysfs.c 349 */;
	u8 cocci_id/* drivers/firmware/dmi-sysfs.c 343 */;
	struct dmi_sysfs_entry {
		struct dmi_header dh;
		struct kobject kobj;
		int instance;
		int position;
		struct list_head list;
		struct kobject *child;
	} cocci_id/* drivers/firmware/dmi-sysfs.c 34 */;
	u8 (*cocci_id/* drivers/firmware/dmi-sysfs.c 313 */)(const struct dmi_system_event_log *sel,
							     loff_t offset);
	struct dmi_system_event_log {
		struct dmi_header header;
		u16 area_length;
		u16 header_start_offset;
		u16 data_start_offset;
		u8 access_method;
		u8 status;
		u32 change_token;
		union {
			struct {
				u16 index_addr;
				u16 data_addr;
			} io;
			u32 phys_addr32;
			u16 gpnv_handle;
			u32 access_method_address;
		};
		u8 header_format;
		u8 type_descriptors_supported_count;
		u8 per_log_type_descriptor_length;
		u8 supported_log_type_descriptos[0];
	}__packed cocci_id/* drivers/firmware/dmi-sysfs.c 245 */;
	struct dmi_entry_attr_show_data cocci_id/* drivers/firmware/dmi-sysfs.c 219 */;
	char *cocci_id/* drivers/firmware/dmi-sysfs.c 217 */;
	struct attribute *cocci_id/* drivers/firmware/dmi-sysfs.c 216 */;
	struct kobject *cocci_id/* drivers/firmware/dmi-sysfs.c 215 */;
	ssize_t cocci_id/* drivers/firmware/dmi-sysfs.c 215 */;
	struct dmi_sysfs_mapped_attribute cocci_id/* drivers/firmware/dmi-sysfs.c 211 */;
	struct dmi_sysfs_mapped_attribute *cocci_id/* drivers/firmware/dmi-sysfs.c 208 */;
	struct dmi_entry_attr_show_data *cocci_id/* drivers/firmware/dmi-sysfs.c 207 */;
	void *cocci_id/* drivers/firmware/dmi-sysfs.c 205 */;
	const struct dmi_header *cocci_id/* drivers/firmware/dmi-sysfs.c 204 */;
	struct dmi_entry_attr_show_data {
		struct attribute *attr;
		char *buf;
	} cocci_id/* drivers/firmware/dmi-sysfs.c 198 */;
	const char *cocci_id/* drivers/firmware/dmi-sysfs.c 185 */;
	size_t cocci_id/* drivers/firmware/dmi-sysfs.c 183 */;
	struct find_dmi_data cocci_id/* drivers/firmware/dmi-sysfs.c 162 */;
	dmi_callback cocci_id/* drivers/firmware/dmi-sysfs.c 160 */;
	struct dmi_read_state {
		char *buf;
		loff_t pos;
		size_t count;
	} cocci_id/* drivers/firmware/dmi-sysfs.c 153 */;
	struct find_dmi_data *cocci_id/* drivers/firmware/dmi-sysfs.c 129 */;
	struct find_dmi_data {
		struct dmi_sysfs_entry *entry;
		dmi_callback callback;
		void *private;
		int instance_countdown;
		ssize_t ret;
	} cocci_id/* drivers/firmware/dmi-sysfs.c 118 */;
	ssize_t (*cocci_id/* drivers/firmware/dmi-sysfs.c 115 */)(struct dmi_sysfs_entry *,
								  const struct dmi_header *dh,
								  void *);
	const struct sysfs_ops cocci_id/* drivers/firmware/dmi-sysfs.c 111 */;
	struct dmi_sysfs_attribute *cocci_id/* drivers/firmware/dmi-sysfs.c 102 */;
}
