cocci_test_suite() {
	struct pip_fixed_info *cocci_id/* drivers/input/mouse/cyapa_gen6.c 89 */;
	const struct cyapa_dev_ops cocci_id/* drivers/input/mouse/cyapa_gen6.c 724 */;
	struct device *cocci_id/* drivers/input/mouse/cyapa_gen6.c 667 */;
	struct pip_fixed_info {
		u8 silicon_id_high;
		u8 silicon_id_low;
		u8 family_id;
	} cocci_id/* drivers/input/mouse/cyapa_gen6.c 64 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 609 */[GEN6_MAX_RX_NUM];
	struct device_attribute *cocci_id/* drivers/input/mouse/cyapa_gen6.c 606 */;
	char *cocci_id/* drivers/input/mouse/cyapa_gen6.c 606 */;
	ssize_t cocci_id/* drivers/input/mouse/cyapa_gen6.c 605 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 570 */[GEN6_MAX_RX_NUM + 10];
	struct retrieve_data_struct_cmd {
		struct pip_app_cmd_head head;
		__le16 read_offset;
		__le16 read_length;
		u8 data_id;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen6.c 564 */;
	int *cocci_id/* drivers/input/mouse/cyapa_gen6.c 562 */;
	struct pip_app_resp_head {
		__le16 length;
		u8 report_id;
		u8 resv;
		u8 cmd_code;
		u8 data_status;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen6.c 51 */;
	struct pip_app_cmd_head {
		__le16 addr;
		__le16 length;
		u8 report_id;
		u8 resv;
		u8 cmd_code;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen6.c 43 */;
	enum cyapa_pm_stage cocci_id/* drivers/input/mouse/cyapa_gen6.c 428 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 393 */[11];
	struct gen6_interval_setting *cocci_id/* drivers/input/mouse/cyapa_gen6.c 389 */;
	u8 *cocci_id/* drivers/input/mouse/cyapa_gen6.c 373 */;
	struct gen6_set_interval_cmd {
		__le16 addr;
		__le16 length;
		u8 report_id;
		u8 rsvd;
		u8 cmd_code;
		__le16 active_interval;
		__le16 lp1_interval;
		__le16 lp2_interval;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen6.c 344 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 323 */[6];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 322 */[];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 320 */;
	bool cocci_id/* drivers/input/mouse/cyapa_gen6.c 309 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 260 */[PIP_BL_APP_INFO_RESP_LENGTH];
	struct cyapa *cocci_id/* drivers/input/mouse/cyapa_gen6.c 258 */;
	int cocci_id/* drivers/input/mouse/cyapa_gen6.c 258 */;
	u16 cocci_id/* drivers/input/mouse/cyapa_gen6.c 198 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 196 */[PIP_READ_SYS_INFO_RESP_LENGTH];
	u8 cocci_id/* drivers/input/mouse/cyapa_gen6.c 140 */[PIP_HID_DESCRIPTOR_SIZE];
	struct pip_fixed_info cocci_id/* drivers/input/mouse/cyapa_gen6.c 139 */;
}
