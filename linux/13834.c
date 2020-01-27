cocci_test_suite() {
	const struct cec_connector_info *cocci_id/* drivers/media/cec/cec-notifier.c 94 */;
	struct cec_notifier cocci_id/* drivers/media/cec/cec-notifier.c 77 */;
	struct kref *cocci_id/* drivers/media/cec/cec-notifier.c 74 */;
	struct device_node *cocci_id/* drivers/media/cec/cec-notifier.c 233 */;
	struct platform_device *cocci_id/* drivers/media/cec/cec-notifier.c 231 */;
	void (*cocci_id/* drivers/media/cec/cec-notifier.c 203 */)(struct cec_adapter *adap,
								   u16 pa);
	struct cec_notifier {
		struct mutex lock;
		struct list_head head;
		struct kref kref;
		struct device *hdmi_dev;
		struct cec_connector_info conn_info;
		const char *conn_name;
		struct cec_adapter *cec_adap;
		void (*callback)(struct cec_adapter *adap, u16 pa);
		u16 phys_addr;
	} cocci_id/* drivers/media/cec/cec-notifier.c 20 */;
	const u8 *cocci_id/* drivers/media/cec/cec-notifier.c 195 */;
	const struct edid *cocci_id/* drivers/media/cec/cec-notifier.c 187 */;
	u16 cocci_id/* drivers/media/cec/cec-notifier.c 171 */;
	void cocci_id/* drivers/media/cec/cec-notifier.c 156 */;
	struct cec_adapter *cocci_id/* drivers/media/cec/cec-notifier.c 135 */;
	const char *cocci_id/* drivers/media/cec/cec-notifier.c 134 */;
	struct device *cocci_id/* drivers/media/cec/cec-notifier.c 134 */;
	struct cec_notifier *cocci_id/* drivers/media/cec/cec-notifier.c 133 */;
}
