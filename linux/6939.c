cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 858 */;
	struct platform_device_id cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 849 */[];
	struct memstick_host *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 758 */;
	struct platform_device *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 756 */;
	u8 *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 64 */;
	u16 cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 63 */;
	enum memstick_param cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 552 */;
	struct rtsx_usb_ms cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 509 */;
	struct work_struct *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 506 */;
	struct rtsx_ucr *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 49 */;
	struct rtsx_usb_ms *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 47 */;
	void cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 47 */;
	struct memstick_request *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 458 */;
	struct device *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 42 */;
	u8 cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 383 */;
	struct rtsx_usb_ms {
		struct platform_device *pdev;
		struct rtsx_ucr *ucr;
		struct memstick_host *msh;
		struct memstick_request *req;
		struct mutex host_mutex;
		struct work_struct handle_req;
		struct delayed_work poll_card;
		u8 ssc_depth;
		unsigned int clock;
		int power_mode;
		unsigned char ifmode;
		bool eject;
		bool system_suspending;
	} cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 24 */;
	struct memstick_dev *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 239 */;
	unsigned int cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 235 */;
	struct scatterlist *cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 231 */;
	unsigned char cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 230 */;
	int cocci_id/* drivers/memstick/host/rtsx_usb_ms.c 208 */;
}
