cocci_test_suite() {
	struct sclp_ofb_sccb *cocci_id/* drivers/s390/char/sclp_config.c 96 */;
	char *cocci_id/* drivers/s390/char/sclp_config.c 93 */;
	size_t cocci_id/* drivers/s390/char/sclp_config.c 93 */;
	struct sclp_register cocci_id/* drivers/s390/char/sclp_config.c 83 */;
	struct conf_mgm_data *cocci_id/* drivers/s390/char/sclp_config.c 70 */;
	struct evbuf_header *cocci_id/* drivers/s390/char/sclp_config.c 68 */;
	void __ref cocci_id/* drivers/s390/char/sclp_config.c 61 */;
	struct device *cocci_id/* drivers/s390/char/sclp_config.c 49 */;
	struct work_struct *cocci_id/* drivers/s390/char/sclp_config.c 46 */;
	struct work_struct cocci_id/* drivers/s390/char/sclp_config.c 43 */;
	struct sclp_ofb_sccb {
		struct sccb_header header;
		struct sclp_ofb_evbuf ofb_evbuf;
	}__packed cocci_id/* drivers/s390/char/sclp_config.c 34 */;
	struct sclp_ofb_evbuf {
		struct evbuf_header header;
		struct conf_mgm_data cm_data;
		char ev_data[OFB_DATA_MAX];
	}__packed cocci_id/* drivers/s390/char/sclp_config.c 28 */;
	struct conf_mgm_data {
		u8 reserved;
		u8 ev_qualifier;
	}__attribute__((packed)) cocci_id/* drivers/s390/char/sclp_config.c 21 */;
	int cocci_id/* drivers/s390/char/sclp_config.c 170 */;
	int __init cocci_id/* drivers/s390/char/sclp_config.c 168 */;
	void cocci_id/* drivers/s390/char/sclp_config.c 168 */;
	struct kset *cocci_id/* drivers/s390/char/sclp_config.c 153 */;
	const struct bin_attribute cocci_id/* drivers/s390/char/sclp_config.c 141 */;
	loff_t cocci_id/* drivers/s390/char/sclp_config.c 133 */;
	struct bin_attribute *cocci_id/* drivers/s390/char/sclp_config.c 132 */;
	struct kobject *cocci_id/* drivers/s390/char/sclp_config.c 131 */;
	struct file *cocci_id/* drivers/s390/char/sclp_config.c 131 */;
	ssize_t cocci_id/* drivers/s390/char/sclp_config.c 131 */;
	unsigned long cocci_id/* drivers/s390/char/sclp_config.c 127 */;
	struct sclp_ofb_evbuf cocci_id/* drivers/s390/char/sclp_config.c 106 */;
	struct sclp_ofb_sccb cocci_id/* drivers/s390/char/sclp_config.c 105 */;
}
