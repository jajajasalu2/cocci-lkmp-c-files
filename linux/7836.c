cocci_test_suite() {
	const s32 cocci_id/* drivers/net/ieee802154/at86rf230.c 994 */[AT86RF2XX_MAX_ED_LEVELS + 1];
	struct at86rf230_trac cocci_id/* drivers/net/ieee802154/at86rf230.c 947 */;
	struct at86rf230_local {
		struct spi_device *spi;
		struct ieee802154_hw *hw;
		struct at86rf2xx_chip_data *data;
		struct regmap *regmap;
		int slp_tr;
		bool sleep;
		struct completion state_complete;
		struct at86rf230_state_change state;
		unsigned long cal_timeout;
		bool is_tx;
		bool is_tx_from_off;
		u8 tx_retry;
		struct sk_buff *tx_skb;
		struct at86rf230_state_change tx;
		struct at86rf230_trac trac;
	} cocci_id/* drivers/net/ieee802154/at86rf230.c 88 */;
	irqreturn_t cocci_id/* drivers/net/ieee802154/at86rf230.c 811 */;
	struct at86rf230_trac {
		u64 success;
		u64 success_data_pending;
		u64 success_wait_for_ack;
		u64 channel_access_failure;
		u64 no_ack;
		u64 invalid;
	} cocci_id/* drivers/net/ieee802154/at86rf230.c 79 */;
	struct sk_buff *cocci_id/* drivers/net/ieee802154/at86rf230.c 701 */;
	struct at86rf230_state_change {
		struct at86rf230_local *lp;
		int irq;
		struct hrtimer timer;
		struct spi_message msg;
		struct spi_transfer trx;
		u8 buf[AT86RF2XX_MAX_BUF];
		void (*complete)(void *context);
		u8 from_state;
		u8 to_state;
		bool free;
	} cocci_id/* drivers/net/ieee802154/at86rf230.c 63 */;
	ktime_t cocci_id/* drivers/net/ieee802154/at86rf230.c 481 */;
	struct at86rf2xx_chip_data *cocci_id/* drivers/net/ieee802154/at86rf230.c 479 */;
	struct at86rf230_state_change cocci_id/* drivers/net/ieee802154/at86rf230.c 464 */;
	enum hrtimer_restart cocci_id/* drivers/net/ieee802154/at86rf230.c 461 */;
	struct hrtimer *cocci_id/* drivers/net/ieee802154/at86rf230.c 461 */;
	const u8 cocci_id/* drivers/net/ieee802154/at86rf230.c 408 */;
	const u8 *cocci_id/* drivers/net/ieee802154/at86rf230.c 407 */;
	u8 *cocci_id/* drivers/net/ieee802154/at86rf230.c 378 */;
	void (*cocci_id/* drivers/net/ieee802154/at86rf230.c 374 */)(void *context);
	struct at86rf2xx_chip_data {
		u16 t_sleep_cycle;
		u16 t_channel_switch;
		u16 t_reset_to_off;
		u16 t_off_to_aack;
		u16 t_off_to_tx_on;
		u16 t_off_to_sleep;
		u16 t_sleep_to_off;
		u16 t_frame;
		u16 t_p_ack;
		int rssi_base_val;
		int (*set_channel)(struct at86rf230_local *, u8, u8);
		int (*set_txpower)(struct at86rf230_local *, s32);
	} cocci_id/* drivers/net/ieee802154/at86rf230.c 37 */;
	struct at86rf230_state_change *cocci_id/* drivers/net/ieee802154/at86rf230.c 362 */;
	void cocci_id/* drivers/net/ieee802154/at86rf230.c 360 */;
	void *cocci_id/* drivers/net/ieee802154/at86rf230.c 350 */;
	struct at86rf230_local cocci_id/* drivers/net/ieee802154/at86rf230.c 33 */;
	const struct regmap_config cocci_id/* drivers/net/ieee802154/at86rf230.c 324 */;
	struct device *cocci_id/* drivers/net/ieee802154/at86rf230.c 313 */;
	struct spi_driver cocci_id/* drivers/net/ieee802154/at86rf230.c 1794 */;
	const struct spi_device_id cocci_id/* drivers/net/ieee802154/at86rf230.c 1785 */[];
	const struct of_device_id cocci_id/* drivers/net/ieee802154/at86rf230.c 1776 */[];
	char cocci_id/* drivers/net/ieee802154/at86rf230.c 1631 */[DNAME_INLINE_LEN + 1];
	bool cocci_id/* drivers/net/ieee802154/at86rf230.c 163 */;
	struct seq_file *cocci_id/* drivers/net/ieee802154/at86rf230.c 1612 */;
	struct dentry *cocci_id/* drivers/net/ieee802154/at86rf230.c 1610 */;
	unsigned int *cocci_id/* drivers/net/ieee802154/at86rf230.c 161 */;
	unsigned int cocci_id/* drivers/net/ieee802154/at86rf230.c 161 */;
	struct at86rf230_local *cocci_id/* drivers/net/ieee802154/at86rf230.c 160 */;
	int cocci_id/* drivers/net/ieee802154/at86rf230.c 159 */;
	const char *cocci_id/* drivers/net/ieee802154/at86rf230.c 1510 */;
	u16 cocci_id/* drivers/net/ieee802154/at86rf230.c 1509 */;
	struct at86rf230_platform_data *cocci_id/* drivers/net/ieee802154/at86rf230.c 1483 */;
	struct spi_device *cocci_id/* drivers/net/ieee802154/at86rf230.c 1480 */;
	int *cocci_id/* drivers/net/ieee802154/at86rf230.c 1480 */;
	u8 cocci_id/* drivers/net/ieee802154/at86rf230.c 1376 */[2];
	struct at86rf2xx_chip_data cocci_id/* drivers/net/ieee802154/at86rf230.c 1357 */;
	const struct ieee802154_ops cocci_id/* drivers/net/ieee802154/at86rf230.c 1310 */;
	const bool cocci_id/* drivers/net/ieee802154/at86rf230.c 1284 */;
	s8 cocci_id/* drivers/net/ieee802154/at86rf230.c 1276 */;
	const struct wpan_phy_cca *cocci_id/* drivers/net/ieee802154/at86rf230.c 1211 */;
	u32 cocci_id/* drivers/net/ieee802154/at86rf230.c 1183 */;
	s32 cocci_id/* drivers/net/ieee802154/at86rf230.c 1181 */;
	const s32 cocci_id/* drivers/net/ieee802154/at86rf230.c 1161 */[AT86RF212_MAX_TX_POWERS + 1];
	const s32 cocci_id/* drivers/net/ieee802154/at86rf230.c 1155 */[AT86RF23X_MAX_TX_POWERS + 1];
	void cocci_id/* drivers/net/ieee802154/at86rf230.c 112 */(struct at86rf230_local *lp,
								  struct at86rf230_state_change *ctx,
								  const u8 state,
								  void (*complete)(void *context));
	unsigned long cocci_id/* drivers/net/ieee802154/at86rf230.c 1109 */;
	struct ieee802154_hw_addr_filt *cocci_id/* drivers/net/ieee802154/at86rf230.c 1108 */;
	struct ieee802154_hw *cocci_id/* drivers/net/ieee802154/at86rf230.c 1092 */;
	u8 cocci_id/* drivers/net/ieee802154/at86rf230.c 1033 */;
}
