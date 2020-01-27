cocci_test_suite() {
	const struct stmmac_hwif_entry {
		bool gmac;
		bool gmac4;
		bool xgmac;
		u32 min_id;
		const struct stmmac_regs_off regs;
		const void *desc;
		const void *dma;
		const void *mac;
		const void *hwtimestamp;
		const void *mode;
		const void *tc;
		const void *mmc;
		int (*setup)(struct stmmac_priv *priv);
		int (*quirks)(struct stmmac_priv *priv);
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 72 */[];
	struct mac_device_info *cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 43 */;
	struct stmmac_priv *cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 41 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 41 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 26 */;
	const struct stmmac_hwif_entry *cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 223 */;
	bool cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 220 */;
	unsigned int cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 21 */;
	u32 cocci_id/* drivers/net/ethernet/stmicro/stmmac/hwif.c 11 */;
}
