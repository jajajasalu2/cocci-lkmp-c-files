cocci_test_suite() {
	const u8 cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 890 */[];
	unsigned char cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 887 */;
	u16 cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 711 */[RX_TUNING_CNT];
	u16 *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 693 */;
	struct mmc_command cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 674 */;
	u32 cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 617 */;
	unsigned int cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 617 */;
	int cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 617 */;
	u8 cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 579 */;
	u16 cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 562 */;
	u8 *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 550 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 549 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 548 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 546 */;
	size_t cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 457 */;
	struct rtsx_usb_sdmmc {
		struct platform_device *pdev;
		struct rtsx_ucr *ucr;
		struct mmc_host *mmc;
		struct mmc_request *mrq;
		struct mutex host_mutex;
		u8 ssc_depth;
		unsigned int clock;
		bool vpclk;
		bool double_clk;
		bool host_removal;
		bool card_exist;
		bool initial_mode;
		bool ddr_mode;
		unsigned char power_mode;
#ifdef RTSX_USB_USE_LEDS_CLASS
		struct led_classdev led;
		char led_name[32];
		struct work_struct led_work;
#endif
	} cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 33 */;
	struct platform_driver cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1456 */;
	const struct platform_device_id cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1447 */[];
	const struct dev_pm_ops cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1442 */;
	struct device *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1431 */;
	struct rtsx_ucr *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1337 */;
	struct platform_device *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1333 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1309 */;
	struct rtsx_usb_sdmmc *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1307 */;
	void cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1307 */;
	struct work_struct *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1284 */;
	struct rtsx_usb_sdmmc cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1275 */;
	enum led_brightness cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1272 */;
	struct led_classdev *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1271 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1260 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1111 */;
	bool *cocci_id/* drivers/mmc/host/rtsx_usb_sdmmc.c 1048 */;
}
