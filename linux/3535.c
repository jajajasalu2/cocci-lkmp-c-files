cocci_test_suite() {
	struct mmc_command *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 95 */;
	u8 cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 879 */[];
	unsigned char cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 876 */;
	struct realtek_pci_sdmmc cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 786 */;
	struct work_struct *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 783 */;
	u32 cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 735 */[RX_TUNING_CNT];
	u32 *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 715 */;
	struct mmc_command cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 691 */;
	u8 cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 66 */[8];
	int cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 65 */;
	u32 cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 635 */;
	unsigned int cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 635 */;
	u16 cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 62 */;
	struct realtek_pci_sdmmc *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 62 */;
	void cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 62 */;
	u8 cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 606 */;
	bool cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 606 */;
	u8 *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 576 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 575 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 572 */;
	struct device *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 50 */;
	size_t cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 439 */;
	struct mmc_card *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 432 */;
	struct realtek_pci_sdmmc {
		struct platform_device *pdev;
		struct rtsx_pcr *pcr;
		struct mmc_host *mmc;
		struct mmc_request *mrq;
#define SDMMC_WORKQ_NAME "rtsx_pci_sdmmc_workq"
		struct work_struct work;
		struct mutex host_mutex;
		u8 ssc_depth;
		unsigned int clock;
		bool vpclk;
		bool double_clk;
		bool eject;
		bool initial_mode;
		int power_state;
#define SDMMC_POWER_ON 1
#define SDMMC_POWER_OFF 0
		int sg_count;
		s32 cookie;
		int cookie_sg_count;
		bool using_cookie;
	} cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 24 */;
	struct platform_driver cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 1463 */;
	const struct platform_device_id cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 1454 */[];
	struct pcr_handle *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 1375 */;
	struct platform_device *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 1362 */;
	struct rtsx_pcr *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 1322 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 1321 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 1308 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/rtsx_pci_sdmmc.c 1034 */;
}
