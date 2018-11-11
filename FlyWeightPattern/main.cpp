#include <iostream>
#include <ctime>
#include "concrete_flyweight.h"
#include "flyweight_factory.h"

using namespace std;
map<string, IPlayer*> PlayerFactory::m_map = map<string, IPlayer*>();

// define player types and weapon types
static string s_playerType[2] = {"T","CT"};
static string s_weapon[4] = { "AK-47", "Maverick", "Gut Knife", "Desert Eagle" };

// define a method to get length of type amounts
// while using #define to write a function the parameters can be changed
#define GET_ARRAY_LEN(array, len) {len = (sizeof(array) / sizeof(array[0]));}

/**
 * 享元模式：
 * 当需要建立大量具有相同成员变量的对象时，可以只保留一个对象，
 * 当真正需要改变外部状态时再去领出这个具体对象来改变外部状态
 * 比如这里的多个玩家，看似是只有一个对象，但是在渲染中，如果
 * 保存多个玩家对象明显浪费内存，所以干脆只保留一个对象，访问时根据玩家类别提取对象池中的对象指针
 * 每一次循环中在对特定玩家分配武器后进行玩家（当然也可以自己添加具体玩家的皮肤种类）和武器的绘制，
 * 然后下一次循环中复用这个 “数据对象” 就可以了
 *
 * 在游戏中享元模式的核心思想：
 * 多个玩家客户端可以有自己的外部状态对象（保存武器，位置，血量，剩余弹药等）
 * 但是在真正绘制，即游戏的内部保存数据的时候不需要为每个玩家都保存一份 “任务清单”
 * 因此为了减少内存，其实游戏内部只有根据 “ 任务清单 ” 来划分的对象，即一个队伍共享一个
 * 完整的 “玩家对象” ， 每次渲染时游戏后台会循环遍历所有玩家的所有状态，然后
 * 逐个根据玩家所属队伍，去修改队伍共享的 “玩家对象” 的外部状态，以达到 “绘制每个玩家” 的效果
 * **/

int main() {
    srand((unsigned)time(nullptr));

    int playerLen;
    int weaponLen;
    GET_ARRAY_LEN(s_playerType, playerLen);
    GET_ARRAY_LEN(s_weapon, weaponLen);

    cout << playerLen << endl;
    cout << weaponLen << endl;

    // assume we need 10 players
    for(int i=0; i < 10; i++){
        // generate random player type and weapon type
        int typeIndex = rand() % playerLen;
        int weaponIndex = rand() % weaponLen;
        string type = s_playerType[typeIndex];
        string weapon = s_weapon[weaponIndex];

        // get player object
        IPlayer *p = PlayerFactory::getPlayer(type);

        // assign weapon for player
        p->assignWeapon(weapon);

        // show mission
        p -> mission();
        cout << p << endl;
    }

    getchar();

    return 0;
}