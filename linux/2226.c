cocci_test_suite() {
	struct devices_idr_iter cocci_id/* drivers/target/target_core_device.c 903 */;
	int (*cocci_id/* drivers/target/target_core_device.c 900 */)(struct se_device *dev,
								     void *data);
	struct devices_idr_iter *cocci_id/* drivers/target/target_core_device.c 865 */;
	void *cocci_id/* drivers/target/target_core_device.c 862 */;
	struct devices_idr_iter {
		struct config_item *prev_item;
		int (*fn)(struct se_device *dev, void *data);
		void *data;
	} cocci_id/* drivers/target/target_core_device.c 856 */;
	sector_t cocci_id/* drivers/target/target_core_device.c 841 */;
	struct request_queue *cocci_id/* drivers/target/target_core_device.c 816 */;
	struct se_dev_attrib *cocci_id/* drivers/target/target_core_device.c 815 */;
	struct t10_pi_tuple cocci_id/* drivers/target/target_core_device.c 735 */;
	const char *cocci_id/* drivers/target/target_core_device.c 724 */;
	struct t10_wwn *cocci_id/* drivers/target/target_core_device.c 709 */;
	bool cocci_id/* drivers/target/target_core_device.c 632 */;
	struct se_lun_acl *cocci_id/* drivers/target/target_core_device.c 630 */;
	struct se_lun_acl cocci_id/* drivers/target/target_core_device.c 615 */;
	int *cocci_id/* drivers/target/target_core_device.c 605 */;
	u64 cocci_id/* drivers/target/target_core_device.c 604 */;
	u32 cocci_id/* drivers/target/target_core_device.c 531 */;
	struct t10_vpd *cocci_id/* drivers/target/target_core_device.c 520 */;
	struct se_lun *cocci_id/* drivers/target/target_core_device.c 477 */;
	struct se_device *cocci_id/* drivers/target/target_core_device.c 477 */;
	int cocci_id/* drivers/target/target_core_device.c 477 */;
	struct se_dev_entry *cocci_id/* drivers/target/target_core_device.c 457 */;
	struct se_node_acl *cocci_id/* drivers/target/target_core_device.c 456 */;
	struct se_portal_group *cocci_id/* drivers/target/target_core_device.c 454 */;
	void cocci_id/* drivers/target/target_core_device.c 454 */;
	struct se_dev_entry cocci_id/* drivers/target/target_core_device.c 289 */;
	struct kref *cocci_id/* drivers/target/target_core_device.c 287 */;
	u16 cocci_id/* drivers/target/target_core_device.c 215 */;
	struct se_session *cocci_id/* drivers/target/target_core_device.c 195 */;
	unsigned long cocci_id/* drivers/target/target_core_device.c 154 */;
	struct se_tmr_req *cocci_id/* drivers/target/target_core_device.c 153 */;
	unsigned int cocci_id/* drivers/target/target_core_device.c 1075 */;
	unsigned char *cocci_id/* drivers/target/target_core_device.c 1073 */;
	sense_reason_t (*cocci_id/* drivers/target/target_core_device.c 1071 */)(struct se_cmd *cmd);
	struct se_cmd *cocci_id/* drivers/target/target_core_device.c 1070 */;
	sense_reason_t cocci_id/* drivers/target/target_core_device.c 1069 */;
	struct se_hba *cocci_id/* drivers/target/target_core_device.c 1056 */;
	char cocci_id/* drivers/target/target_core_device.c 1023 */[];
}
