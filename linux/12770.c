cocci_test_suite() {
	struct qcom_glink_pipe *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 95 */;
	struct glink_rpm_pipe {
		struct qcom_glink_pipe native;
		void __iomem *tail;
		void __iomem *head;
		void __iomem *fifo;
	} cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 47 */;
	struct rpm_toc {
		__le32 magic;
		__le32 count;
		struct rpm_toc_entry entries[];
	}__packed cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 40 */;
	void __exit cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 343 */;
	void cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 343 */;
	struct rpm_toc_entry {
		__le32 id;
		__le32 offset;
		__le32 size;
	}__packed cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 34 */;
	int __init cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 337 */;
	struct platform_driver cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 328 */;
	const struct of_device_id cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 322 */[];
	struct glink_rpm_pipe cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 32 */;
	struct rpm_toc_entry cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 27 */;
	struct resource cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 266 */;
	struct device_node *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 262 */;
	struct rpm_toc cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 26 */;
	struct qcom_glink *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 259 */;
	struct platform_device *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 257 */;
	void *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 193 */;
	unsigned int cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 190 */;
	struct rpm_toc *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 188 */;
	struct glink_rpm_pipe *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 185 */;
	size_t cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 184 */;
	void __iomem *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 183 */;
	struct device *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 182 */;
	int cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 182 */;
	char cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 157 */[8];
	const void *cocci_id/* drivers/rpmsg/qcom_glink_rpm.c 150 */;
}
