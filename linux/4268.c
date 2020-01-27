cocci_test_suite() {
	struct sony_nc_value cocci_id/* drivers/platform/x86/sony-laptop.c 961 */;
	const int cocci_id/* drivers/platform/x86/sony-laptop.c 944 */;
	int *cocci_id/* drivers/platform/x86/sony-laptop.c 904 */;
	struct sony_nc_handles *cocci_id/* drivers/platform/x86/sony-laptop.c 821 */;
	struct sony_nc_handles {
		u16 cap[0x10];
		struct device_attribute devattr;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 816 */;
	void *cocci_id/* drivers/platform/x86/sony-laptop.c 789 */;
	unsigned int cocci_id/* drivers/platform/x86/sony-laptop.c 741 */;
	union acpi_object cocci_id/* drivers/platform/x86/sony-laptop.c 734 */;
	struct acpi_object_list cocci_id/* drivers/platform/x86/sony-laptop.c 733 */;
	acpi_status cocci_id/* drivers/platform/x86/sony-laptop.c 730 */;
	struct acpi_buffer cocci_id/* drivers/platform/x86/sony-laptop.c 729 */;
	u64 *cocci_id/* drivers/platform/x86/sony-laptop.c 726 */;
	acpi_handle cocci_id/* drivers/platform/x86/sony-laptop.c 725 */;
	union acpi_object *cocci_id/* drivers/platform/x86/sony-laptop.c 725 */;
	char *cocci_id/* drivers/platform/x86/sony-laptop.c 725 */;
	struct sony_nc_value cocci_id/* drivers/platform/x86/sony-laptop.c 694 */[];
	struct sony_nc_value {
		char *name;
		char **acpiget;
		char **acpiset;
		int (*validate)(const int, const int);
		int value;
		int valid;
		int debug;
		struct device_attribute devattr;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 635 */;
	int cocci_id/* drivers/platform/x86/sony-laptop.c 632 */(const int,
								 const int);
	ssize_t cocci_id/* drivers/platform/x86/sony-laptop.c 630 */(struct device *,
								     struct device_attribute *,
								     const char *,
								     size_t);
	ssize_t cocci_id/* drivers/platform/x86/sony-laptop.c 628 */(struct device *,
								     struct device_attribute *,
								     char *);
	struct platform_driver cocci_id/* drivers/platform/x86/sony-laptop.c 568 */;
	atomic_t cocci_id/* drivers/platform/x86/sony-laptop.c 567 */;
	void __exit cocci_id/* drivers/platform/x86/sony-laptop.c 4919 */;
	int __init cocci_id/* drivers/platform/x86/sony-laptop.c 4891 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/sony-laptop.c 4873 */[]__initconst;
	struct sony_pic_irq *cocci_id/* drivers/platform/x86/sony-laptop.c 4697 */;
	struct sony_pic_ioport *cocci_id/* drivers/platform/x86/sony-laptop.c 4696 */;
	irqreturn_t cocci_id/* drivers/platform/x86/sony-laptop.c 4588 */;
	struct acpi_resource_irq cocci_id/* drivers/platform/x86/sony-laptop.c 4535 */;
	struct acpi_resource_io cocci_id/* drivers/platform/x86/sony-laptop.c 4524 */;
	struct acpi_resource cocci_id/* drivers/platform/x86/sony-laptop.c 4522 */;
	struct {
		struct acpi_resource res1;
		struct acpi_resource res2;
		struct acpi_resource res3;
		struct acpi_resource res4;
	} *cocci_id/* drivers/platform/x86/sony-laptop.c 4498 */;
	struct sony_pic_ioport cocci_id/* drivers/platform/x86/sony-laptop.c 4391 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/sony-laptop.c 439 */;
	struct acpi_resource_io *cocci_id/* drivers/platform/x86/sony-laptop.c 4389 */;
	struct acpi_resource_irq *cocci_id/* drivers/platform/x86/sony-laptop.c 4357 */;
	struct acpi_resource *cocci_id/* drivers/platform/x86/sony-laptop.c 4334 */;
	struct miscdevice cocci_id/* drivers/platform/x86/sony-laptop.c 4273 */;
	const struct file_operations cocci_id/* drivers/platform/x86/sony-laptop.c 4262 */;
	u16 cocci_id/* drivers/platform/x86/sony-laptop.c 4138 */;
	void __user *cocci_id/* drivers/platform/x86/sony-laptop.c 4136 */;
	u16 *cocci_id/* drivers/platform/x86/sony-laptop.c 4121 */;
	__poll_t cocci_id/* drivers/platform/x86/sony-laptop.c 4113 */;
	poll_table *cocci_id/* drivers/platform/x86/sony-laptop.c 4113 */;
	unsigned char cocci_id/* drivers/platform/x86/sony-laptop.c 4086 */;
	loff_t *cocci_id/* drivers/platform/x86/sony-laptop.c 4083 */;
	char __user *cocci_id/* drivers/platform/x86/sony-laptop.c 4082 */;
	struct inode *cocci_id/* drivers/platform/x86/sony-laptop.c 4067 */;
	struct file *cocci_id/* drivers/platform/x86/sony-laptop.c 4056 */;
	struct sonypi_compat_s cocci_id/* drivers/platform/x86/sony-laptop.c 4052 */;
	struct sonypi_compat_s {
		struct fasync_struct *fifo_async;
		struct kfifo fifo;
		spinlock_t fifo_lock;
		wait_queue_head_t fifo_proc_list;
		atomic_t open_count;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 4045 */;
	const struct attribute_group cocci_id/* drivers/platform/x86/sony-laptop.c 4023 */;
	struct attribute *cocci_id/* drivers/platform/x86/sony-laptop.c 4016 */[];
	u8 *cocci_id/* drivers/platform/x86/sony-laptop.c 3975 */;
	struct input_dev *cocci_id/* drivers/platform/x86/sony-laptop.c 376 */;
	struct pci_dev *cocci_id/* drivers/platform/x86/sony-laptop.c 3676 */;
	struct sony_pic_dev *cocci_id/* drivers/platform/x86/sony-laptop.c 3674 */;
	const u8 cocci_id/* drivers/platform/x86/sony-laptop.c 3655 */;
	unsigned char *cocci_id/* drivers/platform/x86/sony-laptop.c 360 */;
	struct sonypi_eventtypes cocci_id/* drivers/platform/x86/sony-laptop.c 3551 */[];
	unsigned long cocci_id/* drivers/platform/x86/sony-laptop.c 355 */;
	struct sony_laptop_keypress cocci_id/* drivers/platform/x86/sony-laptop.c 354 */;
	struct timer_list *cocci_id/* drivers/platform/x86/sony-laptop.c 352 */;
	struct sonypi_event cocci_id/* drivers/platform/x86/sony-laptop.c 3483 */[];
	struct sonypi_event {
		u8 data;
		u8 event;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 3393 */;
	struct sony_pic_dev cocci_id/* drivers/platform/x86/sony-laptop.c 3370 */;
	struct sony_pic_dev {
		struct acpi_device *acpi_dev;
		struct sony_pic_irq *cur_irq;
		struct sony_pic_ioport *cur_ioport;
		struct list_head interrupts;
		struct list_head ioports;
		struct mutex lock;
		struct sonypi_eventtypes *event_types;
		int (*handle_irq)(const u8, const u8);
		int model;
		u16 evport_offset;
		u8 camera_power;
		u8 bluetooth_power;
		u8 wwan_power;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 3354 */;
	struct sonypi_eventtypes {
		u8 data;
		unsigned long mask;
		struct sonypi_event *events;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 3348 */;
	struct sony_pic_irq {
		struct acpi_resource_irq irq;
		struct list_head list;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 3343 */;
	struct sony_pic_ioport {
		struct acpi_resource_io io1;
		struct acpi_resource_io io2;
		struct list_head list;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 3337 */;
	struct acpi_driver cocci_id/* drivers/platform/x86/sony-laptop.c 3314 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/sony-laptop.c 3302 */[];
	struct sony_nc_value *cocci_id/* drivers/platform/x86/sony-laptop.c 3168 */;
	struct backlight_properties cocci_id/* drivers/platform/x86/sony-laptop.c 3105 */;
	const struct backlight_ops *cocci_id/* drivers/platform/x86/sony-laptop.c 3104 */;
	unsigned char cocci_id/* drivers/platform/x86/sony-laptop.c 3051 */[32];
	u64 cocci_id/* drivers/platform/x86/sony-laptop.c 3047 */;
	struct sony_backlight_props *cocci_id/* drivers/platform/x86/sony-laptop.c 3045 */;
	struct touchpad_control cocci_id/* drivers/platform/x86/sony-laptop.c 3014 */;
	struct touchpad_control *cocci_id/* drivers/platform/x86/sony-laptop.c 2974 */;
	struct touchpad_control {
		struct device_attribute attr;
		int handle;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 2970 */;
	int cocci_id/* drivers/platform/x86/sony-laptop.c 288 */[];
	struct device_attribute cocci_id/* drivers/platform/x86/sony-laptop.c 2734 */;
	struct device_attribute *cocci_id/* drivers/platform/x86/sony-laptop.c 2547 */;
	struct snc_gfx_switch_control cocci_id/* drivers/platform/x86/sony-laptop.c 2512 */;
	int cocci_id/* drivers/platform/x86/sony-laptop.c 2457 */;
	void cocci_id/* drivers/platform/x86/sony-laptop.c 2457 */;
	struct snc_gfx_switch_control *cocci_id/* drivers/platform/x86/sony-laptop.c 2454 */;
	struct snc_gfx_switch_control {
		struct device_attribute attr;
		unsigned int handle;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 2450 */;
	enum gfx_switch{SPEED, STAMINA, AUTO,} cocci_id/* drivers/platform/x86/sony-laptop.c 2445 */;
	struct snc_lid_resume_control cocci_id/* drivers/platform/x86/sony-laptop.c 2382 */;
	struct snc_lid_resume_control *cocci_id/* drivers/platform/x86/sony-laptop.c 2315 */;
	struct snc_lid_resume_control {
		struct device_attribute attrs[LID_RESUME_MAX];
		unsigned int status;
		int handle;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 2310 */;
	struct snc_thermal_ctrl cocci_id/* drivers/platform/x86/sony-laptop.c 2239 */;
	short cocci_id/* drivers/platform/x86/sony-laptop.c 2185 */;
	unsigned short cocci_id/* drivers/platform/x86/sony-laptop.c 2151 */;
	const char *const cocci_id/* drivers/platform/x86/sony-laptop.c 2145 */[];
	struct snc_thermal_ctrl *cocci_id/* drivers/platform/x86/sony-laptop.c 2142 */;
	struct snc_thermal_ctrl {
		unsigned int mode;
		unsigned int profiles;
		struct device_attribute mode_attr;
		struct device_attribute profiles_attr;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 2136 */;
	struct platform_device *cocci_id/* drivers/platform/x86/sony-laptop.c 2124 */;
	const int cocci_id/* drivers/platform/x86/sony-laptop.c 211 */[];
	struct battery_care_control cocci_id/* drivers/platform/x86/sony-laptop.c 2083 */;
	struct device *cocci_id/* drivers/platform/x86/sony-laptop.c 2064 */;
	struct sony_laptop_keypress {
		struct input_dev *dev;
		int key;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 203 */;
	struct sony_laptop_input_s cocci_id/* drivers/platform/x86/sony-laptop.c 199 */;
	const char *cocci_id/* drivers/platform/x86/sony-laptop.c 1982 */;
	size_t cocci_id/* drivers/platform/x86/sony-laptop.c 1982 */;
	struct battery_care_control *cocci_id/* drivers/platform/x86/sony-laptop.c 1978 */;
	struct battery_care_control {
		struct device_attribute attrs[2];
		unsigned int handle;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 1974 */;
	struct sony_laptop_input_s {
		atomic_t users;
		struct input_dev *jog_dev;
		struct input_dev *key_dev;
		struct kfifo fifo;
		spinlock_t fifo_lock;
		struct timer_list release_key_timer;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 190 */;
	void cocci_id/* drivers/platform/x86/sony-laptop.c 184 */(void);
	int cocci_id/* drivers/platform/x86/sony-laptop.c 182 */(struct acpi_device *device,
								 unsigned int handle);
	int cocci_id/* drivers/platform/x86/sony-laptop.c 181 */[N_SONY_RFKILL];
	struct rfkill *cocci_id/* drivers/platform/x86/sony-laptop.c 180 */[N_SONY_RFKILL];
	u8 cocci_id/* drivers/platform/x86/sony-laptop.c 1776 */;
	ssize_t cocci_id/* drivers/platform/x86/sony-laptop.c 1776 */;
	struct kbd_backlight *cocci_id/* drivers/platform/x86/sony-laptop.c 1774 */;
	struct kbd_backlight {
		unsigned int handle;
		unsigned int base;
		unsigned int mode;
		unsigned int timeout;
		unsigned int has_timeout;
		struct device_attribute mode_attr;
		struct device_attribute timeout_attr;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 1764 */;
	enum sony_nc_rfkill{SONY_WIFI, SONY_BLUETOOTH, SONY_WWAN, SONY_WIMAX, N_SONY_RFKILL,} cocci_id/* drivers/platform/x86/sony-laptop.c 171 */;
	enum sony_nc_rfkill cocci_id/* drivers/platform/x86/sony-laptop.c 1679 */;
	enum rfkill_type cocci_id/* drivers/platform/x86/sony-laptop.c 1618 */;
	struct rfkill *cocci_id/* drivers/platform/x86/sony-laptop.c 1617 */;
	const struct rfkill_ops cocci_id/* drivers/platform/x86/sony-laptop.c 1609 */;
	long cocci_id/* drivers/platform/x86/sony-laptop.c 1601 */;
	bool cocci_id/* drivers/platform/x86/sony-laptop.c 1598 */;
	int cocci_id/* drivers/platform/x86/sony-laptop.c 155 */(struct platform_device *pd);
	int cocci_id/* drivers/platform/x86/sony-laptop.c 147 */(void);
	void cocci_id/* drivers/platform/x86/sony-laptop.c 135 */(struct platform_device *pd);
	int cocci_id/* drivers/platform/x86/sony-laptop.c 133 */(struct platform_device *pd,
								 unsigned int handle);
	void cocci_id/* drivers/platform/x86/sony-laptop.c 130 */(struct platform_device *pd,
								  unsigned int handle);
	struct acpi_device_info *cocci_id/* drivers/platform/x86/sony-laptop.c 1285 */;
	void **cocci_id/* drivers/platform/x86/sony-laptop.c 1283 */;
	enum event_types{HOTKEY=1, KILLSWITCH, GFX_SWITCH,} cocci_id/* drivers/platform/x86/sony-laptop.c 1184 */;
	struct sony_nc_event *cocci_id/* drivers/platform/x86/sony-laptop.c 1152 */;
	u32 cocci_id/* drivers/platform/x86/sony-laptop.c 1148 */;
	struct sony_nc_event cocci_id/* drivers/platform/x86/sony-laptop.c 1084 */[];
	struct sony_nc_event {
		u8 data;
		u8 event;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 1079 */;
	const struct backlight_ops cocci_id/* drivers/platform/x86/sony-laptop.c 1070 */;
	struct backlight_device *cocci_id/* drivers/platform/x86/sony-laptop.c 1030 */;
	struct sony_backlight_props cocci_id/* drivers/platform/x86/sony-laptop.c 1022 */;
	struct sony_backlight_props {
		struct backlight_device *dev;
		int handle;
		int cmd_base;
		u8 offset;
		u8 maxlvl;
	} cocci_id/* drivers/platform/x86/sony-laptop.c 1015 */;
}
