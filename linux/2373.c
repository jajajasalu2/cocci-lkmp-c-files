cocci_test_suite() {
	struct qcom_wcnss *cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 99 */;
	const struct iris_data *cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 98 */;
	struct platform_device *cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 96 */;
	struct qcom_iris *cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 90 */;
	void cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 90 */;
	int cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 68 */;
	struct wcnss_vreg_info cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 36 */[];
	const struct iris_data cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 35 */;
	struct iris_data {
		const struct wcnss_vreg_info *vregs;
		size_t num_vregs;
		bool use_48mhz_xo;
	} cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 28 */;
	struct qcom_iris {
		struct device *dev;
		struct clk *xo_clk;
		struct regulator_bulk_data *vregs;
		size_t num_vregs;
	} cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 19 */;
	struct platform_driver cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 168 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 160 */[];
	struct regulator_bulk_data cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 121 */;
	struct qcom_iris cocci_id/* drivers/remoteproc/qcom_wcnss_iris.c 104 */;
}
