cocci_test_suite() {
	const int cocci_id/* drivers/scsi/scsi_transport_spi.c 998 */;
	u8 *cocci_id/* drivers/scsi/scsi_transport_spi.c 997 */;
	enum spi_compare_returns (*cocci_id/* drivers/scsi/scsi_transport_spi.c 746 */)(struct scsi_device *,
											u8 *,
											u8 *,
											int);
	const char cocci_id/* drivers/scsi/scsi_transport_spi.c 714 */[];
	enum spi_compare_returns cocci_id/* drivers/scsi/scsi_transport_spi.c 708 */;
	u32 cocci_id/* drivers/scsi/scsi_transport_spi.c 665 */;
	u32 *cocci_id/* drivers/scsi/scsi_transport_spi.c 664 */;
	unsigned int *cocci_id/* drivers/scsi/scsi_transport_spi.c 664 */;
	const int cocci_id/* drivers/scsi/scsi_transport_spi.c 66 */[];
	u16 *cocci_id/* drivers/scsi/scsi_transport_spi.c 649 */;
	struct spi_internal cocci_id/* drivers/scsi/scsi_transport_spi.c 64 */;
	struct scsi_sense_hdr cocci_id/* drivers/scsi/scsi_transport_spi.c 629 */;
	enum spi_compare_returns{SPI_COMPARE_SUCCESS, SPI_COMPARE_FAILURE, SPI_COMPARE_SKIP_TEST,} cocci_id/* drivers/scsi/scsi_transport_spi.c 613 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/scsi_transport_spi.c 602 */;
	struct device_attribute *cocci_id/* drivers/scsi/scsi_transport_spi.c 599 */;
	ssize_t cocci_id/* drivers/scsi/scsi_transport_spi.c 598 */;
	struct spi_internal {
		struct scsi_transport_template t;
		struct spi_function_template *f;
	} cocci_id/* drivers/scsi/scsi_transport_spi.c 59 */;
	struct spi_internal *cocci_id/* drivers/scsi/scsi_transport_spi.c 560 */;
	struct spi_transport_attrs *cocci_id/* drivers/scsi/scsi_transport_spi.c 527 */;
	struct scsi_target *cocci_id/* drivers/scsi/scsi_transport_spi.c 524 */;
	struct {
		char *vendor;
		char *model;
		blist_flags_t flags;
	} cocci_id/* drivers/scsi/scsi_transport_spi.c 45 */[]__initdata;
	int *cocci_id/* drivers/scsi/scsi_transport_spi.c 441 */;
	char *cocci_id/* drivers/scsi/scsi_transport_spi.c 409 */;
	enum{SPI_BLIST_NOIUS=(__force blist_flags_t)0x1,} cocci_id/* drivers/scsi/scsi_transport_spi.c 40 */;
	struct device *cocci_id/* drivers/scsi/scsi_transport_spi.c 387 */;
	void *cocci_id/* drivers/scsi/scsi_transport_spi.c 387 */;
	int cocci_id/* drivers/scsi/scsi_transport_spi.c 387 */;
	size_t cocci_id/* drivers/scsi/scsi_transport_spi.c 283 */;
	blist_flags_t cocci_id/* drivers/scsi/scsi_transport_spi.c 212 */;
	struct scsi_device *cocci_id/* drivers/scsi/scsi_transport_spi.c 210 */;
	struct transport_container *cocci_id/* drivers/scsi/scsi_transport_spi.c 206 */;
	int cocci_id/* drivers/scsi/scsi_transport_spi.c 176 */(struct transport_container *tc,
								struct device *dev,
								struct device *cdev);
	void __exit cocci_id/* drivers/scsi/scsi_transport_spi.c 1616 */;
	struct spi_host_attrs cocci_id/* drivers/scsi/scsi_transport_spi.c 1575 */;
	struct spi_transport_attrs cocci_id/* drivers/scsi/scsi_transport_spi.c 1570 */;
	struct spi_function_template *cocci_id/* drivers/scsi/scsi_transport_spi.c 1558 */;
	struct scsi_transport_template *cocci_id/* drivers/scsi/scsi_transport_spi.c 1557 */;
	struct device cocci_id/* drivers/scsi/scsi_transport_spi.c 1460 */;
	umode_t cocci_id/* drivers/scsi/scsi_transport_spi.c 1457 */;
	struct attribute *cocci_id/* drivers/scsi/scsi_transport_spi.c 1441 */;
	struct kobject *cocci_id/* drivers/scsi/scsi_transport_spi.c 1438 */;
	struct attribute_group cocci_id/* drivers/scsi/scsi_transport_spi.c 1430 */;
	enum spi_signal_type cocci_id/* drivers/scsi/scsi_transport_spi.c 143 */;
	struct attribute *cocci_id/* drivers/scsi/scsi_transport_spi.c 1423 */[];
	struct attribute_container *cocci_id/* drivers/scsi/scsi_transport_spi.c 1365 */;
	struct {
		enum spi_signal_type value;
		char *name;
	} cocci_id/* drivers/scsi/scsi_transport_spi.c 133 */[];
	const char *cocci_id/* drivers/scsi/scsi_transport_spi.c 1267 */;
	char cocci_id/* drivers/scsi/scsi_transport_spi.c 1256 */[20];
	const unsigned char *cocci_id/* drivers/scsi/scsi_transport_spi.c 1253 */;
	void cocci_id/* drivers/scsi/scsi_transport_spi.c 1253 */;
	const char *constcocci_id/* drivers/scsi/scsi_transport_spi.c 1247 */[];
	struct scsi_cmnd *cocci_id/* drivers/scsi/scsi_transport_spi.c 1218 */;
	unsigned char *cocci_id/* drivers/scsi/scsi_transport_spi.c 1193 */;
	unsigned char cocci_id/* drivers/scsi/scsi_transport_spi.c 113 */[SCSI_SENSE_BUFFERSIZE];
	char cocci_id/* drivers/scsi/scsi_transport_spi.c 1126 */[8];
	unsigned int cocci_id/* drivers/scsi/scsi_transport_spi.c 1124 */;
	struct scsi_sense_hdr *cocci_id/* drivers/scsi/scsi_transport_spi.c 110 */;
	unsigned cocci_id/* drivers/scsi/scsi_transport_spi.c 109 */;
	enum dma_data_direction cocci_id/* drivers/scsi/scsi_transport_spi.c 108 */;
	const void *cocci_id/* drivers/scsi/scsi_transport_spi.c 107 */;
	struct work_queue_wrapper cocci_id/* drivers/scsi/scsi_transport_spi.c 1063 */;
	struct work_queue_wrapper *cocci_id/* drivers/scsi/scsi_transport_spi.c 1062 */;
	struct work_struct *cocci_id/* drivers/scsi/scsi_transport_spi.c 1060 */;
	struct work_queue_wrapper {
		struct work_struct work;
		struct scsi_device *sdev;
	} cocci_id/* drivers/scsi/scsi_transport_spi.c 1054 */;
}
