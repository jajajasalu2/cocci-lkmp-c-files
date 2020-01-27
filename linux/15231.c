cocci_test_suite() {
	struct led_netdev_data *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 97 */;
	struct device_attribute *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 95 */;
	char *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 95 */;
	struct device *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 94 */;
	ssize_t cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 94 */;
	enum netdev_led_attr{NETDEV_ATTR_LINK, NETDEV_ATTR_TX, NETDEV_ATTR_RX,} cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 59 */;
	void __exit cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 451 */;
	int __init cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 446 */;
	struct led_trigger cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 439 */;
	void cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 425 */;
	struct led_netdev_data cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 397 */;
	struct led_classdev *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 392 */;
	struct led_netdev_data {
		spinlock_t lock;
		struct delayed_work work;
		struct notifier_block notifier;
		struct led_classdev *led_cdev;
		struct net_device *net_dev;
		char device_name[IFNAMSIZ];
		atomic_t interval;
		unsigned int last_activity;
		unsigned long mode;
#define NETDEV_LED_LINK 0
#define NETDEV_LED_TX 1
#define NETDEV_LED_RX 2
#define NETDEV_LED_MODE_LINKUP 3
	} cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 39 */;
	struct rtnl_link_stats64 cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 352 */;
	unsigned int cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 351 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 350 */;
	struct work_struct *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 346 */;
	struct netdev_notifier_info *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 300 */;
	struct net_device *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 299 */;
	void *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 297 */;
	struct notifier_block *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 296 */;
	struct attribute *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 286 */[];
	int cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 267 */;
	unsigned long cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 266 */;
	enum netdev_led_attr cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 150 */;
	size_t cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 109 */;
	const char *cocci_id/* drivers/leds/trigger/ledtrig-netdev.c 108 */;
}
