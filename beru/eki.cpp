#include "eki.h"

// 根据资源文件创建
eki::eki(const std::wstring data_path) {

}

eki::~eki() {}

// 获取所有线路
std::vector<std::wstring> eki::get_lines() {

}
   
// 获取一条线路的所有站点,没有则返回空的vector
std::vector<std::wstring> eki::get_line_eki(const std::wstring line) {

}

// 获取所有站点,没有则返回空的vector
std::vector<std::wstring> eki::get_all_eki() {


}

// 获取某个站点对应的声音路径
std::wstring eki::get_sound(const std::wstring eki) {

}

// 播放声音-通过站点
bool eki::play_eki_sound(const std::wstring eki) {
	auto it = eki_sound.find(eki);
	if (it == eki_sound.end())
		return false;
	else
		return play_sound(it->second);
}

// 播放声音-通过路径
bool eki::play_sound(const std::wstring path) {

}