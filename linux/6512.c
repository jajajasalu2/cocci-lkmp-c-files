cocci_test_suite() {
	struct transport_container *cocci_id/* drivers/scsi/raid_class.c 94 */;
	struct scsi_device *cocci_id/* drivers/scsi/raid_class.c 66 */;
	struct attribute_container *cocci_id/* drivers/scsi/raid_class.c 59 */;
	struct transport_container cocci_id/* drivers/scsi/raid_class.c 48 */;
	struct raid_template cocci_id/* drivers/scsi/raid_class.c 42 */;
	struct raid_component {
		struct list_head node;
		struct device dev;
		int num;
	} cocci_id/* drivers/scsi/raid_class.c 32 */;
	void cocci_id/* drivers/scsi/raid_class.c 288 */;
	int cocci_id/* drivers/scsi/raid_class.c 264 */;
	struct raid_internal cocci_id/* drivers/scsi/raid_class.c 262 */;
	struct raid_internal *cocci_id/* drivers/scsi/raid_class.c 262 */;
	struct raid_function_template *cocci_id/* drivers/scsi/raid_class.c 260 */;
	struct raid_template *cocci_id/* drivers/scsi/raid_class.c 259 */;
	struct raid_data *cocci_id/* drivers/scsi/raid_class.c 228 */;
	struct raid_component *cocci_id/* drivers/scsi/raid_class.c 227 */;
	struct device *cocci_id/* drivers/scsi/raid_class.c 221 */;
	struct raid_internal {
		struct raid_template r;
		struct raid_function_template *f;
		struct device_attribute private_attrs[RAID_NUM_ATTRS];
		struct device_attribute *attrs[RAID_NUM_ATTRS + 1];
	} cocci_id/* drivers/scsi/raid_class.c 22 */;
	struct raid_component cocci_id/* drivers/scsi/raid_class.c 215 */;
	struct device_attribute *cocci_id/* drivers/scsi/raid_class.c 176 */;
	ssize_t cocci_id/* drivers/scsi/raid_class.c 175 */;
	char *cocci_id/* drivers/scsi/raid_class.c 163 */;
	enum raid_level cocci_id/* drivers/scsi/raid_class.c 160 */;
	const char *cocci_id/* drivers/scsi/raid_class.c 160 */;
	struct {
		enum raid_level value;
		char *name;
	} cocci_id/* drivers/scsi/raid_class.c 142 */[];
	enum raid_state cocci_id/* drivers/scsi/raid_class.c 128 */;
	const struct {
		enum raid_state value;
		char *name;
	} cocci_id/* drivers/scsi/raid_class.c 117 */[];
}
