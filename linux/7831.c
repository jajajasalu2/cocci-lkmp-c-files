cocci_test_suite() {
	const u8 *cocci_id/* drivers/net/ieee802154/ca8210.c 986 */;
	struct mac_message cocci_id/* drivers/net/ieee802154/ca8210.c 951 */;
	u8 cocci_id/* drivers/net/ieee802154/ca8210.c 846 */[CA8210_SPI_BUF_SIZE];
	int cocci_id/* drivers/net/ieee802154/ca8210.c 833 */(struct spi_device *spi_device);
	struct cas_control *cocci_id/* drivers/net/ieee802154/ca8210.c 722 */;
	struct work_priv_container cocci_id/* drivers/net/ieee802154/ca8210.c 705 */;
	struct work_priv_container *cocci_id/* drivers/net/ieee802154/ca8210.c 703 */;
	struct work_struct *cocci_id/* drivers/net/ieee802154/ca8210.c 701 */;
	long cocci_id/* drivers/net/ieee802154/ca8210.c 673 */;
	unsigned int cocci_id/* drivers/net/ieee802154/ca8210.c 669 */;
	int cocci_id/* drivers/net/ieee802154/ca8210.c 658 */(struct spi_device *spi,
							      const u8 *buf,
							      size_t len);
	u8 cocci_id/* drivers/net/ieee802154/ca8210.c 654 */(u8 set_default_pib,
							     void *device_ref);
	int cocci_id/* drivers/net/ieee802154/ca8210.c 649 */(struct ieee802154_hw *hw,
							      u8 *command,
							      size_t len);
	char *cocci_id/* drivers/net/ieee802154/ca8210.c 628 */;
	struct ca8210_test *cocci_id/* drivers/net/ieee802154/ca8210.c 627 */;
	int (*cocci_id/* drivers/net/ieee802154/ca8210.c 533 */)(const u8 *buf,
								 size_t len,
								 void *device_ref);
	struct preamble_cfg_sfr {
		u8 timeout_symbols:3;
		u8 acquisition_symbols:3;
		u8 search_symbols:2;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 527 */;
	union pa_cfg_sfr {
		struct {
			u8 bias_current_trim:3;
			u8:1;
			u8 buffer_capacitor_trim:3;
			u8 boost:1;
		};
		u8 paib;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 517 */;
	struct mac_message {
		u8 command_id;
		u8 length;
		union {
			struct mcps_data_request_pset data_req;
			struct mlme_set_request_pset set_req;
			struct hwme_set_request_pset hwme_set_req;
			struct hwme_get_request_pset hwme_get_req;
			struct tdme_setsfr_request_pset tdme_set_sfr_req;
			struct hwme_set_confirm_pset hwme_set_cnf;
			struct hwme_get_confirm_pset hwme_get_cnf;
			struct tdme_setsfr_confirm_pset tdme_set_sfr_cnf;
			u8 u8param;
			u8 status;
			u8 payload[148];
		} pdata;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 499 */;
	struct tdme_setsfr_confirm_pset {
		u8 status;
		u8 sfr_page;
		u8 sfr_address;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 493 */;
	struct hwme_get_confirm_pset {
		u8 status;
		u8 hw_attribute;
		u8 hw_attribute_length;
		u8 hw_attribute_value[MAX_HWME_ATTRIBUTE_SIZE];
	} cocci_id/* drivers/net/ieee802154/ca8210.c 486 */;
	struct hwme_set_confirm_pset {
		u8 status;
		u8 hw_attribute;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 481 */;
	struct tdme_setsfr_request_pset {
		u8 sfr_page;
		u8 sfr_address;
		u8 sfr_value;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 474 */;
	struct hwme_get_request_pset {
		u8 hw_attribute;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 470 */;
	struct hwme_set_request_pset {
		u8 hw_attribute;
		u8 hw_attribute_length;
		u8 hw_attribute_value[MAX_HWME_ATTRIBUTE_SIZE];
	} cocci_id/* drivers/net/ieee802154/ca8210.c 464 */;
	struct mlme_set_request_pset {
		u8 pib_attribute;
		u8 pib_attribute_index;
		u8 pib_attribute_length;
		u8 pib_attribute_value[MAX_ATTRIBUTE_SIZE];
	} cocci_id/* drivers/net/ieee802154/ca8210.c 457 */;
	struct mcps_data_request_pset {
		u8 src_addr_mode;
		struct fulladdr dst;
		u8 msdu_length;
		u8 msdu_handle;
		u8 tx_options;
		u8 msdu[MAX_DATA_SIZE];
	} cocci_id/* drivers/net/ieee802154/ca8210.c 448 */;
	struct secspec {
		u8 security_level;
		u8 key_id_mode;
		u8 key_source[8];
		u8 key_index;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 440 */;
	union macaddr {
		u16 short_address;
		u8 ieee_address[8];
	} cocci_id/* drivers/net/ieee802154/ca8210.c 427 */;
	struct fulladdr {
		u8 mode;
		u8 pan_id[2];
		u8 address[8];
	} cocci_id/* drivers/net/ieee802154/ca8210.c 415 */;
	struct ca8210_platform_data {
		bool extclockenable;
		unsigned int extclockfreq;
		unsigned int extclockgpio;
		int gpio_reset;
		int gpio_irq;
		int irq_id;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 399 */;
	struct work_priv_container {
		struct work_struct work;
		struct ca8210_priv *priv;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 384 */;
	struct ca8210_priv {
		struct spi_device *spi;
		struct ieee802154_hw *hw;
		bool hw_registered;
		spinlock_t lock;
		struct workqueue_struct *mlme_workqueue;
		struct workqueue_struct *irq_workqueue;
		struct sk_buff *tx_skb;
		u8 nextmsduhandle;
		struct clk *clk;
		int last_dsn;
		struct ca8210_test test;
		bool async_tx_pending;
		u8 *sync_command_response;
		struct completion ca8210_is_awake;
		int sync_down,sync_up;
		struct completion spi_transfer_complete,sync_exchange_complete;
		bool promiscuous;
		int retries;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 356 */;
	struct spi_driver cocci_id/* drivers/net/ieee802154/ca8210.c 3221 */;
	struct ca8210_test {
		struct dentry *ca8210_dfs_spi_int;
		struct kfifo up_fifo;
		wait_queue_head_t readq;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 322 */;
	const struct of_device_id cocci_id/* drivers/net/ieee802154/ca8210.c 3215 */[];
	struct ca8210_priv cocci_id/* drivers/net/ieee802154/ca8210.c 3111 */;
	struct cas_control {
		struct spi_message msg;
		struct spi_transfer transfer;
		u8 tx_buf[CA8210_SPI_BUF_SIZE];
		u8 tx_in_buf[CA8210_SPI_BUF_SIZE];
		struct ca8210_priv *priv;
	} cocci_id/* drivers/net/ieee802154/ca8210.c 305 */;
	char cocci_id/* drivers/net/ieee802154/ca8210.c 3005 */[32];
	const s32 cocci_id/* drivers/net/ieee802154/ca8210.c 2951 */[CA8210_MAX_ED_LEVELS];
	const s32 cocci_id/* drivers/net/ieee802154/ca8210.c 2946 */[CA8210_MAX_TX_POWERS];
	void cocci_id/* drivers/net/ieee802154/ca8210.c 2937 */;
	struct device_node *cocci_id/* drivers/net/ieee802154/ca8210.c 2780 */;
	u8 cocci_id/* drivers/net/ieee802154/ca8210.c 2737 */[2];
	bool cocci_id/* drivers/net/ieee802154/ca8210.c 2734 */;
	struct spi_device *cocci_id/* drivers/net/ieee802154/ca8210.c 2733 */;
	struct ca8210_platform_data *cocci_id/* drivers/net/ieee802154/ca8210.c 2732 */;
	const struct file_operations cocci_id/* drivers/net/ieee802154/ca8210.c 2668 */;
	struct poll_table_struct *cocci_id/* drivers/net/ieee802154/ca8210.c 2651 */;
	__poll_t cocci_id/* drivers/net/ieee802154/ca8210.c 2649 */;
	struct file *cocci_id/* drivers/net/ieee802154/ca8210.c 2624 */;
	unsigned char *cocci_id/* drivers/net/ieee802154/ca8210.c 2569 */;
	loff_t *cocci_id/* drivers/net/ieee802154/ca8210.c 2564 */;
	char __user *cocci_id/* drivers/net/ieee802154/ca8210.c 2562 */;
	ssize_t cocci_id/* drivers/net/ieee802154/ca8210.c 2560 */;
	const char __user *cocci_id/* drivers/net/ieee802154/ca8210.c 2487 */;
	struct inode *cocci_id/* drivers/net/ieee802154/ca8210.c 2411 */;
	const struct ieee802154_ops cocci_id/* drivers/net/ieee802154/ca8210.c 2387 */;
	const void *cocci_id/* drivers/net/ieee802154/ca8210.c 2372 */;
	const bool cocci_id/* drivers/net/ieee802154/ca8210.c 2363 */;
	s8 cocci_id/* drivers/net/ieee802154/ca8210.c 2341 */;
	s32 cocci_id/* drivers/net/ieee802154/ca8210.c 2255 */;
	const struct wpan_phy_cca *cocci_id/* drivers/net/ieee802154/ca8210.c 2216 */;
	struct ieee802154_hw_addr_filt *cocci_id/* drivers/net/ieee802154/ca8210.c 2130 */;
	u8 *cocci_id/* drivers/net/ieee802154/ca8210.c 2070 */;
	union macaddr *cocci_id/* drivers/net/ieee802154/ca8210.c 1971 */;
	struct secspec cocci_id/* drivers/net/ieee802154/ca8210.c 1948 */;
	unsigned long cocci_id/* drivers/net/ieee802154/ca8210.c 1898 */;
	size_t cocci_id/* drivers/net/ieee802154/ca8210.c 1895 */;
	u16 *cocci_id/* drivers/net/ieee802154/ca8210.c 1839 */;
	struct sk_buff *cocci_id/* drivers/net/ieee802154/ca8210.c 1805 */;
	struct ieee802154_hdr cocci_id/* drivers/net/ieee802154/ca8210.c 1801 */;
	struct ca8210_priv *cocci_id/* drivers/net/ieee802154/ca8210.c 1751 */;
	u8 cocci_id/* drivers/net/ieee802154/ca8210.c 1748 */;
	struct ieee802154_hw *cocci_id/* drivers/net/ieee802154/ca8210.c 1747 */;
	int cocci_id/* drivers/net/ieee802154/ca8210.c 1746 */;
	struct mlme_set_request_pset cocci_id/* drivers/net/ieee802154/ca8210.c 1622 */;
	struct mcps_data_request_pset cocci_id/* drivers/net/ieee802154/ca8210.c 1512 */;
	struct secspec *cocci_id/* drivers/net/ieee802154/ca8210.c 1479 */;
	u16 cocci_id/* drivers/net/ieee802154/ca8210.c 1473 */;
	union pa_cfg_sfr cocci_id/* drivers/net/ieee802154/ca8210.c 1389 */;
	struct preamble_cfg_sfr cocci_id/* drivers/net/ieee802154/ca8210.c 1155 */;
	int (*cocci_id/* drivers/net/ieee802154/ca8210.c 1086 */)(const u8 *buf,
								  size_t len,
								  u8 *response,
								  void *device_ref);
	irqreturn_t cocci_id/* drivers/net/ieee802154/ca8210.c 1067 */;
	void *cocci_id/* drivers/net/ieee802154/ca8210.c 1067 */;
}
