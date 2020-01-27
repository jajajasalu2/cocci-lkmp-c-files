cocci_test_suite() {
	void __exit cocci_id/* drivers/usb/host/ehci-tegra.c 610 */;
	void cocci_id/* drivers/usb/host/ehci-tegra.c 610 */;
	struct reset_control *cocci_id/* drivers/usb/host/ehci-tegra.c 59 */;
	int __init cocci_id/* drivers/usb/host/ehci-tegra.c 584 */;
	struct tegra_ehci_hcd cocci_id/* drivers/usb/host/ehci-tegra.c 580 */;
	const struct ehci_driver_overrides cocci_id/* drivers/usb/host/ehci-tegra.c 579 */;
	struct device_node *cocci_id/* drivers/usb/host/ehci-tegra.c 55 */;
	struct platform_driver cocci_id/* drivers/usb/host/ehci-tegra.c 547 */;
	struct usb_hcd *cocci_id/* drivers/usb/host/ehci-tegra.c 541 */;
	struct platform_device *cocci_id/* drivers/usb/host/ehci-tegra.c 539 */;
	struct usb_otg cocci_id/* drivers/usb/host/ehci-tegra.c 475 */;
	struct tegra_ehci_hcd {
		struct tegra_usb_phy *phy;
		struct clk *clk;
		struct reset_control *rst;
		int port_resuming;
		bool needs_double_reset;
		enum tegra_usb_phy_port_speed port_speed;
	} cocci_id/* drivers/usb/host/ehci-tegra.c 44 */;
	struct tegra_ehci_soc_config {
		bool has_hostpc;
	} cocci_id/* drivers/usb/host/ehci-tegra.c 40 */;
	struct usb_phy *cocci_id/* drivers/usb/host/ehci-tegra.c 393 */;
	struct resource *cocci_id/* drivers/usb/host/ehci-tegra.c 387 */;
	const struct tegra_ehci_soc_config *cocci_id/* drivers/usb/host/ehci-tegra.c 386 */;
	const struct of_device_id *cocci_id/* drivers/usb/host/ehci-tegra.c 385 */;
	struct hc_driver __read_mostly cocci_id/* drivers/usb/host/ehci-tegra.c 38 */;
	const struct of_device_id cocci_id/* drivers/usb/host/ehci-tegra.c 377 */[];
	const struct tegra_ehci_soc_config cocci_id/* drivers/usb/host/ehci-tegra.c 373 */;
	struct dma_aligned_buffer cocci_id/* drivers/usb/host/ehci-tegra.c 327 */;
	uintptr_t cocci_id/* drivers/usb/host/ehci-tegra.c 322 */;
	size_t cocci_id/* drivers/usb/host/ehci-tegra.c 318 */;
	struct dma_aligned_buffer *cocci_id/* drivers/usb/host/ehci-tegra.c 317 */;
	gfp_t cocci_id/* drivers/usb/host/ehci-tegra.c 315 */;
	struct urb *cocci_id/* drivers/usb/host/ehci-tegra.c 315 */;
	int cocci_id/* drivers/usb/host/ehci-tegra.c 315 */;
	struct dma_aligned_buffer {
		void *kmalloc_ptr;
		void *old_xfer_buffer;
		u8 data[0];
	} cocci_id/* drivers/usb/host/ehci-tegra.c 284 */;
	unsigned long cocci_id/* drivers/usb/host/ehci-tegra.c 183 */;
	u32 cocci_id/* drivers/usb/host/ehci-tegra.c 182 */;
	u32 __iomem *cocci_id/* drivers/usb/host/ehci-tegra.c 181 */;
	struct tegra_ehci_hcd *cocci_id/* drivers/usb/host/ehci-tegra.c 180 */;
	struct ehci_hcd *cocci_id/* drivers/usb/host/ehci-tegra.c 179 */;
	char *cocci_id/* drivers/usb/host/ehci-tegra.c 175 */;
	u16 cocci_id/* drivers/usb/host/ehci-tegra.c 172 */;
}
