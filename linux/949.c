cocci_test_suite() {
	bool cocci_id/* drivers/mtd/devices/st_spi_fsm.c 988 */;
	struct stfsm *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 988 */;
	unsigned long cocci_id/* drivers/mtd/devices/st_spi_fsm.c 869 */;
	struct stfsm_seq *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 851 */;
	int cocci_id/* drivers/mtd/devices/st_spi_fsm.c 849 */;
	uint32_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 802 */;
	const struct stfsm_seq *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 801 */;
	void cocci_id/* drivers/mtd/devices/st_spi_fsm.c 799 */;
	const uint32_t *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 716 */;
	void __iomem *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 715 */;
	const struct stfsm_seq cocci_id/* drivers/mtd/devices/st_spi_fsm.c 664 */;
	uint8_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 475 */;
	struct seq_rw_config cocci_id/* drivers/mtd/devices/st_spi_fsm.c 451 */[];
	struct flash_info cocci_id/* drivers/mtd/devices/st_spi_fsm.c 316 */[];
	int cocci_id/* drivers/mtd/devices/st_spi_fsm.c 312 */(struct stfsm *fsm);
	struct flash_info {
		char *name;
		u32 jedec_id;
		u16 ext_id;
		unsigned sector_size;
		u16 n_sectors;
		u32 flags;
		u32 max_freq;
		int (*config)(struct stfsm *);
	} cocci_id/* drivers/mtd/devices/st_spi_fsm.c 287 */;
	struct seq_rw_config {
		uint32_t flags;
		uint8_t cmd;
		int write;
		uint8_t addr_pads;
		uint8_t data_pads;
		uint8_t mode_data;
		uint8_t mode_cycles;
		uint8_t dummy_cycles;
	} cocci_id/* drivers/mtd/devices/st_spi_fsm.c 275 */;
	struct stfsm {
		struct device *dev;
		void __iomem *base;
		struct mtd_info mtd;
		struct mutex lock;
		struct flash_info *info;
		struct clk *clk;
		uint32_t configuration;
		uint32_t fifo_dir_delay;
		bool booted_from_spi;
		bool reset_signal;
		bool reset_por;
		struct stfsm_seq stfsm_seq_read;
		struct stfsm_seq stfsm_seq_write;
		struct stfsm_seq stfsm_seq_en_32bit_addr;
	} cocci_id/* drivers/mtd/devices/st_spi_fsm.c 255 */;
	struct stfsm_seq {
		uint32_t data_size;
		uint32_t addr1;
		uint32_t addr2;
		uint32_t addr_cfg;
		uint32_t seq_opc[5];
		uint32_t mode;
		uint32_t dummy;
		uint32_t status;
		uint8_t seq[16];
		uint32_t seq_cfg;
	}__packed __aligned(4) cocci_id/* drivers/mtd/devices/st_spi_fsm.c 242 */;
	struct platform_driver cocci_id/* drivers/mtd/devices/st_spi_fsm.c 2158 */;
	const struct of_device_id cocci_id/* drivers/mtd/devices/st_spi_fsm.c 2152 */[];
	struct device *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 2142 */;
	struct resource *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 2019 */;
	struct regmap *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1974 */;
	struct device_node *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1973 */;
	struct platform_device *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1970 */;
	u8 cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1850 */[5];
	u32 cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1849 */;
	u16 cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1848 */;
	struct flash_info *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1845 */;
	uint32_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1834 */[2];
	long long cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1798 */;
	struct mtd_info *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1791 */;
	struct erase_info *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1791 */;
	uint8_t *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1752 */;
	const u_char *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1746 */;
	u_char *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1670 */;
	size_t *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1670 */;
	loff_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1669 */;
	size_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1669 */;
	const uint8_t *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1574 */;
	uint32_t *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1551 */;
	uintptr_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1537 */;
	uint32_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1523 */[FLASH_PAGESIZE_32];
	uint32_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1522 */[4];
	uint16_t cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1392 */;
	struct stfsm_seq cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1357 */;
	struct seq_rw_config *cocci_id/* drivers/mtd/devices/st_spi_fsm.c 1033 */;
}
