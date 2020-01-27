cocci_test_suite() {
	struct dw_scl_sda_cfg cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 72 */;
	struct dw_pci_controller {
		u32 bus_num;
		u32 bus_cfg;
		u32 tx_fifo_depth;
		u32 rx_fifo_depth;
		u32 clk_khz;
		u32 functionality;
		u32 flags;
		struct dw_scl_sda_cfg *scl_sda_cfg;
		int (*setup)(struct pci_dev *pdev,
			     struct dw_pci_controller *c);
	} cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 47 */;
	struct dw_scl_sda_cfg {
		u32 ss_hcnt;
		u32 fs_hcnt;
		u32 ss_lcnt;
		u32 fs_lcnt;
		u32 sda_hold;
	} cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 39 */;
	struct pci_driver cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 365 */;
	const struct pci_device_id cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 322 */[];
	void cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 307 */;
	enum dw_pci_ctl_id_t{medfield, merrifield, baytrail, cherrytrail, haswell, elkhartlake,} cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 30 */;
	struct dw_i2c_dev cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 245 */;
	struct dw_scl_sda_cfg *cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 220 */;
	struct dw_pci_controller *cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 219 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 217 */;
	const struct pci_device_id *cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 214 */;
	struct pci_dev *cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 213 */;
	int cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 213 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 208 */;
	struct dw_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 208 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 193 */;
	struct dw_pci_controller cocci_id/* drivers/i2c/busses/i2c-designware-pcidrv.c 128 */[];
}
