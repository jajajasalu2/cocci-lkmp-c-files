cocci_test_suite() {
	struct gb_camera_debugfs_buffer *cocci_id/* drivers/staging/greybus/camera.c 874 */;
	char *cocci_id/* drivers/staging/greybus/camera.c 872 */;
	ssize_t cocci_id/* drivers/staging/greybus/camera.c 871 */;
	const struct gb_camera_ops cocci_id/* drivers/staging/greybus/camera.c 860 */;
	const struct gb_camera_fmt_info cocci_id/* drivers/staging/greybus/camera.c 83 */[];
	struct gb_camera_stream *cocci_id/* drivers/staging/greybus/camera.c 786 */;
	u16 cocci_id/* drivers/staging/greybus/camera.c 761 */;
	enum v4l2_mbus_pixelcode cocci_id/* drivers/staging/greybus/camera.c 761 */;
	struct gb_camera_fmt_info {
		enum v4l2_mbus_pixelcode mbus_code;
		unsigned int gb_format;
		unsigned int bpp;
	} cocci_id/* drivers/staging/greybus/camera.c 76 */;
	struct gb_message *cocci_id/* drivers/staging/greybus/camera.c 724 */;
	struct gb_camera_metadata_request *cocci_id/* drivers/staging/greybus/camera.c 723 */;
	struct gb_camera_flush_response cocci_id/* drivers/staging/greybus/camera.c 695 */;
	u32 *cocci_id/* drivers/staging/greybus/camera.c 693 */;
	struct gb_camera_stream_config {
		unsigned int width;
		unsigned int height;
		unsigned int format;
		unsigned int vc;
		unsigned int dt[2];
		unsigned int max_size;
	} cocci_id/* drivers/staging/greybus/camera.c 67 */;
	struct gb_camera_capture_request *cocci_id/* drivers/staging/greybus/camera.c 658 */;
	const void *cocci_id/* drivers/staging/greybus/camera.c 656 */;
	size_t cocci_id/* drivers/staging/greybus/camera.c 656 */;
	unsigned int cocci_id/* drivers/staging/greybus/camera.c 655 */;
	u32 cocci_id/* drivers/staging/greybus/camera.c 654 */;
	struct gb_camera_stream_config_response *cocci_id/* drivers/staging/greybus/camera.c 590 */;
	struct gb_camera_stream_config_request *cocci_id/* drivers/staging/greybus/camera.c 554 */;
	struct gb_camera_configure_streams_response *cocci_id/* drivers/staging/greybus/camera.c 528 */;
	struct gb_camera_configure_streams_request *cocci_id/* drivers/staging/greybus/camera.c 527 */;
	struct gb_camera_csi_params *cocci_id/* drivers/staging/greybus/camera.c 525 */;
	struct gb_camera_stream_config *cocci_id/* drivers/staging/greybus/camera.c 524 */;
	unsigned int *cocci_id/* drivers/staging/greybus/camera.c 522 */;
	void *cocci_id/* drivers/staging/greybus/camera.c 509 */;
	struct gb_camera {
		struct gb_bundle *bundle;
		struct gb_connection *connection;
		struct gb_connection *data_connection;
		u16 data_cport_id;
		struct mutex mutex;
		enum gb_camera_state state;
		struct {
			struct dentry *root;
			struct gb_camera_debugfs_buffer *buffers;
		} debugfs;
		struct gb_camera_module module;
	} cocci_id/* drivers/staging/greybus/camera.c 50 */;
	u8 *cocci_id/* drivers/staging/greybus/camera.c 490 */;
	size_t *cocci_id/* drivers/staging/greybus/camera.c 490 */;
	struct gb_camera *cocci_id/* drivers/staging/greybus/camera.c 489 */;
	int cocci_id/* drivers/staging/greybus/camera.c 489 */;
	struct ap_csi_config_request cocci_id/* drivers/staging/greybus/camera.c 384 */;
	struct ap_csi_config_request {
		__u8 csi_id;
		__u8 flags;
#define GB_CAMERA_CSI_FLAG_CLOCK_CONTINUOUS 0x01
		__u8 num_lanes;
		__u8 padding;
		__le32 csi_clk_freq;
		__le32 max_pkt_size;
	}__packed cocci_id/* drivers/staging/greybus/camera.c 360 */;
	enum gb_camera_state{GB_CAMERA_STATE_UNCONFIGURED, GB_CAMERA_STATE_CONFIGURED,} cocci_id/* drivers/staging/greybus/camera.c 35 */;
	struct gb_interface *cocci_id/* drivers/staging/greybus/camera.c 338 */;
	struct gb_svc *cocci_id/* drivers/staging/greybus/camera.c 308 */;
	bool cocci_id/* drivers/staging/greybus/camera.c 306 */;
	u8 cocci_id/* drivers/staging/greybus/camera.c 305 */;
	struct gb_camera_debugfs_buffer {
		char data[PAGE_SIZE];
		size_t length;
	} cocci_id/* drivers/staging/greybus/camera.c 30 */;
	const int cocci_id/* drivers/staging/greybus/camera.c 270 */;
	enum gb_camera_debugs_buffer_id{GB_CAMERA_DEBUGFS_BUFFER_CAPABILITIES, GB_CAMERA_DEBUGFS_BUFFER_STREAMS, GB_CAMERA_DEBUGFS_BUFFER_CAPTURE, GB_CAMERA_DEBUGFS_BUFFER_FLUSH, GB_CAMERA_DEBUGFS_BUFFER_MAX,} cocci_id/* drivers/staging/greybus/camera.c 22 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/camera.c 192 */;
	const struct gb_camera_fmt_info *cocci_id/* drivers/staging/greybus/camera.c 166 */;
	struct greybus_driver cocci_id/* drivers/staging/greybus/camera.c 1379 */;
	const struct dev_pm_ops cocci_id/* drivers/staging/greybus/camera.c 1375 */;
	struct device *cocci_id/* drivers/staging/greybus/camera.c 1350 */;
	const struct greybus_bundle_id cocci_id/* drivers/staging/greybus/camera.c 1331 */[];
	struct gb_bundle *cocci_id/* drivers/staging/greybus/camera.c 1318 */;
	struct greybus_descriptor_cport *cocci_id/* drivers/staging/greybus/camera.c 1253 */;
	const struct greybus_bundle_id *cocci_id/* drivers/staging/greybus/camera.c 1236 */;
	struct gb_camera_module cocci_id/* drivers/staging/greybus/camera.c 1231 */;
	struct gb_camera_module *cocci_id/* drivers/staging/greybus/camera.c 1230 */;
	struct kref *cocci_id/* drivers/staging/greybus/camera.c 1228 */;
	void cocci_id/* drivers/staging/greybus/camera.c 1209 */;
	const struct gb_camera_debugfs_entry *cocci_id/* drivers/staging/greybus/camera.c 1185 */;
	char cocci_id/* drivers/staging/greybus/camera.c 1167 */[27];
	struct gb_connection *cocci_id/* drivers/staging/greybus/camera.c 1166 */;
	const struct file_operations cocci_id/* drivers/staging/greybus/camera.c 1158 */;
	struct inode *cocci_id/* drivers/staging/greybus/camera.c 1141 */;
	struct file *cocci_id/* drivers/staging/greybus/camera.c 1141 */;
	const char __user *cocci_id/* drivers/staging/greybus/camera.c 1112 */;
	loff_t *cocci_id/* drivers/staging/greybus/camera.c 1091 */;
	char __user *cocci_id/* drivers/staging/greybus/camera.c 1090 */;
	const struct gb_camera_debugfs_entry cocci_id/* drivers/staging/greybus/camera.c 1066 */[];
	struct gb_camera_debugfs_entry {
		const char *name;
		unsigned int mask;
		unsigned int buffer;
		ssize_t (*execute)(struct gb_camera *gcam, char *buf, size_t len);
	} cocci_id/* drivers/staging/greybus/camera.c 1059 */;
}
