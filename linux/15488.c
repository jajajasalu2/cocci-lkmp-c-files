cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/nfc/trf7970a.c 820 */;
	struct sk_buff *cocci_id/* drivers/nfc/trf7970a.c 740 */;
	unsigned int cocci_id/* drivers/nfc/trf7970a.c 706 */;
	u8 *cocci_id/* drivers/nfc/trf7970a.c 572 */;
	u8 cocci_id/* drivers/nfc/trf7970a.c 532 */[2];
	struct spi_message cocci_id/* drivers/nfc/trf7970a.c 490 */;
	struct spi_transfer cocci_id/* drivers/nfc/trf7970a.c 489 */[2];
	size_t cocci_id/* drivers/nfc/trf7970a.c 486 */;
	u8 cocci_id/* drivers/nfc/trf7970a.c 456 */;
	struct trf7970a {
		enum trf7970a_state state;
		struct device *dev;
		struct spi_device *spi;
		struct regulator *regulator;
		struct nfc_digital_dev *ddev;
		u32 quirks;
		bool is_initiator;
		bool aborting;
		struct sk_buff *tx_skb;
		struct sk_buff *rx_skb;
		nfc_digital_cmd_complete_t cb;
		void *cb_arg;
		u8 chip_status_ctrl;
		u8 iso_ctrl;
		u8 iso_ctrl_tech;
		u8 modulator_sys_clk_ctrl;
		u8 special_fcn_reg1;
		u8 io_ctrl;
		unsigned int guard_time;
		int technology;
		int framing;
		u8 md_rf_tech;
		u8 tx_cmd;
		bool issue_eof;
		struct gpio_desc *en_gpiod;
		struct gpio_desc *en2_gpiod;
		struct mutex lock;
		unsigned int timeout;
		bool ignore_timeout;
		struct delayed_work timeout_work;
	} cocci_id/* drivers/nfc/trf7970a.c 423 */;
	enum trf7970a_state{TRF7970A_ST_PWR_OFF, TRF7970A_ST_RF_OFF, TRF7970A_ST_IDLE, TRF7970A_ST_IDLE_RX_BLOCKED, TRF7970A_ST_WAIT_FOR_TX_FIFO, TRF7970A_ST_WAIT_FOR_RX_DATA, TRF7970A_ST_WAIT_FOR_RX_DATA_CONT, TRF7970A_ST_WAIT_TO_ISSUE_EOF, TRF7970A_ST_LISTENING, TRF7970A_ST_LISTENING_MD, TRF7970A_ST_MAX,} cocci_id/* drivers/nfc/trf7970a.c 409 */;
	struct spi_driver cocci_id/* drivers/nfc/trf7970a.c 2256 */;
	const struct spi_device_id cocci_id/* drivers/nfc/trf7970a.c 2249 */[];
	const struct of_device_id cocci_id/* drivers/nfc/trf7970a.c 2242 */[];
	struct spi_device *cocci_id/* drivers/nfc/trf7970a.c 2222 */;
	struct device *cocci_id/* drivers/nfc/trf7970a.c 2220 */;
	u32 cocci_id/* drivers/nfc/trf7970a.c 1994 */;
	struct device_node *cocci_id/* drivers/nfc/trf7970a.c 1978 */;
	struct nfc_digital_ops cocci_id/* drivers/nfc/trf7970a.c 1865 */;
	void cocci_id/* drivers/nfc/trf7970a.c 1838 */;
	struct trf7970a *cocci_id/* drivers/nfc/trf7970a.c 1721 */;
	bool cocci_id/* drivers/nfc/trf7970a.c 1719 */;
	nfc_digital_cmd_complete_t cocci_id/* drivers/nfc/trf7970a.c 1718 */;
	void *cocci_id/* drivers/nfc/trf7970a.c 1718 */;
	u16 cocci_id/* drivers/nfc/trf7970a.c 1717 */;
	struct nfc_digital_dev *cocci_id/* drivers/nfc/trf7970a.c 1717 */;
	int cocci_id/* drivers/nfc/trf7970a.c 1717 */;
	u8 cocci_id/* drivers/nfc/trf7970a.c 1464 */[5];
	bool *cocci_id/* drivers/nfc/trf7970a.c 1229 */;
	struct trf7970a cocci_id/* drivers/nfc/trf7970a.c 1007 */;
	struct work_struct *cocci_id/* drivers/nfc/trf7970a.c 1005 */;
}