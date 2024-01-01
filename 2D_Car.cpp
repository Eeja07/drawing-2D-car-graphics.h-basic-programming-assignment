#include <graphics.h>
#include <math.h>
int main()
{
    int gd = DETECT, gm;
    char path[] = "";
    char judul[] = "MOBIL";
    int width = 1050;
    int height = 800;
    initgraph(&gd, &gm, path);
    initwindow(width, height);
    rectangle(50, 50, 1000, 750);              // garis tepi window BGI
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 50); // atur text
    outtextxy(425, 125, judul);                // text judul
    circle(250, 600, 75);                      // ban kiri (1)
    circle(250, 600, 50);                      // ban kiri (2)
    circle(250, 600, 40);                      // ban kiri (3)
    circle(250, 600, 15);                      // ban kiri (4)
    arc(250, 600, 0, 180, 100);                // tutup ban kiri
    line(150, 590, 175, 590);                  // garis horizontal ban kiri ( kiri )
    line(325, 590, 350, 590);                  // garis horizontal ban kiri ( kanan )
    circle(750, 600, 75);                      // ban kanan (1)
    circle(750, 600, 50);                      // ban kanan (2)
    circle(750, 600, 40);                      // ban kanan (3)
    circle(750, 600, 15);                      // ban kanan (4)
    arc(750, 600, 0, 180, 100);                // tutup ban kanan
    line(650, 590, 675, 590);                  // garis horizontal ban kanan ( kiri )
    line(825, 590, 850, 590);                  // garis horizontal ban kanan ( kanan )
    line(350, 600, 650, 600);                  // garis horizontal tutup ban kiri dan kanan ( rangka bawah )
    line(135, 600, 150, 600);                  // garis horizontal tutup ban kiri ( rangka bawah )
    line(850, 600, 880, 600);                  // garis horizontal tutup ban kanan ( rangka bawah )
    line(105, 450, 105, 570);                  // garis vertikal kiri ban kiri ( rangka tengah )
    arc(305, 795, 90, 120, 400);               // tutup kap mobil ( rangka tengah )
    line(305, 395, 750, 395);                  // garis horizontal bawah kaca ( rangka tengah )
    arc(750, 570, 0, 90, 175);                 // tutup bagasi mobil ( rangka tengah )
    line(305, 395, 400, 250);                  // garis miring keatas ( rangka atas )
    line(400, 250, 675, 250);                  // garis horizontal ( rangka atas )
    line(675, 250, 750, 395);                  // garis miring kebawah ( rangka atas )
    line(355, 355, 410, 275);                  // garis miring keatas bagian dalam ( rangka atas )
    line(410, 275, 665, 275);                  // garis horizontal bagian dalam ( rangka atas )
    line(665, 275, 725, 395);                  // garis miring kebawah bagian dalam ( rangka atas )
    line(535, 275, 535, 395);                  // garis vertikal bagian dalam ( rangka atas ) kiri
    line(565, 275, 565, 395);                  // garis vertikal bagian dalam ( rangka atas ) tengah
    line(550, 275, 550, 395);                  // garis vertikal bagian dalam ( rangka atas ) kanan
    rectangle(90, 570, 135, 610);              // kotak ban kiri
    rectangle(90, 475, 105, 525);              // kotak lampu depan mobil
    rectangle(330, 355, 355, 415);             // kotak spion mobil
    rectangle(490, 415, 535, 425);             // kotak handle pintu mobil
    rectangle(880, 570, 945, 610);             // kotak ban kanan
    getch();
    closegraph();
    return 0;
}