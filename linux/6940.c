cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 629 */;
	struct platform_device_id cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 620 */[];
	struct pcr_handle *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 536 */;
	struct memstick_host *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 533 */;
	struct platform_device *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 524 */;
	u8 *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 50 */;
	pm_message_t cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 495 */;
	u16 cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 49 */;
	enum memstick_param cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 433 */;
	struct realtek_pci_ms cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 392 */;
	struct work_struct *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 389 */;
	struct realtek_pci_ms *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 38 */;
	void cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 38 */;
	struct memstick_request *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 340 */;
	struct device *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 33 */;
	u8 cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 267 */;
	struct realtek_pci_ms {
		struct platform_device *pdev;
		struct rtsx_pcr *pcr;
		struct memstick_host *msh;
		struct memstick_request *req;
		struct mutex host_mutex;
		struct work_struct handle_req;
		u8 ssc_depth;
		unsigned int clock;
		unsigned char ifmode;
		bool eject;
	} cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 18 */;
	bool cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 137 */;
	struct memstick_dev *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 136 */;
	unsigned int cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 133 */;
	struct scatterlist *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 129 */;
	unsigned char cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 128 */;
	struct rtsx_pcr *cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 109 */;
	int cocci_id/* drivers/memstick/host/rtsx_pci_ms.c 107 */;
}
