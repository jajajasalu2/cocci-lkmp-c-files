cocci_test_suite() {
	void cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 871 */(struct config_group *fmt);
	struct uvcg_streaming_header cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 868 */;
	struct uvcg_streaming_header {
		struct config_item item;
		struct uvc_input_header_descriptor desc;
		unsigned linked;
		struct list_head formats;
		unsigned num_fmt;
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 858 */;
	struct uvcg_format_ptr {
		struct uvcg_format *fmt;
		struct list_head entry;
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 848 */;
	const struct uvcg_config_group_type **cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 82 */;
	const struct uvcg_config_group_type *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 80 */;
	struct uvcg_format cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 787 */;
	struct uvcg_format {
		struct config_group group;
		enum uvcg_format_type type;
		unsigned linked;
		unsigned num_frames;
		__u8 bmaControls[UVCG_STREAMING_CONTROL_SIZE];
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 777 */;
	enum uvcg_format_type{UVCG_UNCOMPRESSED=0, UVCG_MJPEG,} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 772 */;
	int cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 76 */(struct config_group *parent,
									const struct uvcg_config_group_type *type);
	struct uvcg_control_class_group *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 687 */;
	unsigned int cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 684 */;
	const char *const cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 683 */[];
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 672 */;
	struct uvc_descriptor_header **cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 595 */;
	struct mutex *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 594 */;
	struct uvcg_config_group_type {
		struct config_item_type type;
		const char *name;
		const struct uvcg_config_group_type **children;
		int (*create_children)(struct config_group *group);
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 58 */;
	struct uvcg_control_class_group cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 577 */;
	struct uvcg_control_class_group {
		struct config_group group;
		const char *name;
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 568 */;
	struct f_uvc_opts cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 54 */;
	const u32 *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 46 */;
	const void *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 44 */;
	struct uvc_camera_terminal_descriptor *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 411 */;
	ssize_t cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 404 */;
	struct uvc_processing_unit_descriptor *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 300 */;
	const struct uvcg_config_group_type *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2447 */[];
	const struct uvcg_config_group_type cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2440 */;
	struct configfs_attribute *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2433 */[];
	struct configfs_group_operations cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 242 */;
	struct configfs_item_operations cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2378 */;
	void cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2370 */;
	struct uvc_descriptor_header *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2133 */;
	struct uvcg_format_ptr *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2093 */;
	struct uvc_input_header_descriptor *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2091 */;
	size_t cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2084 */;
	struct uvc_descriptor_header ***cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2083 */;
	void **cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2082 */;
	struct uvcg_frame *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2058 */;
	struct uvcg_mjpeg cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2049 */;
	struct uvcg_mjpeg *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2048 */;
	struct uvcg_uncompressed cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2043 */;
	struct uvcg_uncompressed *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2042 */;
	struct uvcg_format *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2039 */;
	struct uvcg_streaming_header *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2031 */;
	size_t *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2026 */;
	enum uvcg_strm_type cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2024 */;
	void *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2023 */;
	int cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 2023 */;
	struct config_group *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1987 */;
	int (*cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1984 */)(void *,
									     void *,
									     void *,
									     int,
									     enum uvcg_strm_type type);
	enum uvcg_strm_type{UVCG_HEADER=0, UVCG_FORMAT, UVCG_FRAME,} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1957 */;
	struct uvcg_streaming_class_group cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1942 */;
	struct uvcg_streaming_class_group *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1941 */;
	struct f_uvc_opts *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1939 */;
	struct config_item *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1939 */;
	struct uvcg_streaming_class_group {
		struct config_group group;
		const char *name;
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1933 */;
	struct uvcg_mjpeg {
		struct uvcg_format fmt;
		struct uvc_format_mjpeg desc;
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1677 */;
	char cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1632 */[];
	struct uvcg_uncompressed {
		struct uvcg_format fmt;
		struct uvc_format_uncompressed desc;
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1428 */;
	struct uvcg_control_header cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 138 */;
	struct uvcg_control_header *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 136 */;
	u32 *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1282 */;
	char cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1248 */[1 + sizeof(u32) * 8 + 1 + 1];
	int (*cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1245 */)(char *,
									     void *);
	const char *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1244 */;
	u32 cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1230 */;
	int *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1224 */;
	char *cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1222 */;
	struct uvcg_frame cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1089 */;
	struct uvcg_frame {
		struct config_item item;
		enum uvcg_format_type fmt_type;
		struct {
			u8 b_length;
			u8 b_descriptor_type;
			u8 b_descriptor_subtype;
			u8 b_frame_index;
			u8 bm_capabilities;
			u16 w_width;
			u16 w_height;
			u32 dw_min_bit_rate;
			u32 dw_max_bit_rate;
			u32 dw_max_video_frame_buffer_size;
			u32 dw_default_frame_interval;
			u8 b_frame_interval_type;
		}__attribute__((packed)) frame;
		u32 *dw_frame_interval;
	} cocci_id/* drivers/usb/gadget/function/uvc_configfs.c 1067 */;
}
