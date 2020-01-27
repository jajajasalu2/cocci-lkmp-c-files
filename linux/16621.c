cocci_test_suite() {
	struct smsg_callback cocci_id/* drivers/s390/net/smsgiucv.c 96 */;
	void (*cocci_id/* drivers/s390/net/smsgiucv.c 92 */)(const char *from,
							     char *str);
	const char *cocci_id/* drivers/s390/net/smsgiucv.c 91 */;
	unsigned char cocci_id/* drivers/s390/net/smsgiucv.c 60 */[9];
	unsigned char *cocci_id/* drivers/s390/net/smsgiucv.c 59 */;
	struct smsg_callback *cocci_id/* drivers/s390/net/smsgiucv.c 58 */;
	struct iucv_message *cocci_id/* drivers/s390/net/smsgiucv.c 56 */;
	struct iucv_path *cocci_id/* drivers/s390/net/smsgiucv.c 55 */;
	u8 *cocci_id/* drivers/s390/net/smsgiucv.c 47 */;
	struct iucv_handler cocci_id/* drivers/s390/net/smsgiucv.c 42 */;
	void cocci_id/* drivers/s390/net/smsgiucv.c 40 */(struct iucv_path *,
							  struct iucv_message *);
	int cocci_id/* drivers/s390/net/smsgiucv.c 39 */(struct iucv_path *,
							 u8 *, u8 *);
	int cocci_id/* drivers/s390/net/smsgiucv.c 37 */;
	struct device *cocci_id/* drivers/s390/net/smsgiucv.c 33 */;
	void (*cocci_id/* drivers/s390/net/smsgiucv.c 218 */)(struct device *);
	struct device cocci_id/* drivers/s390/net/smsgiucv.c 210 */;
	struct smsg_callback {
		struct list_head list;
		const char *prefix;
		int len;
		void (*callback)(const char *from, char *str);
	} cocci_id/* drivers/s390/net/smsgiucv.c 20 */;
	int __init cocci_id/* drivers/s390/net/smsgiucv.c 185 */;
	void __exit cocci_id/* drivers/s390/net/smsgiucv.c 177 */;
	void cocci_id/* drivers/s390/net/smsgiucv.c 177 */;
	struct device_driver cocci_id/* drivers/s390/net/smsgiucv.c 170 */;
	const struct dev_pm_ops cocci_id/* drivers/s390/net/smsgiucv.c 164 */;
}
