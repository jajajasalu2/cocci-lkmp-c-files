cocci_test_suite() {
	struct bonded_device **cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 68 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 66 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 63 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 63 */;
	struct comedi_bond_private {
		char name[256];
		struct bonded_device **devs;
		unsigned int ndevs;
		unsigned int nchans;
	} cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 54 */;
	struct bonded_device {
		struct comedi_device *dev;
		unsigned int minor;
		unsigned int subdev;
		unsigned int nchans;
	} cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 47 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 337 */;
	struct bonded_device *cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 323 */;
	void cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 314 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 277 */;
	struct comedi_bond_private *cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 276 */;
	struct comedi_devconfig *cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 274 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 273 */;
	int cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 273 */;
	char cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 255 */[20];
	char cocci_id/* drivers/staging/comedi/drivers/comedi_bond.c 182 */[sizeof("/dev/comediXXXXXX")];
}
