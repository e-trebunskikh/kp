int user_total(int category, int days, char breakfast) {  //выставление счета на проживание
	int total;
	int price_break = 300;	//завтрак
	int single = 3000;		//одноместный номер
	int doubl = 4500;		//двуместный номер
	int suit = 6000;		//студия (апартаменты)
	int number = 3000;
	int time = 24;
	int service = 300;		//сервисный сбор (уборка номера и проч.)

	if (days > 0) {
		switch (category) {
		case 1:				//одноместный номер
			number = single;
			break;
		case 2:				//двуместный номер
			number = doubl;
			break;
		case 3:  //студия
			number = suit;
			break;
		default:
			total = -1; // Некорректная команда
		}
		if ((category == 1) || (category == 2) || (category == 3)) {
			if (breakfast == 'Y' || breakfast == 'y') {
				total = (price_break + number + time + service) * days;
			}
			else {
				total = (number + time + service) * days;
			}
		}
		else {
			total = -1; // Некорректная команда
		}
	}
	else {
		total = -1; // Некорректная команда
	}

	return total;
}
