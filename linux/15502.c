cocci_test_suite() {
	struct param_list {
		int param_offset;
		int new_param_val;
	} cocci_id/* drivers/nfc/st95hf/core.c 96 */;
	void *cocci_id/* drivers/nfc/st95hf/core.c 921 */;
	nfc_digital_cmd_complete_t cocci_id/* drivers/nfc/st95hf/core.c 920 */;
	u16 cocci_id/* drivers/nfc/st95hf/core.c 919 */;
	struct cmd {
		int cmd_len;
		unsigned char cmd_id;
		unsigned char no_cmd_params;
		unsigned char cmd_params[MAX_CMD_PARAMS];
		enum req_type req;
	} cocci_id/* drivers/nfc/st95hf/core.c 88 */;
	struct st95_digital_cmd_complete_arg *cocci_id/* drivers/nfc/st95hf/core.c 777 */;
	irqreturn_t cocci_id/* drivers/nfc/st95hf/core.c 754 */;
	struct sk_buff *cocci_id/* drivers/nfc/st95hf/core.c 651 */;
	struct param_list cocci_id/* drivers/nfc/st95hf/core.c 610 */[1];
	bool cocci_id/* drivers/nfc/st95hf/core.c 605 */;
	struct param_list cocci_id/* drivers/nfc/st95hf/core.c 539 */[2];
	unsigned char cocci_id/* drivers/nfc/st95hf/core.c 538 */;
	struct nfc_digital_dev *cocci_id/* drivers/nfc/st95hf/core.c 537 */;
	struct device *cocci_id/* drivers/nfc/st95hf/core.c 536 */;
	struct st95hf_context *cocci_id/* drivers/nfc/st95hf/core.c 533 */;
	int cocci_id/* drivers/nfc/st95hf/core.c 533 */;
	unsigned char cocci_id/* drivers/nfc/st95hf/core.c 285 */[2];
	unsigned char cocci_id/* drivers/nfc/st95hf/core.c 250 */[MAX_CMD_LEN];
	struct param_list *cocci_id/* drivers/nfc/st95hf/core.c 247 */;
	enum st95hf_cmd_list cocci_id/* drivers/nfc/st95hf/core.c 245 */;
	struct st95hf_context {
		struct st95hf_spi_context spicontext;
		struct nfc_digital_dev *ddev;
		struct nfc_dev *nfcdev;
		unsigned int enable_gpio;
		struct st95_digital_cmd_complete_arg complete_cb_arg;
		struct regulator *st95hf_supply;
		unsigned char sendrcv_trflag;
		struct semaphore exchange_lock;
		struct mutex rm_lock;
		bool nfcdev_free;
		u8 current_protocol;
		u8 current_rf_tech;
		int fwi;
	} cocci_id/* drivers/nfc/st95hf/core.c 219 */;
	struct st95_digital_cmd_complete_arg {
		struct sk_buff *skb_resp;
		nfc_digital_cmd_complete_t complete_cb;
		void *cb_usrarg;
		bool rats;
	} cocci_id/* drivers/nfc/st95hf/core.c 187 */;
	struct spi_driver cocci_id/* drivers/nfc/st95hf/core.c 1250 */;
	const struct cmd cocci_id/* drivers/nfc/st95hf/core.c 121 */[];
	enum st95hf_cmd_list{CMD_ECHO, CMD_ISO14443A_CONFIG, CMD_ISO14443A_DEMOGAIN, CMD_ISO14443B_DEMOGAIN, CMD_ISO14443A_PROTOCOL_SELECT, CMD_ISO14443B_PROTOCOL_SELECT, CMD_WTX_RESPONSE, CMD_FIELD_OFF, CMD_ISO15693_PROTOCOL_SELECT,} cocci_id/* drivers/nfc/st95hf/core.c 109 */;
	struct st95hf_context cocci_id/* drivers/nfc/st95hf/core.c 1078 */;
	struct st95hf_spi_context *cocci_id/* drivers/nfc/st95hf/core.c 1073 */;
	struct spi_device *cocci_id/* drivers/nfc/st95hf/core.c 1068 */;
	const struct of_device_id cocci_id/* drivers/nfc/st95hf/core.c 1062 */[];
	const struct spi_device_id cocci_id/* drivers/nfc/st95hf/core.c 1056 */[];
	struct nfc_digital_ops cocci_id/* drivers/nfc/st95hf/core.c 1043 */;
	void cocci_id/* drivers/nfc/st95hf/core.c 1039 */;
	u8 cocci_id/* drivers/nfc/st95hf/core.c 1025 */;
	u8 *cocci_id/* drivers/nfc/st95hf/core.c 1018 */;
}
