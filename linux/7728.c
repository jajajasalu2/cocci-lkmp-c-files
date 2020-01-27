cocci_test_suite() {
	struct resource *cocci_id/* drivers/tty/serial/8250/8250_pci.c 902 */;
	const short cocci_id/* drivers/tty/serial/8250/8250_pci.c 899 */[];
	unsigned short cocci_id/* drivers/tty/serial/8250/8250_pci.c 808 */;
	const char *cocci_id/* drivers/tty/serial/8250/8250_pci.c 72 */;
	struct pci_bus_region cocci_id/* drivers/tty/serial/8250/8250_pci.c 708 */;
	int cocci_id/* drivers/tty/serial/8250/8250_pci.c 69 */(struct serial_private *,
								const struct pciserial_board *,
								struct uart_8250_port *,
								int);
	const unsigned short *cocci_id/* drivers/tty/serial/8250/8250_pci.c 598 */;
	struct pci_driver cocci_id/* drivers/tty/serial/8250/8250_pci.c 5661 */;
	const struct pci_error_handlers cocci_id/* drivers/tty/serial/8250/8250_pci.c 5655 */;
	const struct timedia_struct {
		int num;
		const unsigned short *ids;
	} cocci_id/* drivers/tty/serial/8250/8250_pci.c 564 */[];
	pci_channel_state_t cocci_id/* drivers/tty/serial/8250/8250_pci.c 5610 */;
	pci_ers_result_t cocci_id/* drivers/tty/serial/8250/8250_pci.c 5609 */;
	const unsigned short cocci_id/* drivers/tty/serial/8250/8250_pci.c 544 */[];
	struct serial_private {
		struct pci_dev *dev;
		unsigned int nr;
		struct pci_serial_quirk *quirk;
		const struct pciserial_board *board;
		int line[0];
	} cocci_id/* drivers/tty/serial/8250/8250_pci.c 51 */;
	struct f815xxa_data {
		spinlock_t lock;
		int idx;
	} cocci_id/* drivers/tty/serial/8250/8250_pci.c 46 */;
	struct device *cocci_id/* drivers/tty/serial/8250/8250_pci.c 4103 */;
	struct pciserial_board cocci_id/* drivers/tty/serial/8250/8250_pci.c 4021 */;
	const struct pci_device_id *cocci_id/* drivers/tty/serial/8250/8250_pci.c 4015 */;
	struct serial_private cocci_id/* drivers/tty/serial/8250/8250_pci.c 3895 */;
	struct uart_8250_port cocci_id/* drivers/tty/serial/8250/8250_pci.c 3866 */;
	struct pciserial_board *cocci_id/* drivers/tty/serial/8250/8250_pci.c 3788 */;
	const struct pci_device_id cocci_id/* drivers/tty/serial/8250/8250_pci.c 3731 */[];
	struct pci_serial_quirk {
		u32 vendor;
		u32 device;
		u32 subvendor;
		u32 subdevice;
		int (*probe)(struct pci_dev *dev);
		int (*init)(struct pci_dev *dev);
		int (*setup)(struct serial_private *,
			     const struct pciserial_board *,
			     struct uart_8250_port *, int);
		void (*exit)(struct pci_dev *dev);
	} cocci_id/* drivers/tty/serial/8250/8250_pci.c 33 */;
	void __iomem *cocci_id/* drivers/tty/serial/8250/8250_pci.c 319 */;
	struct pciserial_board cocci_id/* drivers/tty/serial/8250/8250_pci.c 2946 */[];
	enum pci_board_num_t{pbn_default=0, pbn_b0_1_115200, pbn_b0_2_115200, pbn_b0_4_115200, pbn_b0_5_115200, pbn_b0_8_115200, pbn_b0_1_921600, pbn_b0_2_921600, pbn_b0_4_921600, pbn_b0_2_1130000, pbn_b0_4_1152000, pbn_b0_4_1250000, pbn_b0_2_1843200, pbn_b0_4_1843200, pbn_b0_1_4000000, pbn_b0_bt_1_115200, pbn_b0_bt_2_115200, pbn_b0_bt_4_115200, pbn_b0_bt_8_115200, pbn_b0_bt_1_460800, pbn_b0_bt_2_460800, pbn_b0_bt_4_460800, pbn_b0_bt_1_921600, pbn_b0_bt_2_921600, pbn_b0_bt_4_921600, pbn_b0_bt_8_921600, pbn_b1_1_115200, pbn_b1_2_115200, pbn_b1_4_115200, pbn_b1_8_115200, pbn_b1_16_115200, pbn_b1_1_921600, pbn_b1_2_921600, pbn_b1_4_921600, pbn_b1_8_921600, pbn_b1_2_1250000, pbn_b1_bt_1_115200, pbn_b1_bt_2_115200, pbn_b1_bt_4_115200, pbn_b1_bt_2_921600, pbn_b1_1_1382400, pbn_b1_2_1382400, pbn_b1_4_1382400, pbn_b1_8_1382400, pbn_b2_1_115200, pbn_b2_2_115200, pbn_b2_4_115200, pbn_b2_8_115200, pbn_b2_1_460800, pbn_b2_4_460800, pbn_b2_8_460800, pbn_b2_16_460800, pbn_b2_1_921600, pbn_b2_4_921600, pbn_b2_8_921600, pbn_b2_8_1152000, pbn_b2_bt_1_115200, pbn_b2_bt_2_115200, pbn_b2_bt_4_115200, pbn_b2_bt_2_921600, pbn_b2_bt_4_921600, pbn_b3_2_115200, pbn_b3_4_115200, pbn_b3_8_115200, pbn_b4_bt_2_921600, pbn_b4_bt_4_921600, pbn_b4_bt_8_921600, pbn_panacom, pbn_panacom2, pbn_panacom4, pbn_plx_romulus, pbn_endrun_2_4000000, pbn_oxsemi, pbn_oxsemi_1_4000000, pbn_oxsemi_2_4000000, pbn_oxsemi_4_4000000, pbn_oxsemi_8_4000000, pbn_intel_i960, pbn_sgi_ioc3, pbn_computone_4, pbn_computone_6, pbn_computone_8, pbn_sbsxrsio, pbn_pasemi_1682M, pbn_ni8430_2, pbn_ni8430_4, pbn_ni8430_8, pbn_ni8430_16, pbn_ADDIDATA_PCIe_1_3906250, pbn_ADDIDATA_PCIe_2_3906250, pbn_ADDIDATA_PCIe_4_3906250, pbn_ADDIDATA_PCIe_8_3906250, pbn_ce4100_1_115200, pbn_omegapci, pbn_NETMOS9900_2s_115200, pbn_brcm_trumanage, pbn_fintek_4, pbn_fintek_8, pbn_fintek_12, pbn_fintek_F81504A, pbn_fintek_F81508A, pbn_fintek_F81512A, pbn_wch382_2, pbn_wch384_4, pbn_pericom_PI7C9X7951, pbn_pericom_PI7C9X7952, pbn_pericom_PI7C9X7954, pbn_pericom_PI7C9X7958, pbn_sunix_pci_1s, pbn_sunix_pci_2s, pbn_sunix_pci_4s, pbn_sunix_pci_8s, pbn_sunix_pci_16s, pbn_moxa8250_2p, pbn_moxa8250_4p, pbn_moxa8250_8p,} cocci_id/* drivers/tty/serial/8250/8250_pci.c 2789 */;
	struct pci_serial_quirk *cocci_id/* drivers/tty/serial/8250/8250_pci.c 2747 */;
	struct pci_dev *cocci_id/* drivers/tty/serial/8250/8250_pci.c 2747 */;
	struct pci_serial_quirk cocci_id/* drivers/tty/serial/8250/8250_pci.c 1939 */[]__refdata;
	u32 cocci_id/* drivers/tty/serial/8250/8250_pci.c 1648 */;
	unsigned long cocci_id/* drivers/tty/serial/8250/8250_pci.c 1615 */;
	struct f815xxa_data *cocci_id/* drivers/tty/serial/8250/8250_pci.c 1614 */;
	struct uart_port *cocci_id/* drivers/tty/serial/8250/8250_pci.c 1612 */;
	void cocci_id/* drivers/tty/serial/8250/8250_pci.c 1612 */;
	u8 cocci_id/* drivers/tty/serial/8250/8250_pci.c 1546 */;
	resource_size_t cocci_id/* drivers/tty/serial/8250/8250_pci.c 1545 */[3];
	u16 cocci_id/* drivers/tty/serial/8250/8250_pci.c 1517 */;
	u8 *cocci_id/* drivers/tty/serial/8250/8250_pci.c 1469 */;
	struct serial_rs485 *cocci_id/* drivers/tty/serial/8250/8250_pci.c 1465 */;
	unsigned int cocci_id/* drivers/tty/serial/8250/8250_pci.c 119 */;
	struct uart_8250_port *cocci_id/* drivers/tty/serial/8250/8250_pci.c 117 */;
	const struct pciserial_board *cocci_id/* drivers/tty/serial/8250/8250_pci.c 116 */;
	struct serial_private *cocci_id/* drivers/tty/serial/8250/8250_pci.c 115 */;
	int cocci_id/* drivers/tty/serial/8250/8250_pci.c 115 */;
	struct quatech_feature *cocci_id/* drivers/tty/serial/8250/8250_pci.c 1121 */;
	struct quatech_feature cocci_id/* drivers/tty/serial/8250/8250_pci.c 1096 */[];
	struct quatech_feature {
		u16 devid;
		bool amcc;
	} cocci_id/* drivers/tty/serial/8250/8250_pci.c 1075 */;
	u8 __iomem *cocci_id/* drivers/tty/serial/8250/8250_pci.c 1008 */;
}
