#include<bits/stdc++.h>
using namespace std;
struct PTOE{
	string symbol;
	string character;
	double atomic;
	int number;
}elements[115];
void Fill(){
    elements[1].symbol="H";
    elements[1].character="氢";
    elements[1].atomic=1.00;
    elements[1].number=1;

    elements[2].symbol="He";
    elements[2].character="氦";
    elements[2].atomic=4.0;
    elements[2].number=2;

    elements[3].symbol="Li";
    elements[3].character="锂";
    elements[3].atomic=7.0;
    elements[3].number=3;

    elements[4].symbol="Be";
    elements[4].character="铍";
    elements[4].atomic=9.0;
    elements[4].number=4;

    elements[5].symbol="B";
    elements[5].character="硼";
    elements[5].atomic=11.0;
    elements[5].number=5;

    elements[6].symbol="C";
    elements[6].character="碳";
    elements[6].atomic=12.0;
    elements[6].number=6;

    elements[7].symbol="N";
    elements[7].character="氮";
    elements[7].atomic=14.0;
    elements[7].number=7;

    elements[8].symbol="O";
    elements[8].character="氧";
    elements[8].atomic=16.0;
    elements[8].number=8;

    elements[9].symbol="F";
    elements[9].character="氟";
    elements[9].atomic=19.0;
    elements[9].number=9;

    elements[10].symbol="Ne";
    elements[10].character="氖";
    elements[10].atomic=20.0;
    elements[10].number=10;

    elements[11].symbol="Na";
    elements[11].character="钠";
    elements[11].atomic=23.0;
    elements[11].number=11;

    elements[12].symbol="Mg";
    elements[12].character="镁";
    elements[12].atomic=24.0;
    elements[12].number=12;

    elements[13].symbol="Al";
    elements[13].character="铝";
    elements[13].atomic=27.0;
    elements[13].number=13;

    elements[14].symbol="Si";
    elements[14].character="硅";
    elements[14].atomic=28.0;
    elements[14].number=14;

    elements[15].symbol="P";
    elements[15].character="磷";
    elements[15].atomic=31.0;
    elements[15].number=15;

    elements[16].symbol="S";
    elements[16].character="硫";
    elements[16].atomic=32.0;
    elements[16].number=16;

    elements[17].symbol="Cl";
    elements[17].character="氯";
    elements[17].atomic=35.5;
    elements[17].number=17;

    elements[18].symbol="Ar";
    elements[18].character="氩";
    elements[18].atomic=40.0;
    elements[18].number=18;

    elements[19].symbol="K";
    elements[19].character="钾";
    elements[19].atomic=39.0;
    elements[19].number=19;

    elements[20].symbol="Ca";
    elements[20].character="钙";
    elements[20].atomic=40.0;
    elements[20].number=20;

    elements[21].symbol="Sc";
    elements[21].character="钪";
    elements[21].atomic=45.0;
    elements[21].number=21;

    elements[22].symbol="Ti";
    elements[22].character="钛";
    elements[22].atomic=48.0;
    elements[22].number=22;

    elements[23].symbol="V";
    elements[23].character="钒";
    elements[23].atomic=51.0;
    elements[23].number=23;

    elements[24].symbol="Cr";
    elements[24].character="铬";
    elements[24].atomic=52.0;
    elements[24].number=24;

    elements[25].symbol="Mn";
    elements[25].character="锰";
    elements[25].atomic=55.0;
    elements[25].number=25;

    elements[26].symbol="Fe";
    elements[26].character="铁";
    elements[26].atomic=56.0;
    elements[26].number=26;

    elements[27].symbol="Co";
    elements[27].character="钴";
    elements[27].atomic=59.0;
    elements[27].number=27;

    elements[28].symbol="Ni";
    elements[28].character="镍";
    elements[28].atomic=59.0;
    elements[28].number=28;

    elements[29].symbol="Cu";
    elements[29].character="铜";
    elements[29].atomic=64.0;
    elements[29].number=29;

    elements[30].symbol="Zn";
    elements[30].character="锌";
    elements[30].atomic=65.0;
    elements[30].number=30;

    elements[31].symbol="Ga";
    elements[31].character="镓";
    elements[31].atomic=70.0;
    elements[31].number=31;

    elements[32].symbol="Ge";
    elements[32].character="锗";
    elements[32].atomic=73.0;
    elements[32].number=32;

    elements[33].symbol="As";
    elements[33].character="砷";
    elements[33].atomic=75.0;
    elements[33].number=33;

    elements[34].symbol="Se";
    elements[34].character="硒";
    elements[34].atomic=79.0;
    elements[34].number=34;

    elements[35].symbol="Br";
    elements[35].character="溴";
    elements[35].atomic=80.0;
    elements[35].number=35;

    elements[36].symbol="Kr";
    elements[36].character="氪";
    elements[36].atomic=84.0;
    elements[36].number=36;

    elements[37].symbol="Rb";
    elements[37].character="铷";
    elements[37].atomic=85.0;
    elements[37].number=37;

    elements[38].symbol="Sr";
    elements[38].character="锶";
    elements[38].atomic=88.0;
    elements[38].number=38;

    elements[39].symbol="Y";
    elements[39].character="钇";
    elements[39].atomic=89.0;
    elements[39].number=39;

    elements[40].symbol="Zr";
    elements[40].character="锆";
    elements[40].atomic=91.0;
    elements[40].number=40;
    
    elements[41].symbol="Nb";
    elements[41].character="镎";
    elements[41].atomic=93.0;
    elements[41].number=41;

    elements[42].symbol="Mo";
    elements[42].character="钼";
    elements[42].atomic=95.0;
    elements[42].number=42;

    elements[43].symbol="Tc";
    elements[43].character="钍";
    elements[43].atomic=98.0;
    elements[43].number=43;

    elements[44].symbol="Ru";
    elements[44].character="钯";
    elements[44].atomic=101.0;
    elements[44].number=44;

    elements[45].symbol="Rh";
    elements[45].character="铑";
    elements[45].atomic=102.0;
    elements[45].number=45;

    elements[46].symbol="Pd";
    elements[46].character="钯";
    elements[46].atomic=106.0;
    elements[46].number=46;

    elements[47].symbol="Ag";
    elements[47].character="银";
    elements[47].atomic=107.0;
    elements[47].number=47;

    elements[48].symbol="Cd";
    elements[48].character="镉";
    elements[48].atomic=112.0;
    elements[48].number=48;

    elements[49].symbol="In";
    elements[49].character="铟";
    elements[49].atomic=115.0;
    elements[49].number=49;

    elements[50].symbol="Sn";
    elements[50].character="锡";
    elements[50].atomic=119.0;
    elements[50].number=50;
}