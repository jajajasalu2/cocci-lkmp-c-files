cocci_test_suite() {
	enum acpi_video_level_idx{ACPI_VIDEO_AC_LEVEL, ACPI_VIDEO_BATTERY_LEVEL, ACPI_VIDEO_FIRST_LEVEL,} cocci_id/* drivers/acpi/acpi_video.c 94 */;
	void cocci_id/* drivers/acpi/acpi_video.c 86 */(void);
	void cocci_id/* drivers/acpi/acpi_video.c 85 */(struct acpi_device *device,
							u32 event);
	int cocci_id/* drivers/acpi/acpi_video.c 83 */(struct acpi_device *device);
	struct acpi_video_device_brightness **cocci_id/* drivers/acpi/acpi_video.c 820 */;
	unsigned long long cocci_id/* drivers/acpi/acpi_video.c 754 */;
	struct acpi_video_device_brightness *cocci_id/* drivers/acpi/acpi_video.c 752 */;
	struct acpi_video_device *cocci_id/* drivers/acpi/acpi_video.c 749 */;
	int cocci_id/* drivers/acpi/acpi_video.c 749 */;
	int *cocci_id/* drivers/acpi/acpi_video.c 739 */;
	const void *cocci_id/* drivers/acpi/acpi_video.c 737 */;
	acpi_status cocci_id/* drivers/acpi/acpi_video.c 716 */;
	struct acpi_video_bus *cocci_id/* drivers/acpi/acpi_video.c 714 */;
	struct acpi_object_list cocci_id/* drivers/acpi/acpi_video.c 655 */;
	union acpi_object cocci_id/* drivers/acpi/acpi_video.c 654 */;
	union acpi_object *cocci_id/* drivers/acpi/acpi_video.c 653 */;
	struct acpi_buffer cocci_id/* drivers/acpi/acpi_video.c 652 */;
	union acpi_object **cocci_id/* drivers/acpi/acpi_video.c 649 */;
	ssize_t cocci_id/* drivers/acpi/acpi_video.c 649 */;
	unsigned long long *cocci_id/* drivers/acpi/acpi_video.c 593 */;
	uintptr_t cocci_id/* drivers/acpi/acpi_video.c 539 */;
	const struct dmi_system_id cocci_id/* drivers/acpi/acpi_video.c 422 */[];
	const struct dmi_system_id *cocci_id/* drivers/acpi/acpi_video.c 388 */;
	const struct thermal_cooling_device_ops cocci_id/* drivers/acpi/acpi_video.c 305 */;
	unsigned long *cocci_id/* drivers/acpi/acpi_video.c 271 */;
	struct thermal_cooling_device *cocci_id/* drivers/acpi/acpi_video.c 270 */;
	const struct backlight_ops cocci_id/* drivers/acpi/acpi_video.c 254 */;
	void __exit cocci_id/* drivers/acpi/acpi_video.c 2291 */;
	struct backlight_device *cocci_id/* drivers/acpi/acpi_video.c 229 */;
	int __init cocci_id/* drivers/acpi/acpi_video.c 2272 */;
	void cocci_id/* drivers/acpi/acpi_video.c 226 */(struct work_struct *work);
	int cocci_id/* drivers/acpi/acpi_video.c 224 */(struct acpi_video_device *device,
							u32 level_current,
							u32 event);
	int cocci_id/* drivers/acpi/acpi_video.c 221 */(struct acpi_video_device *device,
							unsigned long long *level,
							bool raw);
	int cocci_id/* drivers/acpi/acpi_video.c 219 */(struct acpi_video_device *device,
							int level);
	int cocci_id/* drivers/acpi/acpi_video.c 218 */(struct acpi_video_bus *video);
	void cocci_id/* drivers/acpi/acpi_video.c 216 */(struct acpi_video_bus *video,
							 struct acpi_video_device *device);
	const char *cocci_id/* drivers/acpi/acpi_video.c 2158 */;
	void cocci_id/* drivers/acpi/acpi_video.c 215 */(struct acpi_video_bus *video);
	void cocci_id/* drivers/acpi/acpi_video.c 214 */(acpi_handle handle,
							 u32 event,
							 void *data);
	struct acpi_video_bus cocci_id/* drivers/acpi/acpi_video.c 2042 */;
	struct acpi_device *cocci_id/* drivers/acpi/acpi_video.c 2022 */;
	struct acpi_video_device {
		unsigned long device_id;
		struct acpi_video_device_flags flags;
		struct acpi_video_device_cap cap;
		struct list_head entry;
		struct delayed_work switch_brightness_work;
		int switch_brightness_event;
		struct acpi_video_bus *video;
		struct acpi_device *dev;
		struct acpi_video_device_brightness *brightness;
		struct backlight_device *backlight;
		struct thermal_cooling_device *cooling_dev;
	} cocci_id/* drivers/acpi/acpi_video.c 200 */;
	struct input_dev *cocci_id/* drivers/acpi/acpi_video.c 1931 */;
	struct acpi_video_device_cap {
		u8 _ADR:1;
		u8 _BCL:1;
		u8 _BCM:1;
		u8 _BQC:1;
		u8 _BCQ:1;
		u8 _DDC:1;
	} cocci_id/* drivers/acpi/acpi_video.c 191 */;
	struct acpi_video_device_flags {
		u8 crt:1;
		u8 lcd:1;
		u8 tvout:1;
		u8 dvi:1;
		u8 bios:1;
		u8 unknown:1;
		u8 notify:1;
		u8 reserved:1;
	} cocci_id/* drivers/acpi/acpi_video.c 180 */;
	char *cocci_id/* drivers/acpi/acpi_video.c 1752 */;
	struct device *cocci_id/* drivers/acpi/acpi_video.c 1749 */;
	struct backlight_properties cocci_id/* drivers/acpi/acpi_video.c 1746 */;
	void **cocci_id/* drivers/acpi/acpi_video.c 1725 */;
	u32 cocci_id/* drivers/acpi/acpi_video.c 1724 */;
	acpi_handle cocci_id/* drivers/acpi/acpi_video.c 1724 */;
	void *cocci_id/* drivers/acpi/acpi_video.c 1724 */;
	struct notifier_block *cocci_id/* drivers/acpi/acpi_video.c 1695 */;
	struct acpi_video_bus {
		struct acpi_device *device;
		bool backlight_registered;
		u8 dos_setting;
		struct acpi_video_enumerated_device *attached_array;
		u8 attached_count;
		u8 child_count;
		struct acpi_video_bus_cap cap;
		struct acpi_video_bus_flags flags;
		struct list_head video_device_list;
		struct mutex device_list_lock;
		struct list_head entry;
		struct input_dev *input;
		char phys[32];
		struct notifier_block pm_nb;
	} cocci_id/* drivers/acpi/acpi_video.c 163 */;
	struct acpi_video_enumerated_device {
		union {
			u32 int_val;
			struct acpi_video_device_attrib attrib;
		} value;
		struct acpi_video_device *bind_info;
	} cocci_id/* drivers/acpi/acpi_video.c 155 */;
	struct work_struct *cocci_id/* drivers/acpi/acpi_video.c 1423 */;
	struct acpi_video_enumerated_device cocci_id/* drivers/acpi/acpi_video.c 1343 */;
	struct acpi_video_device_attrib {
		u32 display_index:4;
		u32 display_port_attachment:4;
		u32 display_type:4;
		u32 vendor_specific:4;
		u32 bios_can_detect:1;
		u32 depend_on_vga:1;
		u32 pipe_id:3;
		u32 reserved:10;
		u32 device_id_scheme:1;
	} cocci_id/* drivers/acpi/acpi_video.c 134 */;
	bool cocci_id/* drivers/acpi/acpi_video.c 1280 */;
	struct acpi_video_enumerated_device *cocci_id/* drivers/acpi/acpi_video.c 1268 */;
	struct acpi_video_bus_cap {
		u8 _DOS:1;
		u8 _DOD:1;
		u8 _ROM:1;
		u8 _GPD:1;
		u8 _SPD:1;
		u8 _VPO:1;
		u8 reserved:2;
	} cocci_id/* drivers/acpi/acpi_video.c 124 */;
	struct acpi_video_bus_flags {
		u8 multihead:1;
		u8 rom:1;
		u8 post:1;
		u8 reserved:5;
	} cocci_id/* drivers/acpi/acpi_video.c 117 */;
	struct acpi_video_device cocci_id/* drivers/acpi/acpi_video.c 1162 */;
	struct acpi_video_device_attrib *cocci_id/* drivers/acpi/acpi_video.c 1154 */;
	unsigned long cocci_id/* drivers/acpi/acpi_video.c 1117 */;
	struct pci_dev *cocci_id/* drivers/acpi/acpi_video.c 1068 */;
	struct acpi_driver cocci_id/* drivers/acpi/acpi_video.c 106 */;
	void cocci_id/* drivers/acpi/acpi_video.c 1044 */;
	const struct acpi_device_id cocci_id/* drivers/acpi/acpi_video.c 100 */[];
}
