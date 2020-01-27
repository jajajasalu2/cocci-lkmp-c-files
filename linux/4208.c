cocci_test_suite() {
	struct ec_property_response cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 60 */;
	struct ec_property_request cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 59 */;
	struct wilco_ec_property_msg *cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 57 */;
	struct wilco_ec_message cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 35 */;
	struct ec_property_response *cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 33 */;
	struct ec_property_request *cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 32 */;
	struct wilco_ec_device *cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 31 */;
	int cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 31 */;
	struct ec_property_response {
		u8 reserved[2];
		u8 op;
		u8 property_id[4];
		u8 length;
		u8 data[WILCO_EC_PROPERTY_MAX_SIZE];
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 23 */;
	struct ec_property_request {
		u8 op;
		u8 property_id[4];
		u8 length;
		u8 data[WILCO_EC_PROPERTY_MAX_SIZE];
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 16 */;
	u8 cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 122 */;
	enum ec_property_op{EC_OP_GET=0, EC_OP_SET=1,} cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 11 */;
	struct wilco_ec_property_msg cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 104 */;
	u8 *cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 102 */;
	u32 cocci_id/* drivers/platform/chrome/wilco_ec/properties.c 101 */;
}
