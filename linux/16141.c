cocci_test_suite() {
	enum jr3_pci_poll_state{state_jr3_poll, state_jr3_init_wait_for_offset, state_jr3_init_transform_complete, state_jr3_init_set_full_scale_complete, state_jr3_init_use_offset_complete, state_jr3_done,} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 98 */;
	union jr3_pci_single_range {
		struct comedi_lrange l;
		char _reserved[offsetof(struct comedi_lrange, range[1])];
	} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 93 */;
	struct jr3_pci_dev_private {
		struct timer_list timer;
		struct comedi_device *dev;
	} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 88 */;
	struct jr3_pci_poll_delay {
		int min;
		int max;
	} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 83 */;
	struct pci_driver cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 805 */;
	const struct pci_device_id cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 795 */[];
	const struct pci_device_id *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 790 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 782 */;
	void cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 772 */;
	struct jr3_pci_transform {
		struct {
			u16 link_type;
			s16 link_amount;
		} link[8];
	} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 76 */;
	struct jr3_block cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 682 */;
	struct jr3_pci_dev_private *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 675 */;
	const struct jr3_pci_board *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 674 */;
	struct pci_dev *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 673 */;
	char cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 665 */;
	char cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 661 */[ARRAY_SIZE(sensor0->copyright) + 1];
	struct jr3_block __iomem *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 624 */;
	struct jr3_pci_poll_delay cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 600 */;
	struct timer_list *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 579 */;
	const struct jr3_pci_board cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 57 */[];
	union jr3_pci_single_range *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 524 */;
	struct force_array __iomem *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 523 */;
	struct jr3_pci_board {
		const char *name;
		int n_subdevs;
	} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 52 */;
	enum link_types cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 491 */;
	struct jr3_pci_transform cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 484 */;
	enum jr3_pci_boardid{BOARD_JR3_1, BOARD_JR3_2, BOARD_JR3_3, BOARD_JR3_4,} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 45 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 421 */;
	u32 __iomem *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 367 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 344 */;
	const u8 *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 333 */;
	size_t cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 333 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 332 */;
	int *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 307 */;
	u16 cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 272 */;
	struct jr3_pci_subdev_private *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 270 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 268 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 267 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 266 */;
	struct six_axis_t cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 202 */;
	struct jr3_sensor __iomem *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 202 */;
	struct six_axis_t {
		s16 fx;
		s16 fy;
		s16 fz;
		s16 mx;
		s16 my;
		s16 mz;
	} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 168 */;
	const struct jr3_pci_transform *cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 135 */;
	short cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 135 */;
	int cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 129 */;
	struct jr3_pci_subdev_private {
		struct jr3_sensor __iomem *sensor;
		unsigned long next_time_min;
		enum jr3_pci_poll_state state;
		int serial_no;
		int model_no;
		union jr3_pci_single_range range[9];
		const struct comedi_lrange *range_table_list[8 * 7 + 2];
		unsigned int maxdata_list[8 * 7 + 2];
		u16 errors;
		int retries;
	} cocci_id/* drivers/staging/comedi/drivers/jr3_pci.c 107 */;
}
