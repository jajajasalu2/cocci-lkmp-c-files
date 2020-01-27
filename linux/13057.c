cocci_test_suite() {
	size_t cocci_id/* drivers/soc/qcom/smd-rpm.c 98 */;
	void *cocci_id/* drivers/soc/qcom/smd-rpm.c 97 */;
	u32 cocci_id/* drivers/soc/qcom/smd-rpm.c 96 */;
	struct qcom_smd_rpm *cocci_id/* drivers/soc/qcom/smd-rpm.c 94 */;
	int cocci_id/* drivers/soc/qcom/smd-rpm.c 94 */;
	struct qcom_rpm_message {
		__le32 msg_type;
		__le32 length;
		union {
			__le32 msg_id;
			u8 message[0];
		};
	} cocci_id/* drivers/soc/qcom/smd-rpm.c 72 */;
	struct qcom_rpm_request {
		__le32 msg_id;
		__le32 flags;
		__le32 type;
		__le32 id;
		__le32 data_len;
	} cocci_id/* drivers/soc/qcom/smd-rpm.c 55 */;
	struct qcom_rpm_header {
		__le32 service_type;
		__le32 length;
	} cocci_id/* drivers/soc/qcom/smd-rpm.c 42 */;
	struct qcom_smd_rpm {
		struct rpmsg_endpoint *rpm_channel;
		struct platform_device *icc;
		struct device *dev;
		struct completion ack;
		struct mutex lock;
		int ack_status;
	} cocci_id/* drivers/soc/qcom/smd-rpm.c 27 */;
	void __exit cocci_id/* drivers/soc/qcom/smd-rpm.c 260 */;
	void cocci_id/* drivers/soc/qcom/smd-rpm.c 260 */;
	int __init cocci_id/* drivers/soc/qcom/smd-rpm.c 254 */;
	struct rpmsg_driver cocci_id/* drivers/soc/qcom/smd-rpm.c 244 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/smd-rpm.c 231 */[];
	struct qcom_rpm_message *cocci_id/* drivers/soc/qcom/smd-rpm.c 170 */;
	struct qcom_rpm_message cocci_id/* drivers/soc/qcom/smd-rpm.c 164 */;
	char cocci_id/* drivers/soc/qcom/smd-rpm.c 159 */[32];
	struct qcom_rpm_header cocci_id/* drivers/soc/qcom/smd-rpm.c 157 */;
	const u8 *cocci_id/* drivers/soc/qcom/smd-rpm.c 157 */;
	const struct qcom_rpm_message *cocci_id/* drivers/soc/qcom/smd-rpm.c 155 */;
	const struct qcom_rpm_header *cocci_id/* drivers/soc/qcom/smd-rpm.c 153 */;
	struct rpmsg_device *cocci_id/* drivers/soc/qcom/smd-rpm.c 147 */;
	struct qcom_rpm_request cocci_id/* drivers/soc/qcom/smd-rpm.c 121 */;
	struct {
		struct qcom_rpm_header hdr;
		struct qcom_rpm_request req;
		u8 payload[];
	} *cocci_id/* drivers/soc/qcom/smd-rpm.c 103 */;
	unsigned cocci_id/* drivers/soc/qcom/smd-rpm.c 100 */;
}
