cocci_test_suite() {
	acpi_size cocci_id/* drivers/platform/x86/acer-wmi.c 949 */;
	void *cocci_id/* drivers/platform/x86/acer-wmi.c 949 */;
	struct wmi_interface cocci_id/* drivers/platform/x86/acer-wmi.c 939 */;
	const struct key_entry cocci_id/* drivers/platform/x86/acer-wmi.c 86 */[]__initconst;
	const struct acpi_device_id *cocci_id/* drivers/platform/x86/acer-wmi.c 848 */;
	int __init cocci_id/* drivers/platform/x86/acer-wmi.c 846 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/acer-wmi.c 837 */[]__initconst;
	struct wmab_ret *cocci_id/* drivers/platform/x86/acer-wmi.c 823 */;
	union acpi_object *cocci_id/* drivers/platform/x86/acer-wmi.c 811 */;
	struct acpi_buffer cocci_id/* drivers/platform/x86/acer-wmi.c 810 */;
	enum acer_wmi_event_ids{WMID_HOTKEY_EVENT=0x1, WMID_ACCEL_EVENT=0x5,} cocci_id/* drivers/platform/x86/acer-wmi.c 81 */;
	acpi_status cocci_id/* drivers/platform/x86/acer-wmi.c 809 */;
	struct wmab_ret cocci_id/* drivers/platform/x86/acer-wmi.c 808 */;
	struct wmab_args cocci_id/* drivers/platform/x86/acer-wmi.c 807 */;
	acpi_status __init cocci_id/* drivers/platform/x86/acer-wmi.c 805 */;
	void cocci_id/* drivers/platform/x86/acer-wmi.c 805 */;
	u8 cocci_id/* drivers/platform/x86/acer-wmi.c 698 */;
	int cocci_id/* drivers/platform/x86/acer-wmi.c 697 */;
	u32 cocci_id/* drivers/platform/x86/acer-wmi.c 695 */;
	u32 *cocci_id/* drivers/platform/x86/acer-wmi.c 695 */;
	u8 *cocci_id/* drivers/platform/x86/acer-wmi.c 688 */;
	struct acpi_buffer *cocci_id/* drivers/platform/x86/acer-wmi.c 683 */;
	struct wmab_args *cocci_id/* drivers/platform/x86/acer-wmi.c 682 */;
	struct wmab_ret {
		u32 eax;
		u32 ebx;
		u32 ecx;
		u32 edx;
		u32 eex;
	} cocci_id/* drivers/platform/x86/acer-wmi.c 674 */;
	struct wmab_args {
		u32 eax;
		u32 ebx;
		u32 ecx;
		u32 edx;
	} cocci_id/* drivers/platform/x86/acer-wmi.c 667 */;
	int __init cocci_id/* drivers/platform/x86/acer-wmi.c 576 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/acer-wmi.c 346 */[]__initconst;
	struct quirk_entry cocci_id/* drivers/platform/x86/acer-wmi.c 324 */;
	const struct dmi_system_id *cocci_id/* drivers/platform/x86/acer-wmi.c 315 */;
	struct quirk_entry *cocci_id/* drivers/platform/x86/acer-wmi.c 301 */;
	struct quirk_entry {
		u8 wireless;
		u8 mailled;
		s8 brightness;
		u8 bluetooth;
	} cocci_id/* drivers/platform/x86/acer-wmi.c 294 */;
	struct wmi_interface *cocci_id/* drivers/platform/x86/acer-wmi.c 286 */;
	struct wmi_interface {
		u32 type;
		u32 capability;
		struct acer_data data;
		struct acer_debug debug;
	} cocci_id/* drivers/platform/x86/acer-wmi.c 271 */;
	struct acer_debug {
		struct dentry *root;
		u32 wmid_devices;
	} cocci_id/* drivers/platform/x86/acer-wmi.c 260 */;
	struct acer_data {
		int mailled;
		int threeg;
		int brightness;
	} cocci_id/* drivers/platform/x86/acer-wmi.c 254 */;
	void __exit cocci_id/* drivers/platform/x86/acer-wmi.c 2278 */;
	enum interface_flags{ACER_AMW0, ACER_AMW0_V2, ACER_WMID, ACER_WMID_v2,} cocci_id/* drivers/platform/x86/acer-wmi.c 220 */;
	struct platform_device *cocci_id/* drivers/platform/x86/acer-wmi.c 2115 */;
	struct platform_driver cocci_id/* drivers/platform/x86/acer-wmi.c 2105 */;
	struct acer_data *cocci_id/* drivers/platform/x86/acer-wmi.c 2096 */;
	struct hotkey_function_type_aa {
		u8 type;
		u8 length;
		u16 handle;
		u16 commun_func_bitmap;
		u16 application_func_bitmap;
		u16 media_func_bitmap;
		u16 display_func_bitmap;
		u16 others_func_bitmap;
		u8 commun_fn_key_number;
	}__attribute__((packed)) cocci_id/* drivers/platform/x86/acer-wmi.c 193 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/acer-wmi.c 1886 */;
	struct wmid3_gds_return_value {
		u8 error_code;
		u8 ec_return_value;
		u16 devices;
		u32 reserved;
	}__attribute__((packed)) cocci_id/* drivers/platform/x86/acer-wmi.c 186 */;
	struct func_input_params cocci_id/* drivers/platform/x86/acer-wmi.c 1820 */;
	struct func_return_value cocci_id/* drivers/platform/x86/acer-wmi.c 1818 */;
	struct wmid3_gds_get_input_param {
		u8 function_num;
		u8 hotkey_number;
		u16 devices;
	}__attribute__((packed)) cocci_id/* drivers/platform/x86/acer-wmi.c 180 */;
	struct func_return_value *cocci_id/* drivers/platform/x86/acer-wmi.c 1784 */;
	struct func_input_params *cocci_id/* drivers/platform/x86/acer-wmi.c 1783 */;
	acpi_status __init cocci_id/* drivers/platform/x86/acer-wmi.c 1782 */;
	struct event_return_value *cocci_id/* drivers/platform/x86/acer-wmi.c 1737 */;
	struct wmid3_gds_set_input_param {
		u8 function_num;
		u8 hotkey_number;
		u16 devices;
		u8 volume_value;
	}__attribute__((packed)) cocci_id/* drivers/platform/x86/acer-wmi.c 173 */;
	const struct key_entry *cocci_id/* drivers/platform/x86/acer-wmi.c 1713 */;
	u16 cocci_id/* drivers/platform/x86/acer-wmi.c 1712 */;
	struct event_return_value cocci_id/* drivers/platform/x86/acer-wmi.c 1710 */;
	struct func_return_value {
		u8 error_code;
		u8 ec_return_value;
		u16 reserved;
	}__attribute__((packed)) cocci_id/* drivers/platform/x86/acer-wmi.c 167 */;
	unsigned long cocci_id/* drivers/platform/x86/acer-wmi.c 1609 */;
	char *cocci_id/* drivers/platform/x86/acer-wmi.c 1600 */;
	enum rfkill_type cocci_id/* drivers/platform/x86/acer-wmi.c 1599 */;
	struct rfkill *cocci_id/* drivers/platform/x86/acer-wmi.c 1598 */;
	const struct rfkill_ops cocci_id/* drivers/platform/x86/acer-wmi.c 1594 */;
	bool cocci_id/* drivers/platform/x86/acer-wmi.c 1580 */;
	struct func_input_params {
		u8 function_num;
		u16 commun_devices;
		u16 devices;
		u8 app_status;
		u8 app_mask;
		u8 reserved;
	}__attribute__((packed)) cocci_id/* drivers/platform/x86/acer-wmi.c 158 */;
	struct work_struct *cocci_id/* drivers/platform/x86/acer-wmi.c 1550 */;
	void cocci_id/* drivers/platform/x86/acer-wmi.c 1548 */(struct work_struct *ignored);
	s16 cocci_id/* drivers/platform/x86/acer-wmi.c 1536 */;
	union acpi_object cocci_id/* drivers/platform/x86/acer-wmi.c 1520 */[5];
	struct input_dev *cocci_id/* drivers/platform/x86/acer-wmi.c 1511 */;
	union acpi_object cocci_id/* drivers/platform/x86/acer-wmi.c 1500 */;
	acpi_handle cocci_id/* drivers/platform/x86/acer-wmi.c 1494 */;
	struct backlight_properties cocci_id/* drivers/platform/x86/acer-wmi.c 1464 */;
	struct device *cocci_id/* drivers/platform/x86/acer-wmi.c 1462 */;
	const struct backlight_ops cocci_id/* drivers/platform/x86/acer-wmi.c 1457 */;
	struct backlight_device *cocci_id/* drivers/platform/x86/acer-wmi.c 1434 */;
	struct led_classdev cocci_id/* drivers/platform/x86/acer-wmi.c 1415 */;
	enum led_brightness cocci_id/* drivers/platform/x86/acer-wmi.c 1410 */;
	struct led_classdev *cocci_id/* drivers/platform/x86/acer-wmi.c 1409 */;
	void __init cocci_id/* drivers/platform/x86/acer-wmi.c 1392 */;
	struct event_return_value {
		u8 function;
		u8 key_num;
		u16 device_state;
		u32 reserved;
	}__attribute__((packed)) cocci_id/* drivers/platform/x86/acer-wmi.c 126 */;
	struct hotkey_function_type_aa *cocci_id/* drivers/platform/x86/acer-wmi.c 1236 */;
	const struct dmi_header *cocci_id/* drivers/platform/x86/acer-wmi.c 1234 */;
	struct wmid3_gds_set_input_param cocci_id/* drivers/platform/x86/acer-wmi.c 1142 */;
	struct wmid3_gds_return_value *cocci_id/* drivers/platform/x86/acer-wmi.c 1093 */;
	struct wmid3_gds_get_input_param cocci_id/* drivers/platform/x86/acer-wmi.c 1064 */;
	struct wmid3_gds_return_value cocci_id/* drivers/platform/x86/acer-wmi.c 1061 */;
	char cocci_id/* drivers/platform/x86/acer-wmi.c 1019 */;
}
