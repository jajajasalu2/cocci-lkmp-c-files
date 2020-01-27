cocci_test_suite() {
	enum pvr2_ctl_type cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 93 */;
	const char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 824 */;
	size_t cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 824 */;
	struct pvr2_context *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 756 */;
	struct pvr2_sysfs cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 747 */;
	struct pvr2_channel *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 744 */;
	struct pvr2_sysfs_class {
		struct class class;
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 69 */;
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 622 */;
	struct usb_device *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 620 */;
	struct pvr2_sysfs_class *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 618 */;
	void cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 617 */;
	struct pvr2_sysfs *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 563 */;
	struct device_attribute *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 561 */;
	char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 561 */;
	struct device *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 560 */;
	ssize_t cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 560 */;
	struct pvr2_sysfs_class cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 493 */;
	struct class *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 490 */;
	struct pvr2_sysfs_ctl_item {
		struct device_attribute attr_name;
		struct device_attribute attr_type;
		struct device_attribute attr_min;
		struct device_attribute attr_max;
		struct device_attribute attr_def;
		struct device_attribute attr_enum;
		struct device_attribute attr_bits;
		struct device_attribute attr_val;
		struct device_attribute attr_custom;
		struct pvr2_ctrl *cptr;
		int ctl_id;
		struct pvr2_sysfs *chptr;
		struct pvr2_sysfs_ctl_item *item_next;
		struct attribute *attr_gen[8];
		struct attribute_group grp;
		int created_ok;
		char name[80];
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 49 */;
	struct pvr2_sysfs_debugifc *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 415 */;
	ssize_t cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 410 */(struct device *,
									    struct device_attribute *,
									    const char *,
									    size_t count);
	struct pvr2_sysfs_debugifc {
		struct device_attribute attr_debugcmd;
		struct device_attribute attr_debuginfo;
		int debugcmd_created_ok;
		int debuginfo_created_ok;
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 41 */;
	ssize_t cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 408 */(struct device *,
									    struct device_attribute *,
									    char *);
	unsigned int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 290 */;
	struct pvr2_ctrl *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 289 */;
	struct pvr2_sysfs_ctl_item *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 288 */;
	struct pvr2_sysfs_ctl_item cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 222 */;
	long cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 196 */;
	struct pvr2_sysfs {
		struct pvr2_channel channel;
		struct device *class_dev;
#ifdef CONFIG_VIDEO_PVRUSB2_DEBUGIFC
		struct pvr2_sysfs_debugifc *debugifc;
#endif
		struct pvr2_sysfs_ctl_item *item_first;
		struct pvr2_sysfs_ctl_item *item_last;
		struct device_attribute attr_v4l_minor_number;
		struct device_attribute attr_v4l_radio_minor_number;
		struct device_attribute attr_unit_number;
		struct device_attribute attr_bus_info;
		struct device_attribute attr_hdw_name;
		struct device_attribute attr_hdw_desc;
		int v4l_minor_number_created_ok;
		int v4l_radio_minor_number_created_ok;
		int unit_number_created_ok;
		int bus_info_created_ok;
		int hdw_name_created_ok;
		int hdw_desc_created_ok;
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-sysfs.c 18 */;
}
