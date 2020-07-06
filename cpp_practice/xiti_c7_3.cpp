#include <iostream>


using namespace std;

typedef struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
}Box;

void show_box(Box box1);
void calc_box_volume(Box* pbox);



void show_box(Box box1) {
	cout << 
		"box: " << box1.maker << endl <<
		"height: " << box1.height << endl <<
		"width: " << box1.width << endl <<
		"length: " << box1.length << endl <<
		"volume: " << box1.volume
		<< endl;
}

void calc_box_volume(Box* pbox) {
	pbox->volume = pbox->width * pbox->height * pbox->length;
}

//int main() {
int main33() {

	Box box1 = {
		"box1",
		2.5,
		3.6,
		7,
		0
	};

	show_box(box1);

	calc_box_volume(&box1);

	show_box(box1);

	return 0;
}