cocci_test_suite() {
	unsigned long cocci_id/* drivers/soc/qcom/apr.c 77 */;
	struct apr_rx_buf *cocci_id/* drivers/soc/qcom/apr.c 76 */;
	u32 cocci_id/* drivers/soc/qcom/apr.c 73 */;
	struct rpmsg_device *cocci_id/* drivers/soc/qcom/apr.c 72 */;
	void *cocci_id/* drivers/soc/qcom/apr.c 72 */;
	void cocci_id/* drivers/soc/qcom/apr.c 65 */;
	void __exit cocci_id/* drivers/soc/qcom/apr.c 432 */;
	struct apr_pkt *cocci_id/* drivers/soc/qcom/apr.c 43 */;
	int __init cocci_id/* drivers/soc/qcom/apr.c 419 */;
	struct rpmsg_driver cocci_id/* drivers/soc/qcom/apr.c 409 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/apr.c 402 */[];
	struct module *cocci_id/* drivers/soc/qcom/apr.c 382 */;
	struct apr_driver *cocci_id/* drivers/soc/qcom/apr.c 382 */;
	int cocci_id/* drivers/soc/qcom/apr.c 382 */;
	struct apr_device_id cocci_id/* drivers/soc/qcom/apr.c 309 */;
	struct apr_rx_buf {
		struct list_head node;
		int len;
		uint8_t buf[];
	} cocci_id/* drivers/soc/qcom/apr.c 29 */;
	struct apr_device *cocci_id/* drivers/soc/qcom/apr.c 261 */;
	struct apr *cocci_id/* drivers/soc/qcom/apr.c 260 */;
	const struct apr_device_id *cocci_id/* drivers/soc/qcom/apr.c 258 */;
	struct device_node *cocci_id/* drivers/soc/qcom/apr.c 257 */;
	struct device *cocci_id/* drivers/soc/qcom/apr.c 257 */;
	struct bus_type cocci_id/* drivers/soc/qcom/apr.c 248 */;
	struct kobj_uevent_env *cocci_id/* drivers/soc/qcom/apr.c 236 */;
	struct device_driver *cocci_id/* drivers/soc/qcom/apr.c 187 */;
	struct apr cocci_id/* drivers/soc/qcom/apr.c 172 */;
	struct work_struct *cocci_id/* drivers/soc/qcom/apr.c 170 */;
	struct apr {
		struct rpmsg_endpoint *ch;
		struct device *dev;
		spinlock_t svcs_lock;
		spinlock_t rx_lock;
		struct idr svcs_idr;
		int dest_domain_id;
		struct workqueue_struct *rxwq;
		struct work_struct rx_work;
		struct list_head rx_list;
	} cocci_id/* drivers/soc/qcom/apr.c 17 */;
	struct apr_hdr *cocci_id/* drivers/soc/qcom/apr.c 108 */;
	struct apr_resp_pkt cocci_id/* drivers/soc/qcom/apr.c 107 */;
	uint16_t cocci_id/* drivers/soc/qcom/apr.c 104 */;
}
