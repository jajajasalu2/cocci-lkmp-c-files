cocci_test_suite() {
	struct qmp_pd cocci_id/* drivers/soc/qcom/qcom_aoss.c 93 */;
	struct qmp_pd {
		struct qmp *qmp;
		struct generic_pm_domain pd;
	} cocci_id/* drivers/soc/qcom/qcom_aoss.c 88 */;
	struct qmp {
		void __iomem *msgram;
		struct device *dev;
		struct mbox_client mbox_client;
		struct mbox_chan *mbox_chan;
		size_t offset;
		size_t size;
		wait_queue_head_t event;
		struct mutex tx_lock;
		struct clk_hw qdss_clk;
		struct genpd_onecell_data pd_data;
		struct qmp_cooling_device *cooling_devs;
	} cocci_id/* drivers/soc/qcom/qcom_aoss.c 69 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/qcom_aoss.c 602 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/qcom_aoss.c 594 */[];
	struct resource *cocci_id/* drivers/soc/qcom/qcom_aoss.c 516 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/qcom_aoss.c 514 */;
	struct qmp_cooling_device {
		struct thermal_cooling_device *cdev;
		struct qmp *qmp;
		char *name;
		bool state;
	} cocci_id/* drivers/soc/qcom/qcom_aoss.c 49 */;
	bool cocci_id/* drivers/soc/qcom/qcom_aoss.c 47 */;
	char *cocci_id/* drivers/soc/qcom/qcom_aoss.c 455 */;
	struct device_node *cocci_id/* drivers/soc/qcom/qcom_aoss.c 453 */;
	struct thermal_cooling_device_ops cocci_id/* drivers/soc/qcom/qcom_aoss.c 445 */;
	char cocci_id/* drivers/soc/qcom/qcom_aoss.c 422 */[QMP_MSG_LEN];
	unsigned long cocci_id/* drivers/soc/qcom/qcom_aoss.c 419 */;
	struct qmp_cooling_device *cocci_id/* drivers/soc/qcom/qcom_aoss.c 412 */;
	unsigned long *cocci_id/* drivers/soc/qcom/qcom_aoss.c 410 */;
	struct thermal_cooling_device *cocci_id/* drivers/soc/qcom/qcom_aoss.c 409 */;
	int cocci_id/* drivers/soc/qcom/qcom_aoss.c 409 */;
	size_t cocci_id/* drivers/soc/qcom/qcom_aoss.c 347 */;
	struct qmp_pd *cocci_id/* drivers/soc/qcom/qcom_aoss.c 346 */;
	struct device *cocci_id/* drivers/soc/qcom/qcom_aoss.c 345 */;
	struct genpd_onecell_data *cocci_id/* drivers/soc/qcom/qcom_aoss.c 344 */;
	const char *constcocci_id/* drivers/soc/qcom/qcom_aoss.c 333 */[];
	struct generic_pm_domain *cocci_id/* drivers/soc/qcom/qcom_aoss.c 328 */;
	const struct clk_init_data cocci_id/* drivers/soc/qcom/qcom_aoss.c 284 */;
	const struct clk_ops cocci_id/* drivers/soc/qcom/qcom_aoss.c 277 */;
	struct qmp cocci_id/* drivers/soc/qcom/qcom_aoss.c 264 */;
	const char cocci_id/* drivers/soc/qcom/qcom_aoss.c 263 */[QMP_MSG_LEN];
	struct clk_hw *cocci_id/* drivers/soc/qcom/qcom_aoss.c 261 */;
	long cocci_id/* drivers/soc/qcom/qcom_aoss.c 227 */;
	const void *cocci_id/* drivers/soc/qcom/qcom_aoss.c 225 */;
	irqreturn_t cocci_id/* drivers/soc/qcom/qcom_aoss.c 199 */;
	void *cocci_id/* drivers/soc/qcom/qcom_aoss.c 199 */;
	struct qmp *cocci_id/* drivers/soc/qcom/qcom_aoss.c 192 */;
	void cocci_id/* drivers/soc/qcom/qcom_aoss.c 192 */;
	u32 cocci_id/* drivers/soc/qcom/qcom_aoss.c 124 */;
}
