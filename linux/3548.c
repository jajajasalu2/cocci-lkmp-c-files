cocci_test_suite() {
	struct sdricoh_host {
		struct device *dev;
		struct mmc_host *mmc;
		unsigned char __iomem *iobase;
		struct pci_dev *pci_dev;
		int app_cmd;
	} cocci_id/* drivers/mmc/host/sdricoh_cs.c 78 */;
	const struct pcmcia_device_id cocci_id/* drivers/mmc/host/sdricoh_cs.c 66 */[];
	struct pcmcia_driver cocci_id/* drivers/mmc/host/sdricoh_cs.c 514 */;
	void cocci_id/* drivers/mmc/host/sdricoh_cs.c 477 */;
	struct sdricoh_host cocci_id/* drivers/mmc/host/sdricoh_cs.c 409 */;
	struct device *cocci_id/* drivers/mmc/host/sdricoh_cs.c 388 */;
	void __iomem *cocci_id/* drivers/mmc/host/sdricoh_cs.c 385 */;
	struct pcmcia_device *cocci_id/* drivers/mmc/host/sdricoh_cs.c 382 */;
	struct pci_dev *cocci_id/* drivers/mmc/host/sdricoh_cs.c 381 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/sdricoh_cs.c 374 */;
	unsigned int cocci_id/* drivers/mmc/host/sdricoh_cs.c 362 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/sdricoh_cs.c 359 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/sdricoh_cs.c 338 */;
	struct page *cocci_id/* drivers/mmc/host/sdricoh_cs.c 305 */;
	size_t cocci_id/* drivers/mmc/host/sdricoh_cs.c 303 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/sdricoh_cs.c 252 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/sdricoh_cs.c 251 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/sdricoh_cs.c 248 */;
	u32 cocci_id/* drivers/mmc/host/sdricoh_cs.c 207 */;
	u8 *cocci_id/* drivers/mmc/host/sdricoh_cs.c 204 */;
	struct sdricoh_host *cocci_id/* drivers/mmc/host/sdricoh_cs.c 203 */;
	int cocci_id/* drivers/mmc/host/sdricoh_cs.c 203 */;
	unsigned char cocci_id/* drivers/mmc/host/sdricoh_cs.c 153 */;
	unsigned short cocci_id/* drivers/mmc/host/sdricoh_cs.c 113 */;
}
