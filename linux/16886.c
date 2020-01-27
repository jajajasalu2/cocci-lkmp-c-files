cocci_test_suite() {
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 836 */[32];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 769 */[PIP_HID_DESCRIPTOR_SIZE];
	cb_sort cocci_id/* drivers/input/mouse/cyapa_gen5.c 569 */;
	int *cocci_id/* drivers/input/mouse/cyapa_gen5.c 567 */;
	struct cyapa_pip_cmd_states *cocci_id/* drivers/input/mouse/cyapa_gen5.c 540 */;
	unsigned long cocci_id/* drivers/input/mouse/cyapa_gen5.c 538 */;
	u8 *cocci_id/* drivers/input/mouse/cyapa_gen5.c 537 */;
	size_t cocci_id/* drivers/input/mouse/cyapa_gen5.c 537 */;
	struct cyapa *cocci_id/* drivers/input/mouse/cyapa_gen5.c 536 */;
	int cocci_id/* drivers/input/mouse/cyapa_gen5.c 535 */;
	struct cyapa_pip_report_data *cocci_id/* drivers/input/mouse/cyapa_gen5.c 526 */;
	enum cyapa_pm_stage cocci_id/* drivers/input/mouse/cyapa_gen5.c 447 */;
	struct input_dev *cocci_id/* drivers/input/mouse/cyapa_gen5.c 445 */;
	int cocci_id/* drivers/input/mouse/cyapa_gen5.c 345 */(struct cyapa *cyapa,
							       struct cyapa_pip_report_data *report_data);
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 342 */[];
	struct gen5_retrieve_panel_scan_data {
		__le16 read_offset;
		__le16 read_elements;
		u8 data_id;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 331 */;
	struct gen5_app_get_parameter_data {
		u8 parameter_id;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 327 */;
	struct gen5_app_set_parameter_data {
		u8 parameter_id;
		u8 parameter_size;
		__le32 value;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 321 */;
	struct pip_app_cmd_head {
		__le16 addr;
		__le16 length;
		u8 report_id;
		u8 rsvd;
		u8 cmd_code;
		u8 parameter_data[0];
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 306 */;
	struct tsg_bl_flash_row_head {
		u8 flash_array_id;
		__le16 flash_row_id;
		u8 flash_data[0];
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 300 */;
	const struct cyapa_dev_ops cocci_id/* drivers/input/mouse/cyapa_gen5.c 2887 */;
	struct tsg_bl_metadata_row_params {
		__le16 size;
		__le16 maximum_size;
		__le32 app_start;
		__le16 app_len;
		__le16 app_crc;
		__le32 app_entry;
		__le32 upgrade_start;
		__le16 upgrade_len;
		__le16 entry_row_crc;
		u8 padding[36];
		__le16 metadata_crc;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 285 */;
	unsigned int cocci_id/* drivers/input/mouse/cyapa_gen5.c 2812 */;
	struct pip_bl_initiate_cmd_data {
		u8 key[CYAPA_TSG_BL_KEY_SIZE];
		u8 metadata_raw_parameter[CYAPA_TSG_FLASH_MAP_METADATA_SIZE];
		__le16 metadata_crc;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 278 */;
	struct cyapa_pip_report_data cocci_id/* drivers/input/mouse/cyapa_gen5.c 2767 */;
	const struct cyapa_pip_touch_record *cocci_id/* drivers/input/mouse/cyapa_gen5.c 2709 */;
	const struct cyapa_pip_report_data *cocci_id/* drivers/input/mouse/cyapa_gen5.c 2674 */;
	struct pip_bl_cmd_head {
		__le16 addr;
		__le16 length;
		u8 report_id;
		u8 rsvd;
		struct pip_bl_packet_start packet_start;
		u8 data[0];
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 267 */;
	struct pip_bl_packet_end {
		__le16 crc;
		u8 eop;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 262 */;
	struct pip_bl_packet_start {
		u8 sop;
		u8 cmd_code;
		__le16 data_length;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 256 */;
	struct device *cocci_id/* drivers/input/mouse/cyapa_gen5.c 2541 */;
	struct cyapa_tsg_bin_image {
		struct cyapa_tsg_bin_image_head image_head;
		struct cyapa_tsg_bin_image_data_record records[0];
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 251 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 2479 */[PIP_READ_SYS_INFO_RESP_LENGTH];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 2448 */[PIP_BL_APP_INFO_RESP_LENGTH];
	struct cyapa_tsg_bin_image_data_record {
		u8 flash_array_id;
		__be16 row_number;
		__be16 record_len;
		u8 record_data[CYAPA_TSG_FW_ROW_SIZE];
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 242 */;
	struct device_attribute *cocci_id/* drivers/input/mouse/cyapa_gen5.c 2301 */;
	char *cocci_id/* drivers/input/mouse/cyapa_gen5.c 2301 */;
	struct cyapa_tsg_bin_image_head {
		u8 head_size;
		u8 ttda_driver_major_version;
		u8 ttda_driver_minor_version;
		u8 fw_major_version;
		u8 fw_minor_version;
		u8 fw_revision_control_number[8];
		u8 silicon_id_hi;
		u8 silicon_id_lo;
		u8 chip_revision;
		u8 family_id;
		u8 bl_ver_maj;
		u8 bl_ver_min;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 227 */;
	s32 *cocci_id/* drivers/input/mouse/cyapa_gen5.c 2221 */;
	struct cyapa_pip_report_data {
		u8 report_head[PIP_TOUCH_REPORT_HEAD_SIZE];
		struct cyapa_pip_touch_record touch_records[10];
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 222 */;
	s32 cocci_id/* drivers/input/mouse/cyapa_gen5.c 2218 */;
	struct gen5_retrieve_panel_scan_data *cocci_id/* drivers/input/mouse/cyapa_gen5.c 2211 */;
	ssize_t cocci_id/* drivers/input/mouse/cyapa_gen5.c 2177 */;
	bool cocci_id/* drivers/input/mouse/cyapa_gen5.c 1944 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1938 */[256];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1937 */[12];
	void cocci_id/* drivers/input/mouse/cyapa_gen5.c 1901 */;
	const char *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1821 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1599 */[5];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1548 */[7];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1547 */[10];
	struct pip_app_cmd_head *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1546 */;
	struct gen5_app_get_parameter_data cocci_id/* drivers/input/mouse/cyapa_gen5.c 1504 */;
	struct pip_app_cmd_head cocci_id/* drivers/input/mouse/cyapa_gen5.c 1503 */;
	u16 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1496 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1493 */[11];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1491 */[CYAPA_TSG_MAX_CMD_SIZE];
	struct gen5_app_get_parameter_data *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1490 */;
	u16 *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1487 */;
	u32 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1473 */;
	struct gen5_app_set_parameter_data cocci_id/* drivers/input/mouse/cyapa_gen5.c 1446 */;
	struct gen5_app_set_parameter_data *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1433 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1413 */[6];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1412 */[8];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1410 */;
	struct cyapa_pip_touch_record {
		u8 touch_type;
		u8 touch_tip_event_id;
		u8 x_lo;
		u8 x_hi;
		u8 y_lo;
		u8 y_hi;
		u8 z;
		u8 major_axis_len;
		u8 minor_axis_len;
		u8 major_tool_len;
		u8 minor_tool_len;
		u8 orientation;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen5.c 139 */;
	struct tsg_bl_flash_row_head cocci_id/* drivers/input/mouse/cyapa_gen5.c 1341 */;
	struct tsg_bl_flash_row_head *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1318 */;
	const u8 *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1300 */;
	const void *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1274 */;
	struct cyapa_tsg_bin_image_head *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1253 */;
	const struct tsg_bl_metadata_row_params *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1243 */;
	const struct cyapa_tsg_bin_image_data_record *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1242 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen5.c 1168 */[2];
	struct pip_bl_packet_start cocci_id/* drivers/input/mouse/cyapa_gen5.c 1098 */;
	struct pip_bl_packet_end cocci_id/* drivers/input/mouse/cyapa_gen5.c 1069 */;
	struct pip_bl_cmd_head cocci_id/* drivers/input/mouse/cyapa_gen5.c 1068 */;
	struct pip_bl_packet_end *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1050 */;
	struct pip_bl_initiate_cmd_data *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1049 */;
	struct pip_bl_packet_start *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1048 */;
	struct pip_bl_cmd_head *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1047 */;
	struct cyapa_tsg_bin_image_data_record cocci_id/* drivers/input/mouse/cyapa_gen5.c 1040 */;
	const struct firmware *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1033 */;
	struct cyapa_tsg_bin_image_data_record *cocci_id/* drivers/input/mouse/cyapa_gen5.c 1032 */;
}
