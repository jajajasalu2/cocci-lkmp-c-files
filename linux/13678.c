cocci_test_suite() {
	struct sms_data_download *cocci_id/* drivers/media/common/siano/smscoreapi.c 953 */;
	__le32 *cocci_id/* drivers/media/common/siano/smscoreapi.c 916 */;
	struct sms_msg_data4 *cocci_id/* drivers/media/common/siano/smscoreapi.c 911 */;
	struct sms_firmware *cocci_id/* drivers/media/common/siano/smscoreapi.c 910 */;
	struct sms_msg_data cocci_id/* drivers/media/common/siano/smscoreapi.c 834 */;
	struct sms_board *cocci_id/* drivers/media/common/siano/smscoreapi.c 825 */;
	struct sms_msg_data2 *cocci_id/* drivers/media/common/siano/smscoreapi.c 791 */;
	struct sms_msg_data2 cocci_id/* drivers/media/common/siano/smscoreapi.c 787 */;
	struct completion *cocci_id/* drivers/media/common/siano/smscoreapi.c 749 */;
	gfp_t cocci_id/* drivers/media/common/siano/smscoreapi.c 644 */;
	struct smscore_device_t **cocci_id/* drivers/media/common/siano/smscoreapi.c 643 */;
	struct smsdevice_params_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 642 */;
	dma_addr_t cocci_id/* drivers/media/common/siano/smscoreapi.c 616 */;
	u8 *cocci_id/* drivers/media/common/siano/smscoreapi.c 615 */;
	struct device *cocci_id/* drivers/media/common/siano/smscoreapi.c 598 */;
	hotplug_t cocci_id/* drivers/media/common/siano/smscoreapi.c 524 */;
	spinlock_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 505 */;
	struct list_head *cocci_id/* drivers/media/common/siano/smscoreapi.c 504 */;
	void cocci_id/* drivers/media/common/siano/smscoreapi.c 504 */;
	char *cocci_id/* drivers/media/common/siano/smscoreapi.c 50 */[];
	struct smscore_registry_entry_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 427 */;
	char *cocci_id/* drivers/media/common/siano/smscoreapi.c 427 */;
	int cocci_id/* drivers/media/common/siano/smscoreapi.c 422 */;
	struct mutex cocci_id/* drivers/media/common/siano/smscoreapi.c 417 */;
	struct list_head cocci_id/* drivers/media/common/siano/smscoreapi.c 416 */;
	struct smscore_client_t {
		struct list_head entry;
		struct smscore_device_t *coredev;
		void *context;
		struct list_head idlist;
		onresponse_t onresponse_handler;
		onremove_t onremove_handler;
	} cocci_id/* drivers/media/common/siano/smscoreapi.c 41 */;
	struct smscore_registry_entry_t {
		struct list_head entry;
		char devpath[32];
		int mode;
		enum sms_device_type_st type;
	} cocci_id/* drivers/media/common/siano/smscoreapi.c 408 */;
	enum msg_types cocci_id/* drivers/media/common/siano/smscoreapi.c 372 */;
	struct smscore_idlist_t {
		struct list_head entry;
		int id;
		int data_type;
	} cocci_id/* drivers/media/common/siano/smscoreapi.c 35 */;
	struct smscore_device_notifyee_t {
		struct list_head entry;
		hotplug_t hotplug;
	} cocci_id/* drivers/media/common/siano/smscoreapi.c 30 */;
	struct smscore_device_notifyee_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 2138 */;
	void __exit cocci_id/* drivers/media/common/siano/smscoreapi.c 2134 */;
	int __init cocci_id/* drivers/media/common/siano/smscoreapi.c 2122 */;
	struct set_gpio_msg {
		struct sms_msg_hdr x_msg_header;
		u32 msg_data[2];
	} *cocci_id/* drivers/media/common/siano/smscoreapi.c 2076 */;
	struct set_gpio_msg {
		struct sms_msg_hdr x_msg_header;
		u32 msg_data[3];
	} *cocci_id/* drivers/media/common/siano/smscoreapi.c 2028 */;
	u16 cocci_id/* drivers/media/common/siano/smscoreapi.c 1977 */;
	struct set_gpio_msg *cocci_id/* drivers/media/common/siano/smscoreapi.c 1972 */;
	struct set_gpio_msg {
		struct sms_msg_hdr x_msg_header;
		u32 msg_data[6];
	} *cocci_id/* drivers/media/common/siano/smscoreapi.c 1953 */;
	u8 cocci_id/* drivers/media/common/siano/smscoreapi.c 1942 */;
	u32 cocci_id/* drivers/media/common/siano/smscoreapi.c 1892 */;
	u32 *cocci_id/* drivers/media/common/siano/smscoreapi.c 1892 */;
	struct {
		struct sms_msg_hdr hdr;
		u32 data[3];
	} cocci_id/* drivers/media/common/siano/smscoreapi.c 1869 */;
	struct {
		struct sms_msg_hdr hdr;
		u32 data[6];
	} cocci_id/* drivers/media/common/siano/smscoreapi.c 1824 */;
	struct smscore_config_gpio *cocci_id/* drivers/media/common/siano/smscoreapi.c 1822 */;
	struct sms_msg_hdr *cocci_id/* drivers/media/common/siano/smscoreapi.c 1794 */;
	void *cocci_id/* drivers/media/common/siano/smscoreapi.c 1791 */;
	size_t cocci_id/* drivers/media/common/siano/smscoreapi.c 1791 */;
	struct smscore_client_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 1790 */;
	struct smscore_client_t **cocci_id/* drivers/media/common/siano/smscoreapi.c 1717 */;
	struct smsclient_params_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 1716 */;
	unsigned long cocci_id/* drivers/media/common/siano/smscoreapi.c 1635 */;
	struct smscore_device_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 1632 */;
	struct smscore_buffer_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 1632 */;
	const char *cocci_id/* drivers/media/common/siano/smscoreapi.c 1596 */;
	struct sms_version_res *cocci_id/* drivers/media/common/siano/smscoreapi.c 1535 */;
	struct smscore_idlist_t *cocci_id/* drivers/media/common/siano/smscoreapi.c 1451 */;
	struct sms_msg_data *cocci_id/* drivers/media/common/siano/smscoreapi.c 1302 */;
	struct sms_msg_hdr cocci_id/* drivers/media/common/siano/smscoreapi.c 1256 */;
	struct sms_firmware cocci_id/* drivers/media/common/siano/smscoreapi.c 1164 */;
	const struct firmware *cocci_id/* drivers/media/common/siano/smscoreapi.c 1145 */;
	loadfirmware_t cocci_id/* drivers/media/common/siano/smscoreapi.c 1140 */;
	enum sms_device_type_st cocci_id/* drivers/media/common/siano/smscoreapi.c 1106 */;
	char **cocci_id/* drivers/media/common/siano/smscoreapi.c 1104 */;
	char *cocci_id/* drivers/media/common/siano/smscoreapi.c 1041 */[][DEVICE_MODE_MAX];
}
